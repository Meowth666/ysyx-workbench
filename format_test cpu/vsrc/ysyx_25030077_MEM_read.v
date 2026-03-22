module ysyx_25030077_MEM_read(
  input  [31:0] io_instruction,
  input  [31:0] rs1_data,
  input  [31:0] rs2_data,
  input  [31:0] imm_data,
  input  [31:0] rd_data,
  output [31:0] mem_data
);
assign mem_data = rd_data;
  
endmodule