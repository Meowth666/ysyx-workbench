module ysyx_25030077_PC(
  input         clock,
  input         reset,
  input  [31:0] io_next_pc,
  output [31:0] io_Pc_count
);
  reg [31:0] state; // @[module.scala 11:22]
  assign io_Pc_count = state; // @[module.scala 14:15]
  always @(posedge clock) begin
    if (reset) begin // @[module.scala 11:22]
      state <= 32'h80000000; // @[module.scala 11:22]
    end else begin
      state <= io_next_pc; // @[module.scala 13:9]
    end
  end
endmodule