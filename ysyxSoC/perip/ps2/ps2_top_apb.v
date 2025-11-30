module ps2_top_apb(
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
  input         ps2_clk,
  input         ps2_data
);

  reg [31:0] prdata_reg;
  reg        pready_reg;
  assign in_prdata = prdata_reg;
  assign in_pready = pready_reg;
  assign in_pslverr = 1'b0;

  // PS/2 时钟同步与下降沿检测（抗 metastability）
  reg [2:0] ps2_clk_sync;
  always @(posedge clock) begin
    ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
  end
  wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];  // 检测 ps2_clk 下降沿

  // 状态机：描述 PS/2 帧接收过程（1起始位+8数据位+1奇偶位+1停止位）
  localparam [3:0] S_IDLE    = 4'd0;  // 等待起始位（低电平）
  localparam [3:0] S_BIT0    = 4'd1;  // 接收数据位0（LSB）
  localparam [3:0] S_BIT1    = 4'd2;  // 接收数据位1
  localparam [3:0] S_BIT2    = 4'd3;  // 接收数据位2
  localparam [3:0] S_BIT3    = 4'd4;  // 接收数据位3
  localparam [3:0] S_BIT4    = 4'd5;  // 接收数据位4
  localparam [3:0] S_BIT5    = 4'd6;  // 接收数据位5
  localparam [3:0] S_BIT6    = 4'd7;  // 接收数据位6
  localparam [3:0] S_BIT7    = 4'd8;  // 接收数据位7（MSB）
  localparam [3:0] S_PARITY  = 4'd9;  // 接收奇偶位
  localparam [3:0] S_STOP    = 4'd10; // 接收停止位（高电平）

  reg [3:0] current_state, next_state;

  // FIFO（32字节环形缓冲区）
  reg [7:0] fifo[31:0];
  reg [4:0] w_ptr, r_ptr;  // 5位指针覆盖32字节地址

  // 接收缓存与校验位
  reg [7:0] rx_data;       // 存储8位数据（LSB->MSB）
  reg       parity_bit;    // 奇偶位
  reg       stop_bit;      // 停止位

  // 状态机时序逻辑
  always @(posedge clock) begin
    if (reset)
      current_state <= S_IDLE;
    else
      current_state <= next_state;
  end

  // 状态机组合逻辑（状态转换）
  always @(*) begin
    case (current_state)
      S_IDLE:   // 检测到起始位（低电平）且采样有效时进入数据接收
        next_state = (sampling && ps2_data == 1'b0) ? S_BIT0 : S_IDLE;
      S_BIT0:   next_state = sampling ? S_BIT1 : S_BIT0;  // 采样完位0进入位1
      S_BIT1:   next_state = sampling ? S_BIT2 : S_BIT1;
      S_BIT2:   next_state = sampling ? S_BIT3 : S_BIT2;
      S_BIT3:   next_state = sampling ? S_BIT4 : S_BIT3;
      S_BIT4:   next_state = sampling ? S_BIT5 : S_BIT4;
      S_BIT5:   next_state = sampling ? S_BIT6 : S_BIT5;
      S_BIT6:   next_state = sampling ? S_BIT7 : S_BIT6;
      S_BIT7:   next_state = sampling ? S_PARITY : S_BIT7;  // 采样完位7进入奇偶位
      S_PARITY: next_state = sampling ? S_STOP : S_PARITY;   // 采样完奇偶位进入停止位
      S_STOP:   next_state = sampling ? S_IDLE : S_STOP;     // 采样完停止位回到空闲
      default:  next_state = S_IDLE;
    endcase
  end

  // PS/2 数据接收与FIFO写入逻辑（带有效性校验）
  always @(posedge clock) begin
    if (reset) begin
      rx_data    <= 8'd0;
      parity_bit <= 1'b0;
      stop_bit   <= 1'b0;
      w_ptr      <= 5'd0;
    end else begin
      if (sampling) begin  // 仅在PS/2时钟下降沿采样数据
        case (current_state)
          S_BIT0:   rx_data[0] <= ps2_data;  // 采样数据位0（LSB）
          S_BIT1:   rx_data[1] <= ps2_data;
          S_BIT2:   rx_data[2] <= ps2_data;
          S_BIT3:   rx_data[3] <= ps2_data;
          S_BIT4:   rx_data[4] <= ps2_data;
          S_BIT5:   rx_data[5] <= ps2_data;
          S_BIT6:   rx_data[6] <= ps2_data;
          S_BIT7:   rx_data[7] <= ps2_data;  // 采样数据位7（MSB）
          S_PARITY: parity_bit <= ps2_data;  // 采样奇偶位
          S_STOP: begin
            stop_bit <= ps2_data;  // 采样停止位
            // 校验：停止位为1（有效）且奇校验正确（数据位异或结果 ^ 奇偶位 = 1）
            if (ps2_data == 1'b1 && (^rx_data ^ parity_bit) == 1'b1) begin
              // FIFO未满则写入数据
              if (((w_ptr + 1) & 5'b11111) != r_ptr) begin
                fifo[w_ptr] <= rx_data;
                w_ptr <= (w_ptr + 1) & 5'b11111;  // 环形递增
                $display("写入FIFO: %02x (w_ptr=%d)", rx_data, w_ptr);  // 调试信息
              end else begin
                $display("FIFO溢出！丢弃数据: %02x", rx_data);
              end
            end else begin
              $display("无效帧！停止位=%b 校验位=%b 数据=%02x", 
                       ps2_data, parity_bit, rx_data);
            end
          end
          default: ;
        endcase
      end
    end
  end

  // APB 读逻辑（从FIFO读取数据）
  always @(posedge clock) begin
    if (reset) begin
      r_ptr      <= 5'd0;
      pready_reg <= 1'b0;
      prdata_reg <= 32'd0;
    end else begin
      if (in_psel && (in_paddr[0] == 1'b0) && !in_pwrite) begin  // APB读操作
        pready_reg <= 1'b1;  // 置位就绪信号
        if (r_ptr != w_ptr) begin  // FIFO非空
          prdata_reg <= {24'd0, fifo[r_ptr]};  // 返回8位数据
          $display("读取FIFO: %02x (r_ptr=%d)", fifo[r_ptr], r_ptr);  // 调试信息
          r_ptr <= (r_ptr + 1) & 5'b11111;  // 环形递增
        end else begin
          prdata_reg <= 32'd0;  // FIFO空
          // $display("FIFO空，无数据读取");
        end
      end
      else begin
        pready_reg <= 1'b0;
        prdata_reg <= 32'd0;
      end
    end
  end

endmodule