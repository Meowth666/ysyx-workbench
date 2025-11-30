module bitrev (
  input        sck,
  input        ss,
  input        mosi,
  output reg   miso
);
  reg [2:0]  cnt;         // 计数器：0~7
  reg [7:0]  shift_reg;   // 暂存接收到的 8 bit
  reg [7:0]  reversed;    // 反转结果
  reg miso_reg;

  // 每次 sck 上升沿接收 1 bit
  always @(posedge sck or posedge ss) begin
    if (ss) begin
      cnt       <= 3'd0;
      shift_reg <= 8'd0;
      reversed  <= 8'd0;
    end else begin
      shift_reg <= {shift_reg[6:0], mosi};  // 左移接收 bit
      cnt <= cnt + 1'd1;
      if (cnt == 3'd7) begin
        cnt <= 3'd0;
      end
      if (cnt == 3'd0) begin
        // 收满 8 位，执行反转
        reversed[7:0] <= {shift_reg[0], shift_reg[1], shift_reg[2], shift_reg[3],
                          shift_reg[4], shift_reg[5], shift_reg[6], shift_reg[7]};
      end
    end
  end
  // 输出反转后的数据（根据需要可调整时序）
  always @(negedge sck or posedge ss) begin
    if (ss) begin
      miso_reg <= 1'b1;
    end
    else begin
      if(cnt == 3'd0)
        miso_reg <= reversed[0];        // 每次输出最高位
      else
        miso_reg <= reversed[7 - cnt + 1];  // 可选择逐位输出反转结果
    end
  end
  assign miso = miso_reg;
endmodule
