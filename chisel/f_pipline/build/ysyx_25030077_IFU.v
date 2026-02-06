module ysyx_25030077_IFU(
  input         clock,
  input         reset,
  input         io_err1_in,
  input  [31:0] io_pc,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output        io_out_bits_is_err1,
  output [31:0] io_ar_addr,
  output        io_ar_valid,
  input         io_ar_ready,
  input         io_r_valid,
  input  [31:0] io_r_data,
  output        io_r_ready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg  ar_valid_reg; // @[ysyx_25030077_IFU.scala 21:30]
  reg  valid_out_reg; // @[ysyx_25030077_IFU.scala 22:30]
  wire  _ar_valid_reg_T = io_ar_ready ? 1'h0 : 1'h1; // @[ysyx_25030077_IFU.scala 27:24]
  wire  _ar_valid_reg_T_1 = ~ar_valid_reg; // @[ysyx_25030077_IFU.scala 28:19]
  wire  _ar_valid_reg_T_2 = valid_out_reg & io_out_ready; // @[ysyx_25030077_IFU.scala 28:54]
  wire  _ar_valid_reg_T_4 = _ar_valid_reg_T_1 ? _ar_valid_reg_T_2 : 1'h1; // @[Mux.scala 101:16]
  wire  _ar_valid_reg_T_5 = ar_valid_reg ? _ar_valid_reg_T : _ar_valid_reg_T_4; // @[Mux.scala 101:16]
  wire  _valid_out_reg_T_1 = ~valid_out_reg; // @[ysyx_25030077_IFU.scala 33:20]
  reg [31:0] out_data; // @[ysyx_25030077_IFU.scala 35:25]
  assign io_out_valid = valid_out_reg; // @[ysyx_25030077_IFU.scala 37:16]
  assign io_out_bits_pc = io_pc; // @[ysyx_25030077_IFU.scala 38:20]
  assign io_out_bits_inst = out_data; // @[ysyx_25030077_IFU.scala 39:20]
  assign io_out_bits_is_err1 = io_err1_in; // @[ysyx_25030077_IFU.scala 40:23]
  assign io_ar_addr = io_pc; // @[ysyx_25030077_IFU.scala 18:15]
  assign io_ar_valid = ar_valid_reg; // @[ysyx_25030077_IFU.scala 24:15]
  assign io_r_ready = 1'h1; // @[ysyx_25030077_IFU.scala 19:15]
  always @(posedge clock) begin
    ar_valid_reg <= reset | _ar_valid_reg_T_5; // @[ysyx_25030077_IFU.scala 21:{30,30} 26:16]
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:30]
      valid_out_reg <= 1'h0; // @[ysyx_25030077_IFU.scala 22:30]
    end else if (valid_out_reg) begin // @[Mux.scala 101:16]
      if (io_out_ready) begin // @[ysyx_25030077_IFU.scala 32:25]
        valid_out_reg <= 1'h0;
      end else begin
        valid_out_reg <= 1'h1;
      end
    end else begin
      valid_out_reg <= _valid_out_reg_T_1 & io_r_valid;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 35:25]
      out_data <= 32'h0; // @[ysyx_25030077_IFU.scala 35:25]
    end else if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 36:18]
      out_data <= io_r_data;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ar_valid_reg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  valid_out_reg = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  out_data = _RAND_2[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
