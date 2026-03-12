module vga_top_apb(
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

  output [7:0]  vga_r,
  output [7:0]  vga_g,
  output [7:0]  vga_b,
  output        vga_hsync,
  output        vga_vsync,
  output        vga_valid
);

  reg [23:0] vga_mem [524287:0];
  parameter h_frontporch = 96;
  parameter h_active = 144;
  parameter h_backporch = 784;
  parameter h_total = 800;
  parameter v_frontporch = 2;
  parameter v_active = 35;
  parameter v_backporch = 515;
  parameter v_total = 525;
  wire w_valid;
  assign w_valid = in_psel && in_penable && in_pwrite;
  assign in_pready = 1'b1;
  wire[31:0] addr1;
  wire[18:0] addr;
  assign addr1 = (in_paddr - 32'h21000000) >> 2;
  assign addr = addr1[18:0];
  always@(posedge clock) begin
    if (w_valid) begin
        vga_mem[addr] = in_pwdata[23:0];
        // $fwrite(32'h80000002, "w_addr: `%xh`\n", in_paddr);
        // vga_write(addr1, {8'd0, in_pwdata[23:0]});
    end
  end

  reg [9:0] x_cnt;
  reg [9:0] y_cnt;
  wire h_valid;
  wire v_valid;

  always @(posedge clock) begin
    if(reset) begin
      x_cnt <= 1;
      y_cnt <= 1;
    end
    else begin
      if(x_cnt == h_total)begin
        x_cnt <= 1;
        if(y_cnt == v_total) y_cnt <= 1;
        else y_cnt <= y_cnt + 1;
      end
      else x_cnt <= x_cnt + 1;
    end
  end

  assign vga_hsync = (x_cnt > h_frontporch);
  assign vga_vsync = (y_cnt > v_frontporch);
  assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
  assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
  assign vga_valid = h_valid & v_valid;
  wire [9:0] h_addr;
  wire [9:0] v_addr;
  assign h_addr = h_valid ? (x_cnt - 10'd145) : 10'd0;
  assign v_addr = v_valid ? (y_cnt - 10'd36) : 10'd0;
  assign {vga_r, vga_g, vga_b} = vga_mem[h_addr + v_addr * 640];
endmodule
