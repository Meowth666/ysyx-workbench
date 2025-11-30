module psram(
  input sck,
  input ce_n,
  inout [3:0] dio
);
  assign dio = 4'bz;
  wire reset = ce_n;
  typedef enum [2:0] { cmd_t, addr_t, delay_t, data_t, err_t } state_t;
  reg [2:0]  state;
  reg [7:0]  counter;
  reg [7:0]  cmd;
  reg [23:0] addr;
  reg [35:0] data;
  reg  [31:0] wdata;
  wire ren = (state == addr_t) && (counter == 8'd5) && (cmd == 8'hEB);
  wire wen = (state == data_t) && (counter[0] == 1'b1) && (cmd == 8'h38);
  // wire wen = (state == data_t) && (cmd == 8'h38);
  wire [31:0] rdata;
  wire [31:0] raddr = {8'b0, addr[19:0], dio};
  reg [31:0] waddr;
  wire [31:0] wdata_in = {wdata[27:0], dio};
  psram_cmd_read psram_cmd_read_i(
    .clock(sck),
    .valid(ren),
    .cmd(cmd),
    .addr(raddr),
    .data(rdata)
  );

  psram_cmd_write psram_cmd_write_i(
    .clock(sck),
    .valid(wen),
    .cmd(cmd),
    .addr(waddr),
    .data_write(wdata_in)
  );

  always@(posedge sck or posedge reset) begin
    if (reset) state <= cmd_t;
    else begin
      case (state)
        cmd_t:  state <= (counter ==  8'd1 )  ? addr_t : state;
        addr_t: state <= (cmd != 8'hEB && cmd != 8'h38)? err_t  :
                         (counter ==  8'd5 && cmd == 8'hEB)  ? delay_t: 
                         (counter ==  8'd5 && cmd == 8'h38)  ? data_t:
                          state;
        delay_t:state <= (counter ==  8'd5 )  ? data_t : state;
        data_t: state <= state;
        default: begin
          state <= state;
          // $fwrite(32'h80000002, "Assertion failed: Unsupported command `%xh`, only support `EBh` read command\n", cmd);
          // $fatal;
        end
      endcase
    end
  end

  always@(posedge sck or posedge reset) begin
    if (reset) counter <= 8'd0;
    else begin
      case (state)
        cmd_t:   counter <= (counter < 8'd1 ) ? counter + 8'd1 : 8'd0;
        addr_t:  counter <= (counter < 8'd5 ) ? counter + 8'd1 : 8'd0;
        delay_t: counter <= (counter < 8'd5 ) ? counter + 8'd1 : 8'd0;
        default: counter <=  counter + 8'd1;
      endcase
    end
  end

  always@(posedge sck or posedge reset) begin
    if (reset)               cmd <= 8'd0;
    else if (state == cmd_t) cmd <= {cmd[3:0], dio};
  end

  always@(posedge sck or posedge reset) begin
    if (reset)               waddr <= 32'd0;
    else if (state == addr_t && counter == 8'd5)
      waddr <= {8'b0, addr[19:0], dio};
    else if (wen) begin
      waddr <= waddr + 32'h1;
    end
  end

  always@(posedge sck or posedge reset) begin
    if (reset) addr <= 24'd0;
    else if (state == addr_t)
      addr <= {addr[19:0], dio};
  end

  wire [35:0] data_bswap = {4'h0, rdata[7:0], rdata[15:8], rdata[23:16], rdata[31:24]};//rdata[3:0], rdata[7:4], rdata[11:8], rdata[15:12], rdata[19:16], rdata[23:20], rdata[27:24], rdata[31:28]};
  always@(posedge sck or posedge reset) begin
    if (reset) begin
      data <= 36'd0;
      wdata<= 32'd0;
    end
    else if (state == data_t && cmd == 8'hEB) begin
      data <= { {counter == 8'd0 ? data_bswap : data}[31:0], 4'b0 };
    end
    else if (state == data_t && cmd == 8'h38) begin
      wdata <= {wdata[27:0], dio};
    end
  end
  assign dio = ce_n ? 4'b1111 : ({(state == data_t && counter == 8'd0) ? data_bswap : data}[35:32]);
endmodule

import "DPI-C" function void psram_read (input int addr,  output int data);
import "DPI-C" function void psram_write(input int addr, input  int data);
module psram_cmd_read(
  input             clock,
  input             valid,
  input       [7:0] cmd,
  input      [31:0] addr,
  output reg [31:0] data
);
  always@(posedge clock) begin
    if (valid)
      if (cmd == 8'hEB) psram_read(addr, data);
      else begin
        $fwrite(32'h80000002, "Assertion failed: Unsupport command `%xh`, only support `EBh` read command\n", cmd);
        $fatal;
      end
  end
endmodule

module psram_cmd_write(
  input             clock,
  input             valid,
  input       [7:0] cmd,
  input      [31:0] addr,
  input  reg [31:0] data_write
);
  // wire [31:0] data_w = {data_write[31:8], data_write[3:0], data_write[7:4]};
  always@(posedge clock) begin
    if (valid)
      if (cmd == 8'h38) psram_write(addr, data_write);
      else begin
        $fwrite(32'h80000002, "Assertion failed: Unsupport command `%xh`, only support `38h` read command\n", cmd);
        $fatal;
      end
  end
endmodule
