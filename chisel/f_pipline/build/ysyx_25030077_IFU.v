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
  output [1:0]  io_ar_burst,
  input         io_r_valid,
  input  [31:0] io_r_data,
  output        io_r_ready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
`endif // RANDOMIZE_REG_INIT
  reg [21:0] sram_tag_0; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_1; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_2; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_3; // @[ysyx_25030077_IFU.scala 21:28]
  reg [31:0] sram_inst_0; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_1; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_2; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_3; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_4; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_5; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_6; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_7; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_8; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_9; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_10; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_11; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_12; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_13; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_14; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sram_inst_15; // @[ysyx_25030077_IFU.scala 22:28]
  reg [31:0] sdram_data_0; // @[ysyx_25030077_IFU.scala 23:29]
  reg [31:0] sdram_data_1; // @[ysyx_25030077_IFU.scala 23:29]
  reg [31:0] sdram_data_2; // @[ysyx_25030077_IFU.scala 23:29]
  reg [31:0] sdram_data_3; // @[ysyx_25030077_IFU.scala 23:29]
  reg  sram_valid_0; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_1; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_2; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_3; // @[ysyx_25030077_IFU.scala 24:30]
  wire [21:0] tag = io_pc[27:6]; // @[ysyx_25030077_IFU.scala 25:20]
  wire [1:0] index = io_pc[5:4]; // @[ysyx_25030077_IFU.scala 26:22]
  wire [1:0] offset = io_pc[3:2]; // @[ysyx_25030077_IFU.scala 27:23]
  reg [1:0] k; // @[ysyx_25030077_IFU.scala 28:20]
  reg [1:0] q; // @[ysyx_25030077_IFU.scala 29:20]
  reg [31:0] rdata_reg; // @[ysyx_25030077_IFU.scala 30:28]
  reg  ar_valid_reg; // @[ysyx_25030077_IFU.scala 31:31]
  reg [31:0] ar_addr_reg; // @[ysyx_25030077_IFU.scala 32:31]
  reg [4:0] state_reg; // @[ysyx_25030077_IFU.scala 34:28]
  wire [21:0] _GEN_1 = 2'h1 == index ? sram_tag_1 : sram_tag_0; // @[ysyx_25030077_IFU.scala 35:{36,36}]
  wire [21:0] _GEN_2 = 2'h2 == index ? sram_tag_2 : _GEN_1; // @[ysyx_25030077_IFU.scala 35:{36,36}]
  wire [21:0] _GEN_3 = 2'h3 == index ? sram_tag_3 : _GEN_2; // @[ysyx_25030077_IFU.scala 35:{36,36}]
  wire  _GEN_5 = 2'h1 == index ? sram_valid_1 : sram_valid_0; // @[ysyx_25030077_IFU.scala 35:{67,67}]
  wire  _GEN_6 = 2'h2 == index ? sram_valid_2 : _GEN_5; // @[ysyx_25030077_IFU.scala 35:{67,67}]
  wire  _GEN_7 = 2'h3 == index ? sram_valid_3 : _GEN_6; // @[ysyx_25030077_IFU.scala 35:{67,67}]
  wire  is_hit = _GEN_3 == tag & _GEN_7; // @[ysyx_25030077_IFU.scala 35:45]
  wire  _state_reg_T = state_reg == 5'h1; // @[ysyx_25030077_IFU.scala 37:20]
  wire  _state_reg_T_2 = io_pc[31:28] == 4'ha; // @[ysyx_25030077_IFU.scala 37:62]
  wire  _state_reg_T_5 = state_reg == 5'h2; // @[ysyx_25030077_IFU.scala 38:20]
  wire  _state_reg_T_6 = k == 2'h3; // @[ysyx_25030077_IFU.scala 38:66]
  wire [4:0] _state_reg_T_7 = k == 2'h3 ? 5'h4 : 5'h2; // @[ysyx_25030077_IFU.scala 38:63]
  wire  _state_reg_T_9 = state_reg == 5'h4; // @[ysyx_25030077_IFU.scala 39:20]
  wire  _state_reg_T_10 = q == 2'h3; // @[ysyx_25030077_IFU.scala 39:50]
  wire [4:0] _state_reg_T_11 = q == 2'h3 ? 5'h10 : 5'h4; // @[ysyx_25030077_IFU.scala 39:47]
  wire  _state_reg_T_12 = state_reg == 5'h8; // @[ysyx_25030077_IFU.scala 40:20]
  wire [4:0] _state_reg_T_13 = io_r_valid ? 5'h10 : 5'h8; // @[ysyx_25030077_IFU.scala 40:47]
  wire  _state_reg_T_14 = state_reg == 5'h10; // @[ysyx_25030077_IFU.scala 41:20]
  wire [4:0] _state_reg_T_15 = io_out_ready ? 5'h1 : 5'h10; // @[ysyx_25030077_IFU.scala 41:47]
  wire [4:0] _state_reg_T_16 = _state_reg_T_14 ? _state_reg_T_15 : 5'h1; // @[Mux.scala 101:16]
  wire [4:0] _state_reg_T_17 = _state_reg_T_12 ? _state_reg_T_13 : _state_reg_T_16; // @[Mux.scala 101:16]
  reg [2:0] write_reg; // @[ysyx_25030077_IFU.scala 43:28]
  wire  _write_reg_T = write_reg == 3'h1; // @[ysyx_25030077_IFU.scala 45:20]
  wire  _write_reg_T_3 = write_reg == 3'h2; // @[ysyx_25030077_IFU.scala 46:20]
  wire  _write_reg_T_4 = write_reg == 3'h4; // @[ysyx_25030077_IFU.scala 47:20]
  wire [2:0] _write_reg_T_6 = _state_reg_T_10 ? 3'h1 : 3'h4; // @[ysyx_25030077_IFU.scala 47:45]
  wire [1:0] _k_T_4 = k + 2'h1; // @[ysyx_25030077_IFU.scala 51:82]
  wire [1:0] _k_T_5 = _state_reg_T_6 ? 2'h0 : _k_T_4; // @[ysyx_25030077_IFU.scala 51:63]
  wire [1:0] _q_T_4 = q + 2'h1; // @[ysyx_25030077_IFU.scala 55:66]
  wire  _sdram_data_0_T_1 = _state_reg_T_5 & io_r_valid; // @[ysyx_25030077_IFU.scala 57:57]
  wire [3:0] _T = {index,2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_17 = 4'h1 == _T ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_18 = 4'h2 == _T ? sram_inst_2 : _GEN_17; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_19 = 4'h3 == _T ? sram_inst_3 : _GEN_18; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_20 = 4'h4 == _T ? sram_inst_4 : _GEN_19; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_21 = 4'h5 == _T ? sram_inst_5 : _GEN_20; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_22 = 4'h6 == _T ? sram_inst_6 : _GEN_21; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_23 = 4'h7 == _T ? sram_inst_7 : _GEN_22; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_24 = 4'h8 == _T ? sram_inst_8 : _GEN_23; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_25 = 4'h9 == _T ? sram_inst_9 : _GEN_24; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_26 = 4'ha == _T ? sram_inst_10 : _GEN_25; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_27 = 4'hb == _T ? sram_inst_11 : _GEN_26; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_28 = 4'hc == _T ? sram_inst_12 : _GEN_27; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_29 = 4'hd == _T ? sram_inst_13 : _GEN_28; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_30 = 4'he == _T ? sram_inst_14 : _GEN_29; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _GEN_31 = 4'hf == _T ? sram_inst_15 : _GEN_30; // @[ysyx_25030077_IFU.scala 66:{47,47}]
  wire [31:0] _sram_inst_T_4 = _state_reg_T_9 & q == 2'h0 ? sdram_data_0 : _GEN_31; // @[ysyx_25030077_IFU.scala 66:47]
  wire [31:0] _GEN_32 = 4'h0 == _T ? _sram_inst_T_4 : sram_inst_0; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_33 = 4'h1 == _T ? _sram_inst_T_4 : sram_inst_1; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_34 = 4'h2 == _T ? _sram_inst_T_4 : sram_inst_2; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_35 = 4'h3 == _T ? _sram_inst_T_4 : sram_inst_3; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_36 = 4'h4 == _T ? _sram_inst_T_4 : sram_inst_4; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_37 = 4'h5 == _T ? _sram_inst_T_4 : sram_inst_5; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_38 = 4'h6 == _T ? _sram_inst_T_4 : sram_inst_6; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_39 = 4'h7 == _T ? _sram_inst_T_4 : sram_inst_7; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_40 = 4'h8 == _T ? _sram_inst_T_4 : sram_inst_8; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_41 = 4'h9 == _T ? _sram_inst_T_4 : sram_inst_9; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_42 = 4'ha == _T ? _sram_inst_T_4 : sram_inst_10; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_43 = 4'hb == _T ? _sram_inst_T_4 : sram_inst_11; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_44 = 4'hc == _T ? _sram_inst_T_4 : sram_inst_12; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_45 = 4'hd == _T ? _sram_inst_T_4 : sram_inst_13; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_46 = 4'he == _T ? _sram_inst_T_4 : sram_inst_14; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [31:0] _GEN_47 = 4'hf == _T ? _sram_inst_T_4 : sram_inst_15; // @[ysyx_25030077_IFU.scala 22:28 66:{41,41}]
  wire [3:0] _T_1 = {index,2'h1}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_49 = 4'h1 == _T_1 ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_50 = 4'h2 == _T_1 ? sram_inst_2 : _GEN_49; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_51 = 4'h3 == _T_1 ? sram_inst_3 : _GEN_50; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_52 = 4'h4 == _T_1 ? sram_inst_4 : _GEN_51; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_53 = 4'h5 == _T_1 ? sram_inst_5 : _GEN_52; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_54 = 4'h6 == _T_1 ? sram_inst_6 : _GEN_53; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_55 = 4'h7 == _T_1 ? sram_inst_7 : _GEN_54; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_56 = 4'h8 == _T_1 ? sram_inst_8 : _GEN_55; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_57 = 4'h9 == _T_1 ? sram_inst_9 : _GEN_56; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_58 = 4'ha == _T_1 ? sram_inst_10 : _GEN_57; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_59 = 4'hb == _T_1 ? sram_inst_11 : _GEN_58; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_60 = 4'hc == _T_1 ? sram_inst_12 : _GEN_59; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_61 = 4'hd == _T_1 ? sram_inst_13 : _GEN_60; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_62 = 4'he == _T_1 ? sram_inst_14 : _GEN_61; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _GEN_63 = 4'hf == _T_1 ? sram_inst_15 : _GEN_62; // @[ysyx_25030077_IFU.scala 67:{47,47}]
  wire [31:0] _sram_inst_T_9 = _state_reg_T_9 & q == 2'h1 ? sdram_data_1 : _GEN_63; // @[ysyx_25030077_IFU.scala 67:47]
  wire [3:0] _T_2 = {index,2'h2}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_81 = 4'h1 == _T_2 ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_82 = 4'h2 == _T_2 ? sram_inst_2 : _GEN_81; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_83 = 4'h3 == _T_2 ? sram_inst_3 : _GEN_82; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_84 = 4'h4 == _T_2 ? sram_inst_4 : _GEN_83; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_85 = 4'h5 == _T_2 ? sram_inst_5 : _GEN_84; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_86 = 4'h6 == _T_2 ? sram_inst_6 : _GEN_85; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_87 = 4'h7 == _T_2 ? sram_inst_7 : _GEN_86; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_88 = 4'h8 == _T_2 ? sram_inst_8 : _GEN_87; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_89 = 4'h9 == _T_2 ? sram_inst_9 : _GEN_88; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_90 = 4'ha == _T_2 ? sram_inst_10 : _GEN_89; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_91 = 4'hb == _T_2 ? sram_inst_11 : _GEN_90; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_92 = 4'hc == _T_2 ? sram_inst_12 : _GEN_91; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_93 = 4'hd == _T_2 ? sram_inst_13 : _GEN_92; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_94 = 4'he == _T_2 ? sram_inst_14 : _GEN_93; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [31:0] _GEN_95 = 4'hf == _T_2 ? sram_inst_15 : _GEN_94; // @[ysyx_25030077_IFU.scala 68:{47,47}]
  wire [3:0] _T_3 = {index,2'h3}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_113 = 4'h1 == _T_3 ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_114 = 4'h2 == _T_3 ? sram_inst_2 : _GEN_113; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_115 = 4'h3 == _T_3 ? sram_inst_3 : _GEN_114; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_116 = 4'h4 == _T_3 ? sram_inst_4 : _GEN_115; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_117 = 4'h5 == _T_3 ? sram_inst_5 : _GEN_116; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_118 = 4'h6 == _T_3 ? sram_inst_6 : _GEN_117; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_119 = 4'h7 == _T_3 ? sram_inst_7 : _GEN_118; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_120 = 4'h8 == _T_3 ? sram_inst_8 : _GEN_119; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_121 = 4'h9 == _T_3 ? sram_inst_9 : _GEN_120; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_122 = 4'ha == _T_3 ? sram_inst_10 : _GEN_121; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_123 = 4'hb == _T_3 ? sram_inst_11 : _GEN_122; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_124 = 4'hc == _T_3 ? sram_inst_12 : _GEN_123; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_125 = 4'hd == _T_3 ? sram_inst_13 : _GEN_124; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire [31:0] _GEN_126 = 4'he == _T_3 ? sram_inst_14 : _GEN_125; // @[ysyx_25030077_IFU.scala 69:{47,47}]
  wire  _ar_valid_reg_T_3 = _state_reg_T_2 & is_hit; // @[ysyx_25030077_IFU.scala 72:74]
  wire  _ar_valid_reg_T_7 = _state_reg_T_12 | _state_reg_T_5; // @[ysyx_25030077_IFU.scala 73:40]
  wire  _ar_valid_reg_T_9 = ar_valid_reg & io_ar_ready ? 1'h0 : ar_valid_reg; // @[ysyx_25030077_IFU.scala 73:80]
  wire [31:0] _ar_addr_reg_T_4 = {io_pc[31:4],4'h0}; // @[Cat.scala 31:58]
  wire [3:0] _rdata_reg_T_4 = {index,offset}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_145 = 4'h1 == _rdata_reg_T_4 ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_146 = 4'h2 == _rdata_reg_T_4 ? sram_inst_2 : _GEN_145; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_147 = 4'h3 == _rdata_reg_T_4 ? sram_inst_3 : _GEN_146; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_148 = 4'h4 == _rdata_reg_T_4 ? sram_inst_4 : _GEN_147; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_149 = 4'h5 == _rdata_reg_T_4 ? sram_inst_5 : _GEN_148; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_150 = 4'h6 == _rdata_reg_T_4 ? sram_inst_6 : _GEN_149; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_151 = 4'h7 == _rdata_reg_T_4 ? sram_inst_7 : _GEN_150; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_152 = 4'h8 == _rdata_reg_T_4 ? sram_inst_8 : _GEN_151; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_153 = 4'h9 == _rdata_reg_T_4 ? sram_inst_9 : _GEN_152; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_154 = 4'ha == _rdata_reg_T_4 ? sram_inst_10 : _GEN_153; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_155 = 4'hb == _rdata_reg_T_4 ? sram_inst_11 : _GEN_154; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_156 = 4'hc == _rdata_reg_T_4 ? sram_inst_12 : _GEN_155; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_157 = 4'hd == _rdata_reg_T_4 ? sram_inst_13 : _GEN_156; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _GEN_158 = 4'he == _rdata_reg_T_4 ? sram_inst_14 : _GEN_157; // @[ysyx_25030077_IFU.scala 87:{47,47}]
  wire [31:0] _rdata_reg_T_11 = io_r_valid & k == offset ? io_r_data : rdata_reg; // @[ysyx_25030077_IFU.scala 89:47]
  assign io_out_valid = state_reg == 5'h10; // @[ysyx_25030077_IFU.scala 82:32]
  assign io_out_bits_pc = io_pc; // @[ysyx_25030077_IFU.scala 83:22]
  assign io_out_bits_inst = rdata_reg; // @[ysyx_25030077_IFU.scala 91:22]
  assign io_out_bits_is_err1 = io_err1_in; // @[ysyx_25030077_IFU.scala 84:25]
  assign io_ar_addr = ar_addr_reg; // @[ysyx_25030077_IFU.scala 80:17]
  assign io_ar_valid = ar_valid_reg; // @[ysyx_25030077_IFU.scala 75:17]
  assign io_ar_burst = {{1'd0}, ar_addr_reg[31:28] == 4'ha}; // @[ysyx_25030077_IFU.scala 81:17]
  assign io_r_ready = 1'h1; // @[ysyx_25030077_IFU.scala 33:16]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_0 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (2'h0 == index) begin // @[ysyx_25030077_IFU.scala 62:21]
      if (_write_reg_T_3) begin // @[ysyx_25030077_IFU.scala 62:27]
        sram_tag_0 <= tag;
      end else if (2'h3 == index) begin // @[ysyx_25030077_IFU.scala 35:36]
        sram_tag_0 <= sram_tag_3; // @[ysyx_25030077_IFU.scala 35:36]
      end else begin
        sram_tag_0 <= _GEN_2;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_1 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (2'h1 == index) begin // @[ysyx_25030077_IFU.scala 62:21]
      if (_write_reg_T_3) begin // @[ysyx_25030077_IFU.scala 62:27]
        sram_tag_1 <= tag;
      end else if (2'h3 == index) begin // @[ysyx_25030077_IFU.scala 35:36]
        sram_tag_1 <= sram_tag_3; // @[ysyx_25030077_IFU.scala 35:36]
      end else begin
        sram_tag_1 <= _GEN_2;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_2 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (2'h2 == index) begin // @[ysyx_25030077_IFU.scala 62:21]
      if (_write_reg_T_3) begin // @[ysyx_25030077_IFU.scala 62:27]
        sram_tag_2 <= tag;
      end else if (2'h3 == index) begin // @[ysyx_25030077_IFU.scala 35:36]
        sram_tag_2 <= sram_tag_3; // @[ysyx_25030077_IFU.scala 35:36]
      end else begin
        sram_tag_2 <= _GEN_2;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_3 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (2'h3 == index) begin // @[ysyx_25030077_IFU.scala 62:21]
      if (_write_reg_T_3) begin // @[ysyx_25030077_IFU.scala 62:27]
        sram_tag_3 <= tag;
      end else if (!(2'h3 == index)) begin // @[ysyx_25030077_IFU.scala 35:36]
        sram_tag_3 <= _GEN_2;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_0 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h0 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_0 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_0 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_0 <= _GEN_126;
      end
    end else if (4'h0 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_0 <= sdram_data_2;
      end else begin
        sram_inst_0 <= _GEN_95;
      end
    end else if (4'h0 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_0 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_0 <= _GEN_32;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_1 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h1 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_1 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_1 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_1 <= _GEN_126;
      end
    end else if (4'h1 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_1 <= sdram_data_2;
      end else begin
        sram_inst_1 <= _GEN_95;
      end
    end else if (4'h1 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_1 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_1 <= _GEN_33;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_2 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h2 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_2 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_2 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_2 <= _GEN_126;
      end
    end else if (4'h2 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_2 <= sdram_data_2;
      end else begin
        sram_inst_2 <= _GEN_95;
      end
    end else if (4'h2 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_2 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_2 <= _GEN_34;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_3 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h3 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_3 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_3 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_3 <= _GEN_126;
      end
    end else if (4'h3 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_3 <= sdram_data_2;
      end else begin
        sram_inst_3 <= _GEN_95;
      end
    end else if (4'h3 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_3 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_3 <= _GEN_35;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_4 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h4 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_4 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_4 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_4 <= _GEN_126;
      end
    end else if (4'h4 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_4 <= sdram_data_2;
      end else begin
        sram_inst_4 <= _GEN_95;
      end
    end else if (4'h4 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_4 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_4 <= _GEN_36;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_5 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h5 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_5 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_5 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_5 <= _GEN_126;
      end
    end else if (4'h5 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_5 <= sdram_data_2;
      end else begin
        sram_inst_5 <= _GEN_95;
      end
    end else if (4'h5 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_5 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_5 <= _GEN_37;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_6 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h6 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_6 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_6 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_6 <= _GEN_126;
      end
    end else if (4'h6 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_6 <= sdram_data_2;
      end else begin
        sram_inst_6 <= _GEN_95;
      end
    end else if (4'h6 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_6 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_6 <= _GEN_38;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_7 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h7 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_7 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_7 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_7 <= _GEN_126;
      end
    end else if (4'h7 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_7 <= sdram_data_2;
      end else begin
        sram_inst_7 <= _GEN_95;
      end
    end else if (4'h7 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_7 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_7 <= _GEN_39;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_8 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h8 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_8 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_8 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_8 <= _GEN_126;
      end
    end else if (4'h8 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_8 <= sdram_data_2;
      end else begin
        sram_inst_8 <= _GEN_95;
      end
    end else if (4'h8 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_8 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_8 <= _GEN_40;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_9 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h9 == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_9 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_9 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_9 <= _GEN_126;
      end
    end else if (4'h9 == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_9 <= sdram_data_2;
      end else begin
        sram_inst_9 <= _GEN_95;
      end
    end else if (4'h9 == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_9 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_9 <= _GEN_41;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_10 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'ha == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_10 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_10 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_10 <= _GEN_126;
      end
    end else if (4'ha == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_10 <= sdram_data_2;
      end else begin
        sram_inst_10 <= _GEN_95;
      end
    end else if (4'ha == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_10 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_10 <= _GEN_42;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_11 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'hb == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_11 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_11 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_11 <= _GEN_126;
      end
    end else if (4'hb == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_11 <= sdram_data_2;
      end else begin
        sram_inst_11 <= _GEN_95;
      end
    end else if (4'hb == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_11 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_11 <= _GEN_43;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_12 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'hc == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_12 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_12 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_12 <= _GEN_126;
      end
    end else if (4'hc == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_12 <= sdram_data_2;
      end else begin
        sram_inst_12 <= _GEN_95;
      end
    end else if (4'hc == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_12 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_12 <= _GEN_44;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_13 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'hd == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_13 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_13 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_13 <= _GEN_126;
      end
    end else if (4'hd == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_13 <= sdram_data_2;
      end else begin
        sram_inst_13 <= _GEN_95;
      end
    end else if (4'hd == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_13 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_13 <= _GEN_45;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_14 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'he == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_14 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_14 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 69:47]
      end else begin
        sram_inst_14 <= _GEN_126;
      end
    end else if (4'he == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_14 <= sdram_data_2;
      end else begin
        sram_inst_14 <= _GEN_95;
      end
    end else if (4'he == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_14 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_14 <= _GEN_46;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_15 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 69:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_15 <= sdram_data_3;
      end else if (!(4'hf == _T_3)) begin // @[ysyx_25030077_IFU.scala 69:47]
        sram_inst_15 <= _GEN_126;
      end
    end else if (4'hf == _T_2) begin // @[ysyx_25030077_IFU.scala 68:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 68:47]
        sram_inst_15 <= sdram_data_2;
      end else begin
        sram_inst_15 <= _GEN_95;
      end
    end else if (4'hf == _T_1) begin // @[ysyx_25030077_IFU.scala 67:41]
      sram_inst_15 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 67:41]
    end else begin
      sram_inst_15 <= _GEN_47;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 23:29]
      sdram_data_0 <= 32'h0; // @[ysyx_25030077_IFU.scala 23:29]
    end else if (_state_reg_T_5 & io_r_valid & k == 2'h0) begin // @[ysyx_25030077_IFU.scala 57:25]
      sdram_data_0 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 23:29]
      sdram_data_1 <= 32'h0; // @[ysyx_25030077_IFU.scala 23:29]
    end else if (_sdram_data_0_T_1 & k == 2'h1) begin // @[ysyx_25030077_IFU.scala 58:25]
      sdram_data_1 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 23:29]
      sdram_data_2 <= 32'h0; // @[ysyx_25030077_IFU.scala 23:29]
    end else if (_sdram_data_0_T_1 & k == 2'h2) begin // @[ysyx_25030077_IFU.scala 59:25]
      sdram_data_2 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 23:29]
      sdram_data_3 <= 32'h0; // @[ysyx_25030077_IFU.scala 23:29]
    end else if (_sdram_data_0_T_1 & _state_reg_T_6) begin // @[ysyx_25030077_IFU.scala 60:25]
      sdram_data_3 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_0 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (2'h0 == index) begin // @[ysyx_25030077_IFU.scala 64:23]
      sram_valid_0 <= _write_reg_T_3 | _GEN_7; // @[ysyx_25030077_IFU.scala 64:23]
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_1 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (2'h1 == index) begin // @[ysyx_25030077_IFU.scala 64:23]
      sram_valid_1 <= _write_reg_T_3 | _GEN_7; // @[ysyx_25030077_IFU.scala 64:23]
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_2 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (2'h2 == index) begin // @[ysyx_25030077_IFU.scala 64:23]
      sram_valid_2 <= _write_reg_T_3 | _GEN_7; // @[ysyx_25030077_IFU.scala 64:23]
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_3 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (2'h3 == index) begin // @[ysyx_25030077_IFU.scala 64:23]
      sram_valid_3 <= _write_reg_T_3 | _GEN_7; // @[ysyx_25030077_IFU.scala 64:23]
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 28:20]
      k <= 2'h0; // @[ysyx_25030077_IFU.scala 28:20]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      k <= 2'h0;
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 51:47]
        k <= _k_T_5;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 29:20]
      q <= 2'h0; // @[ysyx_25030077_IFU.scala 29:20]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      q <= 2'h0;
    end else if (_state_reg_T_9) begin // @[Mux.scala 101:16]
      if (_state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 55:47]
        q <= 2'h0;
      end else begin
        q <= _q_T_4;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 30:28]
      rdata_reg <= 32'h0; // @[ysyx_25030077_IFU.scala 30:28]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (_ar_valid_reg_T_3) begin // @[ysyx_25030077_IFU.scala 87:47]
        if (4'hf == _rdata_reg_T_4) begin // @[ysyx_25030077_IFU.scala 87:47]
          rdata_reg <= sram_inst_15; // @[ysyx_25030077_IFU.scala 87:47]
        end else begin
          rdata_reg <= _GEN_158;
        end
      end
    end else if (_state_reg_T_12) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 88:47]
        rdata_reg <= io_r_data;
      end
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      rdata_reg <= _rdata_reg_T_11;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 31:31]
      ar_valid_reg <= 1'h0; // @[ysyx_25030077_IFU.scala 31:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (_state_reg_T_2 & is_hit) begin // @[ysyx_25030077_IFU.scala 72:47]
        ar_valid_reg <= 1'h0;
      end else begin
        ar_valid_reg <= 1'h1;
      end
    end else begin
      ar_valid_reg <= _ar_valid_reg_T_7 & _ar_valid_reg_T_9;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 32:31]
      ar_addr_reg <= 32'h0; // @[ysyx_25030077_IFU.scala 32:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (io_pc[31:28] == 4'h3) begin // @[ysyx_25030077_IFU.scala 78:47]
        ar_addr_reg <= io_pc;
      end else begin
        ar_addr_reg <= _ar_addr_reg_T_4;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 34:28]
      state_reg <= 5'h1; // @[ysyx_25030077_IFU.scala 34:28]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (io_pc[31:28] == 4'ha) begin // @[ysyx_25030077_IFU.scala 37:47]
        if (is_hit) begin // @[ysyx_25030077_IFU.scala 37:76]
          state_reg <= 5'h10;
        end else begin
          state_reg <= 5'h2;
        end
      end else begin
        state_reg <= 5'h8;
      end
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 38:47]
        state_reg <= _state_reg_T_7;
      end else begin
        state_reg <= 5'h2;
      end
    end else if (_state_reg_T_9) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_11;
    end else begin
      state_reg <= _state_reg_T_17;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 43:28]
      write_reg <= 3'h1; // @[ysyx_25030077_IFU.scala 43:28]
    end else if (_write_reg_T) begin // @[Mux.scala 101:16]
      if (_state_reg_T_5) begin // @[ysyx_25030077_IFU.scala 45:45]
        write_reg <= 3'h2;
      end else begin
        write_reg <= 3'h1;
      end
    end else if (_write_reg_T_3) begin // @[Mux.scala 101:16]
      write_reg <= 3'h4;
    end else if (_write_reg_T_4) begin // @[Mux.scala 101:16]
      write_reg <= _write_reg_T_6;
    end else begin
      write_reg <= 3'h1;
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
  sram_tag_0 = _RAND_0[21:0];
  _RAND_1 = {1{`RANDOM}};
  sram_tag_1 = _RAND_1[21:0];
  _RAND_2 = {1{`RANDOM}};
  sram_tag_2 = _RAND_2[21:0];
  _RAND_3 = {1{`RANDOM}};
  sram_tag_3 = _RAND_3[21:0];
  _RAND_4 = {1{`RANDOM}};
  sram_inst_0 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  sram_inst_1 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  sram_inst_2 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  sram_inst_3 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  sram_inst_4 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  sram_inst_5 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  sram_inst_6 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  sram_inst_7 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  sram_inst_8 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  sram_inst_9 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  sram_inst_10 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  sram_inst_11 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  sram_inst_12 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  sram_inst_13 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  sram_inst_14 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  sram_inst_15 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  sdram_data_0 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  sdram_data_1 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  sdram_data_2 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  sdram_data_3 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  sram_valid_0 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  sram_valid_1 = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  sram_valid_2 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  sram_valid_3 = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  k = _RAND_28[1:0];
  _RAND_29 = {1{`RANDOM}};
  q = _RAND_29[1:0];
  _RAND_30 = {1{`RANDOM}};
  rdata_reg = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  ar_valid_reg = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  ar_addr_reg = _RAND_32[31:0];
  _RAND_33 = {1{`RANDOM}};
  state_reg = _RAND_33[4:0];
  _RAND_34 = {1{`RANDOM}};
  write_reg = _RAND_34[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
