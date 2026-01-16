module ysyx_25030077_arbiter(
  input         clock,
  input         reset,
  input         io_icache_valid,
  input  [31:0] io_icache_data,
  input         io_icache_ar_valid,
  input  [31:0] io_icache_ar_addr,
  input  [1:0]  io_icache_ar_brust,
  input  [7:0]  io_icache_ar_len,
  input         io_icache_aw_valid,
  input  [31:0] io_icache_aw_addr,
  input         io_icache_w_valid,
  input  [31:0] io_icache_w_data,
  input  [31:0] io_rs1_data,
  input  [31:0] io_rs2_data,
  input  [31:0] io_imm,
  input  [2:0]  io_r_mask,
  input  [2:0]  io_w_mask,
  output        io_axi_ar_valid,
  output [31:0] io_axi_ar_addr,
  input         io_axi_ar_ready,
  output [3:0]  io_axi_ar_id,
  output [7:0]  io_axi_ar_len,
  output [2:0]  io_axi_ar_size,
  output [1:0]  io_axi_ar_burst,
  output        io_axi_aw_valid,
  output [31:0] io_axi_aw_addr,
  input         io_axi_aw_ready,
  output [3:0]  io_axi_aw_id,
  output [7:0]  io_axi_aw_len,
  output [2:0]  io_axi_aw_size,
  output [1:0]  io_axi_aw_burst,
  output        io_axi_w_valid,
  output [31:0] io_axi_w_data,
  output [3:0]  io_axi_w_strb,
  input         io_axi_w_ready,
  output        io_axi_w_last,
  input         io_axi_r_valid,
  input  [31:0] io_axi_r_data,
  output        io_axi_r_ready,
  input  [1:0]  io_axi_r_resp,
  input  [3:0]  io_axi_r_id,
  input         io_axi_r_last,
  input         io_axi_b_valid,
  output        io_axi_b_ready,
  input  [1:0]  io_axi_b_resp,
  input  [3:0]  io_axi_b_id,
  output [1:0]  io_gpr_b_resp,
  output        io_gpr_r_valid,
  output        io_gpr_b_valid,
  input         io_gpr_r_ready,
  input         io_gpr_b_ready,
  output [31:0] io_gpr_data,
  output [31:0] io_inst,
  output        io_icache_ready,
  input         io_r_valid_lsu
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state_reg; // @[ysyx_25030077_arbiter.scala 82:28]
  reg [31:0] inst_reg; // @[ysyx_25030077_arbiter.scala 83:27]
  reg  validReg_aw1; // @[ysyx_25030077_arbiter.scala 86:31]
  reg  validReg_ar1; // @[ysyx_25030077_arbiter.scala 88:31]
  reg  validReg_gpr; // @[ysyx_25030077_arbiter.scala 89:31]
  reg  validReg_w1; // @[ysyx_25030077_arbiter.scala 90:31]
  reg [31:0] rdata_reg; // @[ysyx_25030077_arbiter.scala 91:28]
  reg [63:0] clint_reg; // @[ysyx_25030077_arbiter.scala 92:28]
  wire  _validReg_ar1_T_1 = io_axi_ar_ready ? 1'h0 : validReg_ar1; // @[ysyx_25030077_arbiter.scala 97:32]
  wire  _validReg_aw1_T_1 = io_axi_aw_ready ? 1'h0 : validReg_aw1; // @[ysyx_25030077_arbiter.scala 99:32]
  wire  _validReg_w1_T_1 = io_axi_w_ready ? 1'h0 : validReg_w1; // @[ysyx_25030077_arbiter.scala 101:32]
  wire [32:0] _r_addr1_T = io_rs1_data + io_imm; // @[ysyx_25030077_arbiter.scala 102:32]
  wire [31:0] r_addr1 = _r_addr1_T[31:0]; // @[ysyx_25030077_arbiter.scala 102:42]
  wire  _is_clint_T = r_addr1 == 32'h2000000; // @[ysyx_25030077_arbiter.scala 103:31]
  wire  _is_clint_T_1 = r_addr1 == 32'h2000004; // @[ysyx_25030077_arbiter.scala 103:61]
  wire  is_clint = r_addr1 == 32'h2000000 | r_addr1 == 32'h2000004; // @[ysyx_25030077_arbiter.scala 103:49]
  wire  _validReg_gpr_T = io_r_mask != 3'h0; // @[ysyx_25030077_arbiter.scala 107:39]
  wire  _validReg_gpr_T_1 = ~is_clint; // @[ysyx_25030077_arbiter.scala 107:51]
  wire  _validReg_gpr_T_2 = io_r_mask != 3'h0 & ~is_clint; // @[ysyx_25030077_arbiter.scala 107:47]
  wire  _validReg_gpr_T_4 = io_gpr_r_ready ? 1'h0 : validReg_gpr; // @[ysyx_25030077_arbiter.scala 107:112]
  wire  _validReg_gpr_T_5 = io_axi_r_valid | _validReg_gpr_T_4; // @[ysyx_25030077_arbiter.scala 107:69]
  wire  _validReg_gpr_T_7 = io_r_mask == 3'h0 | is_clint; // @[ysyx_25030077_arbiter.scala 108:47]
  wire  _validReg_gpr_T_8 = state_reg == 2'h2; // @[ysyx_25030077_arbiter.scala 108:80]
  wire  _validReg_gpr_T_11 = state_reg == 2'h2 | _validReg_gpr_T_4; // @[ysyx_25030077_arbiter.scala 108:68]
  wire  _io_axi_ar_addr_T = state_reg == 2'h0; // @[ysyx_25030077_arbiter.scala 111:40]
  wire  _io_axi_ar_addr_T_1 = state_reg == 2'h1; // @[ysyx_25030077_arbiter.scala 112:40]
  wire  _io_axi_ar_addr_T_3 = state_reg == 2'h1 & io_r_valid_lsu; // @[ysyx_25030077_arbiter.scala 112:48]
  wire [31:0] _io_axi_ar_addr_T_4 = _io_axi_ar_addr_T_3 ? r_addr1 : 32'h0; // @[Mux.scala 101:16]
  wire  _state_reg_T_4 = io_w_mask == 3'h0; // @[ysyx_25030077_arbiter.scala 118:67]
  wire  _state_reg_T_5 = io_r_valid_lsu & io_w_mask == 3'h0; // @[ysyx_25030077_arbiter.scala 118:53]
  wire  _state_reg_T_7 = io_r_valid_lsu & io_w_mask == 3'h0 & _validReg_gpr_T_1; // @[ysyx_25030077_arbiter.scala 118:76]
  wire [1:0] _state_reg_T_9 = io_axi_r_valid ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 118:97]
  wire  _state_reg_T_12 = _state_reg_T_5 & is_clint; // @[ysyx_25030077_arbiter.scala 119:76]
  wire  _state_reg_T_14 = ~io_r_valid_lsu; // @[ysyx_25030077_arbiter.scala 120:54]
  wire  _state_reg_T_15 = io_w_mask != 3'h0; // @[ysyx_25030077_arbiter.scala 120:81]
  wire  _state_reg_T_16 = ~io_r_valid_lsu & io_w_mask != 3'h0; // @[ysyx_25030077_arbiter.scala 120:67]
  wire [1:0] _state_reg_T_17 = io_axi_aw_ready ? 2'h2 : 2'h1; // @[ysyx_25030077_arbiter.scala 120:97]
  wire  _state_reg_T_20 = _state_reg_T_14 & _state_reg_T_4; // @[ysyx_25030077_arbiter.scala 121:67]
  wire [1:0] _state_reg_T_22 = _state_reg_T_20 ? 2'h2 : 2'h1; // @[Mux.scala 101:16]
  wire [1:0] _state_reg_T_23 = _state_reg_T_16 ? _state_reg_T_17 : _state_reg_T_22; // @[Mux.scala 101:16]
  wire [1:0] _state_reg_T_24 = _state_reg_T_12 ? 2'h2 : _state_reg_T_23; // @[Mux.scala 101:16]
  wire [1:0] _state_reg_T_28 = validReg_gpr & io_gpr_r_ready ? 2'h0 : 2'h2; // @[ysyx_25030077_arbiter.scala 123:35]
  wire [31:0] _io_axi_aw_addr_T_2 = _io_axi_ar_addr_T_1 ? r_addr1 : 32'h0; // @[Mux.scala 101:16]
  wire  _io_axi_aw_valid_T_3 = _io_axi_ar_addr_T_1 & _state_reg_T_15; // @[ysyx_25030077_arbiter.scala 133:50]
  wire  _io_axi_ar_valid_T_3 = _io_axi_ar_addr_T_1 & _validReg_gpr_T; // @[ysyx_25030077_arbiter.scala 137:50]
  wire  _io_axi_ar_valid_T_5 = _io_axi_ar_addr_T_1 & _validReg_gpr_T & _validReg_gpr_T_1; // @[ysyx_25030077_arbiter.scala 137:71]
  wire  _w_data_T = io_w_mask == 3'h1; // @[ysyx_25030077_arbiter.scala 148:40]
  wire  _w_data_T_1 = io_w_mask == 3'h2; // @[ysyx_25030077_arbiter.scala 149:40]
  wire  _w_data_T_3 = ~r_addr1[1]; // @[ysyx_25030077_arbiter.scala 150:65]
  wire [31:0] _w_data_T_5 = {16'h0,io_rs2_data[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_9 = {io_rs2_data[15:0],16'h0}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_10 = r_addr1[1] ? _w_data_T_9 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_11 = _w_data_T_3 ? _w_data_T_5 : _w_data_T_10; // @[Mux.scala 101:16]
  wire  _w_data_T_12 = io_w_mask == 3'h3; // @[ysyx_25030077_arbiter.scala 153:40]
  wire  _w_data_T_14 = r_addr1[1:0] == 2'h0; // @[ysyx_25030077_arbiter.scala 154:68]
  wire [31:0] _w_data_T_16 = {24'h0,io_rs2_data[7:0]}; // @[Cat.scala 31:58]
  wire  _w_data_T_18 = r_addr1[1:0] == 2'h1; // @[ysyx_25030077_arbiter.scala 155:68]
  wire [31:0] _w_data_T_20 = {16'h0,io_rs2_data[7:0],8'h0}; // @[Cat.scala 31:58]
  wire  _w_data_T_22 = r_addr1[1:0] == 2'h2; // @[ysyx_25030077_arbiter.scala 156:68]
  wire [31:0] _w_data_T_24 = {8'h0,io_rs2_data[7:0],16'h0}; // @[Cat.scala 31:58]
  wire  _w_data_T_26 = r_addr1[1:0] == 2'h3; // @[ysyx_25030077_arbiter.scala 157:68]
  wire [31:0] _w_data_T_28 = {io_rs2_data[7:0],24'h0}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_29 = _w_data_T_26 ? _w_data_T_28 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_30 = _w_data_T_22 ? _w_data_T_24 : _w_data_T_29; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_31 = _w_data_T_18 ? _w_data_T_20 : _w_data_T_30; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_32 = _w_data_T_14 ? _w_data_T_16 : _w_data_T_31; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_33 = _w_data_T_12 ? _w_data_T_32 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_34 = _w_data_T_1 ? _w_data_T_11 : _w_data_T_33; // @[Mux.scala 101:16]
  wire [31:0] w_data = _w_data_T ? io_rs2_data : _w_data_T_34; // @[Mux.scala 101:16]
  wire [31:0] _io_axi_w_data_T_2 = _io_axi_ar_addr_T_1 ? w_data : 32'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_6 = r_addr1[1] ? 4'hc : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_7 = _w_data_T_3 ? 4'h3 : _strb_T_6; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_17 = _w_data_T_26 ? 4'h8 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_18 = _w_data_T_22 ? 4'h4 : _strb_T_17; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_19 = _w_data_T_18 ? 4'h2 : _strb_T_18; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_20 = _w_data_T_14 ? 4'h1 : _strb_T_19; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_21 = _w_data_T_12 ? _strb_T_20 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_22 = _w_data_T_1 ? _strb_T_7 : _strb_T_21; // @[Mux.scala 101:16]
  wire [3:0] strb = _w_data_T ? 4'hf : _strb_T_22; // @[Mux.scala 101:16]
  wire [1:0] wsize = _w_data_T ? 2'h2 : {{1'd0}, _w_data_T_1}; // @[Mux.scala 101:16]
  wire [3:0] _io_axi_w_strb_T_2 = _io_axi_ar_addr_T_1 ? strb : 4'h0; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_aw_size_T_2 = _io_axi_ar_addr_T_1 ? wsize : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_aw_size_T_3 = _io_axi_ar_addr_T ? 2'h2 : _io_axi_aw_size_T_2; // @[Mux.scala 101:16]
  wire  _rsize_T = io_r_mask == 3'h1; // @[ysyx_25030077_arbiter.scala 205:42]
  wire  _rsize_T_1 = io_r_mask == 3'h2; // @[ysyx_25030077_arbiter.scala 206:42]
  wire  _rsize_T_2 = io_r_mask == 3'h3; // @[ysyx_25030077_arbiter.scala 207:42]
  wire  _rsize_T_3 = io_r_mask == 3'h4; // @[ysyx_25030077_arbiter.scala 208:42]
  wire  _rsize_T_4 = io_r_mask == 3'h5; // @[ysyx_25030077_arbiter.scala 209:42]
  wire  _rsize_T_8 = _rsize_T_1 ? 1'h0 : _rsize_T_2 | _rsize_T_3; // @[Mux.scala 101:16]
  wire [1:0] rsize = _rsize_T ? 2'h2 : {{1'd0}, _rsize_T_8}; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_ar_size_T_4 = _io_axi_ar_valid_T_3 ? rsize : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_ar_size_T_5 = _io_axi_ar_addr_T ? 2'h2 : _io_axi_ar_size_T_4; // @[Mux.scala 101:16]
  wire  is_sram = ~(io_axi_ar_addr[31:28] == 4'h3); // @[ysyx_25030077_arbiter.scala 216:20]
  wire [31:0] _rdata_sram_T_5 = {24'h0,io_axi_r_data[7:0]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_9 = {24'h0,io_axi_r_data[15:8]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_13 = {24'h0,io_axi_r_data[23:16]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_17 = {24'h0,io_axi_r_data[31:24]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_18 = _w_data_T_26 ? _rdata_sram_T_17 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_19 = _w_data_T_22 ? _rdata_sram_T_13 : _rdata_sram_T_18; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_20 = _w_data_T_18 ? _rdata_sram_T_9 : _rdata_sram_T_19; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_21 = _w_data_T_14 ? _rdata_sram_T_5 : _rdata_sram_T_20; // @[Mux.scala 101:16]
  wire [15:0] _rdata_sram_T_27 = io_axi_r_data[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_29 = {_rdata_sram_T_27,io_axi_r_data[15:0]}; // @[Cat.scala 31:58]
  wire [15:0] _rdata_sram_T_34 = io_axi_r_data[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_36 = {_rdata_sram_T_34,io_axi_r_data[31:16]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_37 = r_addr1[1] ? _rdata_sram_T_36 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_38 = _w_data_T_3 ? _rdata_sram_T_29 : _rdata_sram_T_37; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_43 = {16'h0,io_axi_r_data[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_47 = {16'h0,io_axi_r_data[31:16]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_48 = r_addr1[1] ? _rdata_sram_T_47 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_49 = _w_data_T_3 ? _rdata_sram_T_43 : _rdata_sram_T_48; // @[Mux.scala 101:16]
  wire [23:0] _rdata_sram_T_55 = io_axi_r_data[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_57 = {_rdata_sram_T_55,io_axi_r_data[7:0]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_62 = io_axi_r_data[15] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_64 = {_rdata_sram_T_62,io_axi_r_data[15:8]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_69 = io_axi_r_data[23] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_71 = {_rdata_sram_T_69,io_axi_r_data[23:16]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_76 = io_axi_r_data[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_78 = {_rdata_sram_T_76,io_axi_r_data[31:24]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_79 = _w_data_T_26 ? _rdata_sram_T_78 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_80 = _w_data_T_22 ? _rdata_sram_T_71 : _rdata_sram_T_79; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_81 = _w_data_T_18 ? _rdata_sram_T_64 : _rdata_sram_T_80; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_82 = _w_data_T_14 ? _rdata_sram_T_57 : _rdata_sram_T_81; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_83 = _rsize_T_4 ? _rdata_sram_T_82 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_84 = _rsize_T_3 ? _rdata_sram_T_49 : _rdata_sram_T_83; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_85 = _rsize_T_2 ? _rdata_sram_T_38 : _rdata_sram_T_84; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_86 = _rsize_T_1 ? _rdata_sram_T_21 : _rdata_sram_T_85; // @[Mux.scala 101:16]
  wire [31:0] rdata_sram = _rsize_T ? io_axi_r_data : _rdata_sram_T_86; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_19 = _rsize_T_4 ? _rdata_sram_T_57 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_20 = _rsize_T_3 ? _rdata_sram_T_43 : _rdata_mrom_T_19; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_21 = _rsize_T_2 ? _rdata_sram_T_29 : _rdata_mrom_T_20; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_22 = _rsize_T_1 ? _rdata_sram_T_5 : _rdata_mrom_T_21; // @[Mux.scala 101:16]
  wire [31:0] rdata_mrom = _rsize_T ? io_axi_r_data : _rdata_mrom_T_22; // @[Mux.scala 101:16]
  wire [63:0] _clint_reg_T_1 = clint_reg + 64'h1; // @[ysyx_25030077_arbiter.scala 261:28]
  wire  _io_gpr_data_T_1 = io_r_valid_lsu & _validReg_gpr_T_8; // @[ysyx_25030077_arbiter.scala 263:47]
  wire  _io_gpr_data_T_3 = io_r_valid_lsu & _validReg_gpr_T_8 & _validReg_gpr_T_1; // @[ysyx_25030077_arbiter.scala 263:70]
  wire  _io_gpr_data_T_6 = _io_gpr_data_T_1 & _is_clint_T; // @[ysyx_25030077_arbiter.scala 264:70]
  wire  _io_gpr_data_T_10 = _io_gpr_data_T_1 & _is_clint_T_1; // @[ysyx_25030077_arbiter.scala 265:70]
  wire [31:0] _io_gpr_data_T_12 = _io_gpr_data_T_10 ? clint_reg[63:32] : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_gpr_data_T_13 = _io_gpr_data_T_6 ? clint_reg[31:0] : _io_gpr_data_T_12; // @[Mux.scala 101:16]
  wire  _inst_reg_T_2 = io_icache_valid & _io_axi_ar_addr_T; // @[ysyx_25030077_arbiter.scala 268:63]
  assign io_axi_ar_valid = _io_axi_ar_addr_T ? io_icache_ar_valid : _io_axi_ar_valid_T_5 & validReg_ar1; // @[Mux.scala 101:16]
  assign io_axi_ar_addr = _io_axi_ar_addr_T ? io_icache_ar_addr : _io_axi_ar_addr_T_4; // @[Mux.scala 101:16]
  assign io_axi_ar_id = 4'h0; // @[ysyx_25030077_arbiter.scala 79:18]
  assign io_axi_ar_len = _io_axi_ar_addr_T ? io_icache_ar_len : 8'h0; // @[Mux.scala 101:16]
  assign io_axi_ar_size = {{1'd0}, _io_axi_ar_size_T_5}; // @[ysyx_25030077_arbiter.scala 211:21]
  assign io_axi_ar_burst = _io_axi_ar_addr_T ? io_icache_ar_brust : 2'h0; // @[Mux.scala 101:16]
  assign io_axi_aw_valid = _io_axi_ar_addr_T ? io_icache_aw_valid : _io_axi_aw_valid_T_3 & validReg_aw1; // @[Mux.scala 101:16]
  assign io_axi_aw_addr = _io_axi_ar_addr_T ? io_icache_aw_addr : _io_axi_aw_addr_T_2; // @[Mux.scala 101:16]
  assign io_axi_aw_id = 4'h0; // @[ysyx_25030077_arbiter.scala 72:18]
  assign io_axi_aw_len = 8'h0; // @[ysyx_25030077_arbiter.scala 73:19]
  assign io_axi_aw_size = {{1'd0}, _io_axi_aw_size_T_3}; // @[ysyx_25030077_arbiter.scala 186:21]
  assign io_axi_aw_burst = 2'h0; // @[ysyx_25030077_arbiter.scala 75:21]
  assign io_axi_w_valid = _io_axi_ar_addr_T ? io_icache_w_valid : _io_axi_aw_valid_T_3 & validReg_w1; // @[Mux.scala 101:16]
  assign io_axi_w_data = _io_axi_ar_addr_T ? io_icache_w_data : _io_axi_w_data_T_2; // @[Mux.scala 101:16]
  assign io_axi_w_strb = _io_axi_ar_addr_T ? 4'hf : _io_axi_w_strb_T_2; // @[Mux.scala 101:16]
  assign io_axi_w_last = 1'h1; // @[ysyx_25030077_arbiter.scala 77:19]
  assign io_axi_r_ready = 1'h1; // @[ysyx_25030077_arbiter.scala 191:21]
  assign io_axi_b_ready = 1'h1; // @[ysyx_25030077_arbiter.scala 192:21]
  assign io_gpr_b_resp = _validReg_gpr_T_8 ? io_axi_b_resp : 2'h0; // @[Mux.scala 101:16]
  assign io_gpr_r_valid = _validReg_gpr_T_8 & validReg_gpr; // @[Mux.scala 101:16]
  assign io_gpr_b_valid = _validReg_gpr_T_8 & validReg_gpr; // @[Mux.scala 101:16]
  assign io_gpr_data = _io_gpr_data_T_3 ? rdata_reg : _io_gpr_data_T_13; // @[Mux.scala 101:16]
  assign io_inst = inst_reg; // @[ysyx_25030077_arbiter.scala 270:21]
  assign io_icache_ready = 1'h1; // @[ysyx_25030077_arbiter.scala 193:23]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_arbiter.scala 82:28]
      state_reg <= 2'h0; // @[ysyx_25030077_arbiter.scala 82:28]
    end else if (_io_axi_ar_addr_T) begin // @[Mux.scala 101:16]
      state_reg <= {{1'd0}, io_icache_valid};
    end else if (_io_axi_ar_addr_T_1) begin // @[Mux.scala 101:16]
      if (_state_reg_T_7) begin // @[Mux.scala 101:16]
        state_reg <= _state_reg_T_9;
      end else begin
        state_reg <= _state_reg_T_24;
      end
    end else if (_validReg_gpr_T_8) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_28;
    end else begin
      state_reg <= 2'h0;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 83:27]
      inst_reg <= 32'h0; // @[ysyx_25030077_arbiter.scala 83:27]
    end else if (_inst_reg_T_2) begin // @[Mux.scala 101:16]
      inst_reg <= io_icache_data;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 86:31]
      validReg_aw1 <= 1'h0; // @[ysyx_25030077_arbiter.scala 86:31]
    end else begin
      validReg_aw1 <= io_icache_valid | _validReg_aw1_T_1; // @[ysyx_25030077_arbiter.scala 98:18]
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 88:31]
      validReg_ar1 <= 1'h0; // @[ysyx_25030077_arbiter.scala 88:31]
    end else begin
      validReg_ar1 <= io_icache_valid | _validReg_ar1_T_1; // @[ysyx_25030077_arbiter.scala 96:18]
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 89:31]
      validReg_gpr <= 1'h0; // @[ysyx_25030077_arbiter.scala 89:31]
    end else if (_validReg_gpr_T_2) begin // @[Mux.scala 101:16]
      validReg_gpr <= _validReg_gpr_T_5;
    end else if (_validReg_gpr_T_7) begin // @[Mux.scala 101:16]
      validReg_gpr <= _validReg_gpr_T_11;
    end else begin
      validReg_gpr <= 1'h1;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 90:31]
      validReg_w1 <= 1'h0; // @[ysyx_25030077_arbiter.scala 90:31]
    end else begin
      validReg_w1 <= io_icache_valid | _validReg_w1_T_1; // @[ysyx_25030077_arbiter.scala 100:18]
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 91:28]
      rdata_reg <= 32'h0; // @[ysyx_25030077_arbiter.scala 91:28]
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      if (io_axi_r_valid) begin // @[ysyx_25030077_arbiter.scala 259:62]
        if (is_sram) begin // @[ysyx_25030077_arbiter.scala 256:20]
          rdata_reg <= rdata_sram;
        end else begin
          rdata_reg <= rdata_mrom;
        end
      end
    end else begin
      rdata_reg <= 32'h0;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 92:28]
      clint_reg <= 64'h0; // @[ysyx_25030077_arbiter.scala 92:28]
    end else begin
      clint_reg <= _clint_reg_T_1; // @[ysyx_25030077_arbiter.scala 261:15]
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
  state_reg = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  inst_reg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  validReg_aw1 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  validReg_ar1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  validReg_gpr = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  validReg_w1 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  rdata_reg = _RAND_6[31:0];
  _RAND_7 = {2{`RANDOM}};
  clint_reg = _RAND_7[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
