module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,
  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

wire xip_mode  = (in_paddr >= flash_addr_start) && (in_paddr <= flash_addr_end);
wire spi_mode  = (in_paddr >= 32'h10001000) && (in_paddr <= 32'h10001fff);
wire addr_valid = xip_mode || spi_mode;

localparam S_IDLE  = 4'd0;  // 空闲状态
localparam S_TX0   = 4'd1;  // 发送Flash读命令
localparam S_TX1   = 4'd2;  // 发送Flash访问地址
localparam S_DIV   = 4'd3;  // 配置SPI时钟分频
localparam S_CTRL  = 4'd4;  // 配置SPI控制寄存器
localparam S_SS    = 4'd5;  // 使能Flash片选
localparam S_START = 4'd6;  // 启动SPI传输
localparam S_WAIT  = 4'd7;  // 等待传输完成
localparam S_GET   = 4'd8;  // 读取接收数据

reg [3:0] state, next_state;  // 状态寄存器
reg [31:0] flash_addr;        // 缓存XIP模式下的Flash访问地址
reg [31:0] rdata;             // 缓存从SPI控制器读取的数据
wire ack_o;
wire[31:0] dat_o;
wire ctrl_busy = dat_o[8];

always @(posedge clock or posedge reset) begin
  if (reset) begin
    state <= S_IDLE;
  end else begin
    state <= next_state;
  end
end

always @(posedge clock or posedge reset) begin
  if (reset) begin
    flash_addr <= 32'h0;
  end else if (xip_mode && in_psel && in_penable && !in_pwrite && state == S_IDLE) begin
    flash_addr <= (in_paddr - 32'h30000000);  // 捕获当前访问的Flash地址
  end
end

// 缓存SPI控制器返回的数据（在S_GET状态）
always @(posedge clock) begin
  if (state == S_GET && ack_o) begin
    rdata <= dat_o;  // 数据就绪时锁存
  end
end

always @(*) begin
  case (state)
    S_IDLE:  // 空闲状态：收到XIP读请求时进入发送命令阶段
      next_state = (xip_mode && in_psel && in_penable && !in_pwrite) ? S_TX0 : S_IDLE;
    S_TX0:   // 发送命令：SPI控制器应答后进入发送地址阶段
      next_state = ack_o ? S_TX1 : S_TX0;
    S_TX1:   // 发送地址：SPI控制器应答后进入配置分频阶段
      next_state = ack_o ? S_DIV : S_TX1;
    S_DIV:   // 配置分频：SPI控制器应答后进入配置控制寄存器阶段
      next_state = ack_o ? S_CTRL : S_DIV;
    S_CTRL:  // 配置控制：SPI控制器应答后进入片选使能阶段
      next_state = ack_o ? S_SS : S_CTRL;
    S_SS:    // 使能片选：SPI控制器应答后进入启动传输阶段
      next_state = ack_o ? S_START : S_SS;
    S_START: // 启动传输：SPI控制器应答后进入等待阶段
      next_state = ack_o ? S_WAIT : S_START;
    S_WAIT:  // 等待中断：收到SPI中断后进入读取数据阶段
      next_state = (!ctrl_busy) ? S_GET : S_WAIT; 
    S_GET:   // 读取数据：SPI控制器应答后回到空闲状态
      next_state = ack_o ? S_IDLE : S_GET;
    default: next_state = S_IDLE;
  endcase
end

// SPI控制器内部寄存器地址（根据状态切换）
wire [4:0] spi_adr = xip_mode ? 
  (state == S_TX0   ? 5'h00 :  // 对应0x10001000（发送缓冲区）
   state == S_TX1   ? 5'h04 :  // 对应0x10001004（地址寄存器）
   state == S_DIV   ? 5'h14 :  // 对应0x10001014（分频寄存器）
   state == S_CTRL  ? 5'h10 :  // 对应0x10001010（控制寄存器）
   state == S_SS    ? 5'h18 :  // 对应0x10001018（片选寄存器）
   state == S_START ? 5'h10 :  // 复用控制寄存器（启动传输）
   state == S_WAIT  ? 5'h10 :  
   state == S_GET   ? 5'h00 :  // 读取接收缓冲区
   5'h00) :
  (in_paddr[4:0]);  // SPI模式：直接使用地址低5位

// 写入SPI控制器的数据（根据状态生成）
wire [31:0] spi_dat = xip_mode ? 
  (state == S_TX0   ? 32'h0 :  // 
   state == S_TX1   ? {8'h3, flash_addr[23:0]} :  // Flash读命令（0x03为标准读命令）.低24位为Flash地址
   state == S_DIV   ? 32'h00000001 :  // 分频系数1（SCLK = 系统时钟/2）
   state == S_CTRL  ? 32'h00002040 :   
   state == S_SS    ? 32'h00000001 :  // 片选使能（bit0=1选中第一个从机）
   state == S_START ? 32'h00002140 :  
   32'h00000000) :
   in_pwdata;  // SPI模式：直接使用输入数据

// SPI控制器写使能（根据状态或SPI模式写命令）
wire spi_we = xip_mode ? 
  (state == S_TX0 || state == S_TX1 || state == S_DIV || 
   state == S_CTRL || state == S_SS || state == S_START) :
  in_pwrite;

// SPI控制器访问使能（stb=片选，cyc=传输有效）
wire spi_stb = addr_valid ? 
  (xip_mode ? state != S_IDLE : in_psel) : 
  1'b0;
wire spi_cyc = addr_valid ? 
  (xip_mode ? state != S_IDLE : in_penable) : 
  1'b0;

wire [31:0] data_swapped = {dat_o[7:0], dat_o[15:8], dat_o[23:16], dat_o[31:24]};
wire [31:0]  dataplace =  (flash_addr & 32'h7) << 3;  // 0~24位偏移
wire [31:0] xip_prdata = (data_swapped << dataplace[4:0]) | (data_swapped >> (32 - dataplace[4:0]));
wire[3:0] pstrb = xip_mode ? 
  ((state == S_TX0 || state == S_TX1 || state == S_DIV || 
   state == S_CTRL || state == S_SS || state == S_START) ? 4'hF : 4'h0) :
   in_pstrb; 
assign in_pready = xip_mode ? 
  ((state == S_GET) ? ack_o : 1'b0) :
  (spi_mode ? ack_o : 1'b0);
// 读数据：XIP模式返回处理后的数据；SPI模式直接返回SPI控制器数据
assign in_prdata = xip_mode ? 
  data_swapped :
  (spi_mode ? dat_o : 32'h0);
// 错误信号：暂不支持错误处理
assign in_pslverr = 1'b0;

spi_top u0_spi_top (
  .wb_clk_i  (clock),          // 系统时钟
  .wb_rst_i  (reset),          // 系统复位（高有效）
  .wb_adr_i  (spi_adr),        // 内部寄存器地址（低5位）
  .wb_dat_i  (spi_dat),        // 写入数据
  .wb_dat_o  (dat_o),          // 读出数据（通过rdata缓存）
  .wb_sel_i  (pstrb),       // 字节选通（与APB一致）
  .wb_we_i   (spi_we),         // 写使能
  .wb_stb_i  (spi_stb),        // 传输片选
  .wb_cyc_i  (spi_cyc),        // 传输有效
  .wb_ack_o  (ack_o),      // 传输应答（内部状态机使用）
  .wb_err_o  (in_pslverr),     // 错误信号（未使用）
  .wb_int_o  (spi_irq_out), // 中断输出（连接到spi_irq_out）
  .ss_pad_o  (spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

always @(posedge clock) begin
  if (xip_mode && in_pwrite && in_psel && in_penable) begin
    // $display("[%0t] ERROR: Write operation not supported in XIP mode (addr=0x%08x)", $time, in_paddr);
    // $stop;  // 可选：仿真时停止
  end
end

endmodule
