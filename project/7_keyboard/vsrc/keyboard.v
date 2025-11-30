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

  // PS/2 时钟同步：下降沿检测
  reg [2:0] ps2_clk_sync;
  always @(posedge clock) begin
    ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
  end
  wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

  // 状态机
  localparam [3:0] S_IDLE    = 4'd0;
  localparam [3:0] S_BIT0    = 4'd1;
  localparam [3:0] S_BIT1    = 4'd2;
  localparam [3:0] S_BIT2    = 4'd3;
  localparam [3:0] S_BIT3    = 4'd4;
  localparam [3:0] S_BIT4    = 4'd5;
  localparam [3:0] S_BIT5    = 4'd6;
  localparam [3:0] S_BIT6    = 4'd7;
  localparam [3:0] S_BIT7    = 4'd8;
  localparam [3:0] S_PARITY  = 4'd9;
  localparam [3:0] S_STOP    = 4'd10;

  reg [3:0] current_state, next_state;

  // FIFO（8字节环形）
  reg [7:0] fifo[31:0];
  reg [4:0] w_ptr, r_ptr;
  // 接收缓存
  reg [7:0] rx_data;
  reg       parity_bit;
  reg       stop_bit;

  // 状态机时序
  always @(posedge clock) begin
    if (reset)
      current_state <= S_IDLE;
    else
      current_state <= next_state;
  end

  // 状态机转移
  always @(*) begin
    case (current_state)
      S_IDLE:   next_state = (sampling && ps2_data == 0) ? S_BIT0 : S_IDLE;
      S_BIT0:   next_state = sampling ? S_BIT1 : S_BIT0;
      S_BIT1:   next_state = sampling ? S_BIT2 : S_BIT1;
      S_BIT2:   next_state = sampling ? S_BIT3 : S_BIT2;
      S_BIT3:   next_state = sampling ? S_BIT4 : S_BIT3;
      S_BIT4:   next_state = sampling ? S_BIT5 : S_BIT4;
      S_BIT5:   next_state = sampling ? S_BIT6 : S_BIT5;
      S_BIT6:   next_state = sampling ? S_BIT7 : S_BIT6;
      S_BIT7:   next_state = sampling ? S_PARITY : S_BIT7;
      S_PARITY: next_state = sampling ? S_STOP : S_PARITY;
      S_STOP:   next_state = sampling ? S_IDLE : S_STOP;
      default:  next_state = S_IDLE;
    endcase
  end

  // 主逻辑
  always @(posedge clock) begin
    if (reset) begin
      rx_data     <= 8'd0;
      parity_bit  <= 1'b0;
      stop_bit    <= 1'b0;
      w_ptr       <= 5'd0;
    end
    else begin
      // ================
      // PS/2 接收部分
      // ================
      if (sampling) begin
        case (current_state)
          S_BIT0:   rx_data[0] <= ps2_data;
          S_BIT1:   rx_data[1] <= ps2_data;
          S_BIT2:   rx_data[2] <= ps2_data;
          S_BIT3:   rx_data[3] <= ps2_data;
          S_BIT4:   rx_data[4] <= ps2_data;
          S_BIT5:   rx_data[5] <= ps2_data;
          S_BIT6:   rx_data[6] <= ps2_data;
          S_BIT7:   rx_data[7] <= ps2_data;
          S_PARITY: parity_bit <= ps2_data;
          S_STOP: begin
            stop_bit <= ps2_data;
            // FIFO 未满则写入
            if (((w_ptr + 1) & 5'b11111) != r_ptr) begin
              fifo[w_ptr] <= rx_data;
              w_ptr <= (w_ptr + 1) & 5'b11111;
              // $display("w_ptr = %d  PS2 Received = %02x", w_ptr, rx_data);
            end
            // else 
              // $display("overflow!");
          end
          default: ;
        endcase
      end
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      r_ptr       <= 5'd0;
      prdata_reg  <= 32'd0;
      pready_reg  <= 1'b0;
    end
    else begin
      if (in_psel && in_penable) begin
        pready_reg <= 1'b1;
        if (r_ptr != w_ptr) begin
          // $display("r_ptr = %d  Key Received = %02x", r_ptr, fifo[r_ptr]);
          prdata_reg <= {24'd0, fifo[r_ptr]};
          r_ptr <= (r_ptr + 1) & 5'b11111;  // 正确环形前进
        end else begin
          prdata_reg <= 32'd0; // FIFO 空
        end
      end 
      else begin
        pready_reg <= 1'b0;
      end
    end
  end
endmodule
