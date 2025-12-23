module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a, //地址
  input [ 1:0] ba,//存储体地址
  input [ 3:0] dqm,//数据掩码
  inout [31:0] dq //数据
);
  reg [3:0] cmd;
  always@(posedge clk) begin
    if (!cke) cmd <= 4'd0;
    else begin
      cmd <= {cs, ras, cas, we};
    end
  end
  reg [31:0] w_reg0;
  reg [31:0] w_reg1;
  always@(posedge clk) begin
    if (!cke) begin
      w_reg0 <= 32'd0;
      w_reg1 <= 32'd0;
    end
    else begin
      w_reg0 <= dq;
      w_reg1 <= w_reg0;
    end
  end
  reg [12:0] addr_reg0;
  reg [12:0] addr_reg1;
  reg [12:0] addr_reg2;
  reg [1:0] bank_reg0;
  reg [1:0] bank_reg1;
  reg [3:0] dqm_reg0;
  reg [3:0] dqm_reg1;
  always@(posedge clk) begin
    if (!cke) begin
      addr_reg0 <= 13'd0;
      addr_reg1 <= 13'd0;
      addr_reg2 <= 13'd0;
      bank_reg0 <= 2'd0;
      bank_reg1 <= 2'd0;
      dqm_reg0  <= 4'd0;
      dqm_reg1  <= 4'd0;
    end
    else begin
      addr_reg0 <= a;
      addr_reg1 <= addr_reg0;
      addr_reg2 <= addr_reg1;
      bank_reg0 <= ba;
      bank_reg1 <= bank_reg0;
      dqm_reg0  <= dqm;
      dqm_reg1  <= dqm_reg0;
    end
  end
  typedef enum [2:0] {idle, active, read, write, err_t} state_t;
  reg [2:0]  state;
  reg [7:0]  counter;
  wire actiev_en = (state == active);
  wire read_en0 = (cmd == 4'd5);
  reg read_en;
  always@(posedge clk) begin
    if (!cke) read_en <= 1'b0;
    else read_en <= read_en0;
  end
  wire write_en = (state == write);

  sdram_cmd_active sdram_cmd_active_i(
    .clock(clk),
    .valid(actiev_en),
    .cmd(cmd),
    .bank(ba),
    .addr(addr_reg1)
  );
  wire[31:0] dq_r;
  reg [31:0] data_r;
  always@(posedge clk) begin
    if (!cke) data_r <= 32'd0;
    else
      if (read_en0) 
        data_r <= dq_r;
  end
  sdram_cmd_read   sdram_cmd_read_i(
    .clock(clk),
    .valid(read_en0),
    .cmd(cmd),
    .bank(bank_reg0),
    .addr(addr_reg0),
    .data(dq_r)
  );

  sdram_cmd_write   sdram_cmd_write_i(
    .clock(clk),
    .valid(write_en),
    .cmd(cmd),
    .bank(bank_reg1),
    .addr(addr_reg1),
    .dqm_q(dqm_reg1),
    .data(w_reg1)
  );

  always@(posedge clk) begin
    if (!cke) state <= idle;
    else begin
      case (state)
        idle:   state <= (cmd == 4'b0011)  ? active : 
                         (cmd == 4'b0101)  ? read   : 
                         (cmd == 4'b0100)  ? write   :state;
        active: state <= (cmd != 4'b0011 && cmd != 4'b0111)  ? err_t  :
                         (counter ==  8'd0)? idle: 
                          state;
        read:   state <= (counter ==  8'd1)? idle: 
                          state;
        write:  state <= (cmd != 4'b0100 && cmd != 4'b0111)  ? err_t  :
                         (counter ==  8'd0)? idle: 
                          state;
        default: begin
          state <= state;
          // $fwrite(32'h80000002, "Assertion failed: Unsupported command `%xh`\n", cmd);
          // $fatal;
        end
      endcase
    end
  end
  reg [7:0]  counter1;
  always@(posedge clk) begin
    if (!cke) begin
      counter <= 8'd0;
      counter1 <= 8'd0;
    end
    else begin
      case (state)
        idle: counter <= 8'd0;
        active: counter <= 8'd0;
        read: counter <= (counter < 8'd1 ) ? counter + 8'd1 : 8'd0;
        default: counter <=  counter + 8'd1;
      endcase
      counter1 <= counter;
    end
  end
  assign dq = (read_en0 || read_en) ? data_r : 32'bz;
endmodule

import "DPI-C" function void sdram_active (input int bank,  input int addr);
module sdram_cmd_active(
  input             clock,
  input             valid,
  input       [3:0] cmd,
  input       [1:0] bank,
  input  reg [12:0] addr
);
  always@(posedge clock) begin
    if (valid)
        sdram_active({30'h0, bank}, {19'h0, addr});
      else begin
        // $fwrite(32'h80000002, "Assertion failed: Unsupport command `%x`, only support `0011` active command\n", cmd);
        // $fatal;
      end
  end
endmodule

import "DPI-C" function bit[31:0] sdram_read(input bit[31:0] bank,  input bit[31:0] addr);
module sdram_cmd_read(
  input             clock,
  input             valid,
  input       [3:0] cmd,
  input       [1:0] bank,
  input  reg [12:0] addr,
  output reg [31:0] data  
);
  // always@(posedge clock) begin
  assign data = valid ? sdram_read({30'h0, bank}, {19'h0, addr}) : 32'd0;
      // else begin
      //   // $fwrite(32'h80000002, "Assertion failed: Unsupport command `%xh`, only support `0011` active command\n", cmd);
      //   // $fatal;
      // end
  // end
endmodule

import "DPI-C" function void sdram_write (input int bank,  input int addr, input int dqm, input int cnt, input int data);
module sdram_cmd_write(
  input             clock,
  input             valid,
  input       [3:0] cmd,
  input       [1:0] bank,
  input  reg  [12:0] addr,
  input       [3:0]  dqm_q,
  input  reg  [31:0] data
);
  reg cnt;
  always@(posedge clock) begin
    if (valid)
        cnt <= ~cnt;
  end
  always@(posedge clock) begin
    if (valid)
      sdram_write({30'h0, bank}, {19'h0, addr}, {28'h0, dqm_q}, {31'h0, cnt}, data);
      // else begin
      //   // $fwrite(32'h80000002, "Assertion failed: Unsupport command `%xh`, only support `0011` active command\n", cmd);
      //   // $fatal;
      // end
  end
endmodule