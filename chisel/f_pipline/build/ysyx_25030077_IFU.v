module ysyx_25030077_IFU(
  input         clock,
  input         reset,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[ysyx_25030077_IFU.scala 9:19]
  wire [31:0] _pc_T_1 = pc + 32'h4; // @[ysyx_25030077_IFU.scala 16:14]
  assign io_out_valid = 1'h1; // @[ysyx_25030077_IFU.scala 11:16]
  assign io_out_bits_pc = pc; // @[ysyx_25030077_IFU.scala 12:19]
  assign io_out_bits_inst = pc; // @[ysyx_25030077_IFU.scala 13:20]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_IFU.scala 9:19]
      pc <= 32'h80000000; // @[ysyx_25030077_IFU.scala 9:19]
    end else if (io_out_ready) begin // @[ysyx_25030077_IFU.scala 15:23]
      pc <= _pc_T_1; // @[ysyx_25030077_IFU.scala 16:8]
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
  pc = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
