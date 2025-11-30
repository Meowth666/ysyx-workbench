module gpio_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel, //区分读写
  input         in_penable, //区分读写
  input  [2:0]  in_pprot,
  input         in_pwrite,//区分读写
  input  [31:0] in_pwdata,//写数据
  input  [3:0]  in_pstrb,//写掩码
  output        in_pready,
  output [31:0] in_prdata,//读到的数据
  output        in_pslverr,

  output [15:0] gpio_out,
  input  [15:0] gpio_in,
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);
wire is_write;
wire is_read;
assign in_pready = 1'b1;
assign in_pslverr = 1'b0;
assign is_write = in_psel && in_penable && in_pwrite;
assign is_read  = in_psel && in_penable && (!in_pwrite);
reg [15:0] led;
reg [15:0] sw;
reg [3:0] smg0;
reg [3:0] smg1;
reg [3:0] smg2;
reg [3:0] smg3;
reg [3:0] smg4;
reg [3:0] smg5;
reg [3:0] smg6;
reg [3:0] smg7;
always @(posedge clock) begin
  if (reset) begin
    led <= 16'b0;
  end
  else if (is_write && (in_paddr[3:0] == 4'h0)) begin
    led[7:0] <= in_pwdata[7:0];
    led[15:8] <= 8'd0;
  end
  else if (is_write && (in_paddr[3:0] == 4'h1)) begin
    led[7:0] <= 8'd0;
    led[15:8] <= in_pwdata[15:8];
  end
end

always @(posedge clock) begin
  if (reset) begin
    smg0 <= 4'b0;
    smg1 <= 4'b0;
    smg2 <= 4'b0;
    smg3 <= 4'b0;
    smg4 <= 4'b0;
    smg5 <= 4'b0;
    smg6 <= 4'b0;
    smg7 <= 4'b0;
  end
  else if (is_write && (in_paddr[3:0] == 4'h8)) begin
    smg0 <= in_pwdata[3:0];
    smg1 <= in_pwdata[7:4];
  end
  else if (is_write && (in_paddr[3:0] == 4'h9)) begin
    smg2 <= in_pwdata[11:8];
    smg3 <= in_pwdata[15:12];
  end
  else if (is_write && (in_paddr[3:0] == 4'ha)) begin
    smg4 <= in_pwdata[19:16];
    smg5 <= in_pwdata[23:20];
  end
  else if (is_write && (in_paddr[3:0] == 4'hb)) begin
    smg6 <= in_pwdata[27:24];
    smg7 <= in_pwdata[31:28];
  end
end

always @(posedge clock) begin
  if (reset) begin
    sw <= 16'b0;
  end
  else if (is_read && (in_paddr[3:0] == 4'h4)) begin
    sw <= gpio_in;
  end
end

assign gpio_out = led;
assign in_prdata[15:0] = sw;
smg seg0(.x(smg0), .seg(gpio_seg_0));
smg seg1(.x(smg1), .seg(gpio_seg_1));
smg seg2(.x(smg2), .seg(gpio_seg_2));
smg seg3(.x(smg3), .seg(gpio_seg_3));
smg seg4(.x(smg4), .seg(gpio_seg_4));
smg seg5(.x(smg5), .seg(gpio_seg_5));
smg seg6(.x(smg6), .seg(gpio_seg_6));
smg seg7(.x(smg7), .seg(gpio_seg_7));
endmodule

module smg(
    input  [3:0] x,
    output [7:0] seg
);
    assign seg = ~(
        (x == 4'b0000) ? 8'b11111100 :
        (x == 4'b0001) ? 8'b01100000 :
        (x == 4'b0010) ? 8'b11011010 :
        (x == 4'b0011) ? 8'b11110010 :
        (x == 4'b0100) ? 8'b01100110 :
        (x == 4'b0101) ? 8'b10110110 :
        (x == 4'b0110) ? 8'b10111110 :
        (x == 4'b0111) ? 8'b11100000 :
        (x == 4'b1000) ? 8'b11111110 :
        (x == 4'b1001) ? 8'b11110110 :
        (x == 4'b1010) ? 8'b11101110 :
        (x == 4'b1011) ? 8'b00111110 :
        (x == 4'b1100) ? 8'b10011100 :
        (x == 4'b1101) ? 8'b01111010 :
        (x == 4'b1110) ? 8'b11110010 :
                         8'b10001110   // 4'b1111
    );
endmodule

