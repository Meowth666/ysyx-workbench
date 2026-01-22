module ysyx_25030077_IFU(
  input         clock,
  input         reset,
  input         io_err1_in,
  input  [31:0] io_pc,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output        io_out_bits_is_err1
);
  assign io_out_valid = 1'h1; // @[ysyx_25030077_IFU.scala 12:16]
  assign io_out_bits_pc = io_pc; // @[ysyx_25030077_IFU.scala 13:20]
  assign io_out_bits_inst = io_pc; // @[ysyx_25030077_IFU.scala 14:20]
  assign io_out_bits_is_err1 = io_err1_in; // @[ysyx_25030077_IFU.scala 15:23]
endmodule
