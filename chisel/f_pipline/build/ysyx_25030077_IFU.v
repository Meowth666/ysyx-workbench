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
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
`endif // RANDOMIZE_REG_INIT
  reg [21:0] sram_tag_0; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_1; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_2; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_3; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_4; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_5; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_6; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_7; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_8; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_9; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_10; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_11; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_12; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_13; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_14; // @[ysyx_25030077_IFU.scala 21:28]
  reg [21:0] sram_tag_15; // @[ysyx_25030077_IFU.scala 21:28]
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
  reg  sram_valid_4; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_5; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_6; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_7; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_8; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_9; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_10; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_11; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_12; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_13; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_14; // @[ysyx_25030077_IFU.scala 24:30]
  reg  sram_valid_15; // @[ysyx_25030077_IFU.scala 24:30]
  wire [21:0] tag = io_pc[27:6]; // @[ysyx_25030077_IFU.scala 25:20]
  wire [1:0] index = io_pc[5:4]; // @[ysyx_25030077_IFU.scala 26:22]
  wire [1:0] offset = io_pc[3:2]; // @[ysyx_25030077_IFU.scala 27:23]
  reg [1:0] j; // @[ysyx_25030077_IFU.scala 28:20]
  reg [1:0] k; // @[ysyx_25030077_IFU.scala 29:20]
  reg [1:0] q; // @[ysyx_25030077_IFU.scala 30:20]
  reg [31:0] rdata_reg; // @[ysyx_25030077_IFU.scala 31:28]
  reg  ar_valid_reg; // @[ysyx_25030077_IFU.scala 32:31]
  reg [31:0] ar_addr_reg; // @[ysyx_25030077_IFU.scala 33:31]
  reg [4:0] state_reg; // @[ysyx_25030077_IFU.scala 35:28]
  wire [3:0] _is_hit_T = {index,offset}; // @[Cat.scala 31:58]
  wire [21:0] _GEN_1 = 4'h1 == _is_hit_T ? sram_tag_1 : sram_tag_0; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_2 = 4'h2 == _is_hit_T ? sram_tag_2 : _GEN_1; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_3 = 4'h3 == _is_hit_T ? sram_tag_3 : _GEN_2; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_4 = 4'h4 == _is_hit_T ? sram_tag_4 : _GEN_3; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_5 = 4'h5 == _is_hit_T ? sram_tag_5 : _GEN_4; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_6 = 4'h6 == _is_hit_T ? sram_tag_6 : _GEN_5; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_7 = 4'h7 == _is_hit_T ? sram_tag_7 : _GEN_6; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_8 = 4'h8 == _is_hit_T ? sram_tag_8 : _GEN_7; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_9 = 4'h9 == _is_hit_T ? sram_tag_9 : _GEN_8; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_10 = 4'ha == _is_hit_T ? sram_tag_10 : _GEN_9; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_11 = 4'hb == _is_hit_T ? sram_tag_11 : _GEN_10; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_12 = 4'hc == _is_hit_T ? sram_tag_12 : _GEN_11; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_13 = 4'hd == _is_hit_T ? sram_tag_13 : _GEN_12; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_14 = 4'he == _is_hit_T ? sram_tag_14 : _GEN_13; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire [21:0] _GEN_15 = 4'hf == _is_hit_T ? sram_tag_15 : _GEN_14; // @[ysyx_25030077_IFU.scala 36:{49,49}]
  wire  _GEN_17 = 4'h1 == _is_hit_T ? sram_valid_1 : sram_valid_0; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_18 = 4'h2 == _is_hit_T ? sram_valid_2 : _GEN_17; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_19 = 4'h3 == _is_hit_T ? sram_valid_3 : _GEN_18; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_20 = 4'h4 == _is_hit_T ? sram_valid_4 : _GEN_19; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_21 = 4'h5 == _is_hit_T ? sram_valid_5 : _GEN_20; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_22 = 4'h6 == _is_hit_T ? sram_valid_6 : _GEN_21; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_23 = 4'h7 == _is_hit_T ? sram_valid_7 : _GEN_22; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_24 = 4'h8 == _is_hit_T ? sram_valid_8 : _GEN_23; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_25 = 4'h9 == _is_hit_T ? sram_valid_9 : _GEN_24; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_26 = 4'ha == _is_hit_T ? sram_valid_10 : _GEN_25; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_27 = 4'hb == _is_hit_T ? sram_valid_11 : _GEN_26; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_28 = 4'hc == _is_hit_T ? sram_valid_12 : _GEN_27; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_29 = 4'hd == _is_hit_T ? sram_valid_13 : _GEN_28; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_30 = 4'he == _is_hit_T ? sram_valid_14 : _GEN_29; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  _GEN_31 = 4'hf == _is_hit_T ? sram_valid_15 : _GEN_30; // @[ysyx_25030077_IFU.scala 36:{93,93}]
  wire  is_hit = _GEN_15 == tag & _GEN_31; // @[ysyx_25030077_IFU.scala 36:58]
  wire  _state_reg_T = state_reg == 5'h1; // @[ysyx_25030077_IFU.scala 38:20]
  wire  _state_reg_T_2 = io_pc[31:28] == 4'ha; // @[ysyx_25030077_IFU.scala 38:62]
  wire  _state_reg_T_5 = state_reg == 5'h2; // @[ysyx_25030077_IFU.scala 39:20]
  wire  _state_reg_T_6 = k == 2'h3; // @[ysyx_25030077_IFU.scala 39:66]
  wire [4:0] _state_reg_T_7 = k == 2'h3 ? 5'h4 : 5'h2; // @[ysyx_25030077_IFU.scala 39:63]
  wire  _state_reg_T_9 = state_reg == 5'h4; // @[ysyx_25030077_IFU.scala 40:20]
  wire  _state_reg_T_10 = q == 2'h3; // @[ysyx_25030077_IFU.scala 40:50]
  wire [4:0] _state_reg_T_11 = q == 2'h3 ? 5'h10 : 5'h4; // @[ysyx_25030077_IFU.scala 40:47]
  wire  _state_reg_T_12 = state_reg == 5'h8; // @[ysyx_25030077_IFU.scala 41:20]
  wire [4:0] _state_reg_T_13 = io_r_valid ? 5'h10 : 5'h8; // @[ysyx_25030077_IFU.scala 41:47]
  wire  _state_reg_T_14 = state_reg == 5'h10; // @[ysyx_25030077_IFU.scala 42:20]
  wire [4:0] _state_reg_T_15 = io_out_ready ? 5'h1 : 5'h10; // @[ysyx_25030077_IFU.scala 42:47]
  wire [4:0] _state_reg_T_16 = _state_reg_T_14 ? _state_reg_T_15 : 5'h1; // @[Mux.scala 101:16]
  wire [4:0] _state_reg_T_17 = _state_reg_T_12 ? _state_reg_T_13 : _state_reg_T_16; // @[Mux.scala 101:16]
  reg [2:0] write_reg; // @[ysyx_25030077_IFU.scala 44:28]
  wire  _write_reg_T = write_reg == 3'h1; // @[ysyx_25030077_IFU.scala 46:20]
  wire  _write_reg_T_3 = write_reg == 3'h2; // @[ysyx_25030077_IFU.scala 47:20]
  wire  _write_reg_T_4 = j == 2'h3; // @[ysyx_25030077_IFU.scala 47:48]
  wire  _write_reg_T_6 = write_reg == 3'h4; // @[ysyx_25030077_IFU.scala 48:20]
  wire [2:0] _write_reg_T_8 = _state_reg_T_10 ? 3'h1 : 3'h4; // @[ysyx_25030077_IFU.scala 48:45]
  wire [1:0] _k_T_4 = k + 2'h1; // @[ysyx_25030077_IFU.scala 52:82]
  wire [1:0] _k_T_5 = _state_reg_T_6 ? 2'h0 : _k_T_4; // @[ysyx_25030077_IFU.scala 52:63]
  wire [1:0] _j_T_4 = j + 2'h1; // @[ysyx_25030077_IFU.scala 56:64]
  wire [1:0] _q_T_4 = q + 2'h1; // @[ysyx_25030077_IFU.scala 60:66]
  wire  _sdram_data_0_T_1 = _state_reg_T_5 & io_r_valid; // @[ysyx_25030077_IFU.scala 62:57]
  wire [3:0] _T = {index,2'h0}; // @[Cat.scala 31:58]
  wire  _sram_tag_T_2 = _write_reg_T_3 & j == 2'h0; // @[ysyx_25030077_IFU.scala 67:76]
  wire [21:0] _GEN_33 = 4'h1 == _T ? sram_tag_1 : sram_tag_0; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_34 = 4'h2 == _T ? sram_tag_2 : _GEN_33; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_35 = 4'h3 == _T ? sram_tag_3 : _GEN_34; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_36 = 4'h4 == _T ? sram_tag_4 : _GEN_35; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_37 = 4'h5 == _T ? sram_tag_5 : _GEN_36; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_38 = 4'h6 == _T ? sram_tag_6 : _GEN_37; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_39 = 4'h7 == _T ? sram_tag_7 : _GEN_38; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_40 = 4'h8 == _T ? sram_tag_8 : _GEN_39; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_41 = 4'h9 == _T ? sram_tag_9 : _GEN_40; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_42 = 4'ha == _T ? sram_tag_10 : _GEN_41; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_43 = 4'hb == _T ? sram_tag_11 : _GEN_42; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_44 = 4'hc == _T ? sram_tag_12 : _GEN_43; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_45 = 4'hd == _T ? sram_tag_13 : _GEN_44; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_46 = 4'he == _T ? sram_tag_14 : _GEN_45; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _GEN_47 = 4'hf == _T ? sram_tag_15 : _GEN_46; // @[ysyx_25030077_IFU.scala 67:{46,46}]
  wire [21:0] _sram_tag_T_4 = _write_reg_T_3 & j == 2'h0 ? tag : _GEN_47; // @[ysyx_25030077_IFU.scala 67:46]
  wire [21:0] _GEN_48 = 4'h0 == _T ? _sram_tag_T_4 : sram_tag_0; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_49 = 4'h1 == _T ? _sram_tag_T_4 : sram_tag_1; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_50 = 4'h2 == _T ? _sram_tag_T_4 : sram_tag_2; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_51 = 4'h3 == _T ? _sram_tag_T_4 : sram_tag_3; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_52 = 4'h4 == _T ? _sram_tag_T_4 : sram_tag_4; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_53 = 4'h5 == _T ? _sram_tag_T_4 : sram_tag_5; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_54 = 4'h6 == _T ? _sram_tag_T_4 : sram_tag_6; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_55 = 4'h7 == _T ? _sram_tag_T_4 : sram_tag_7; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_56 = 4'h8 == _T ? _sram_tag_T_4 : sram_tag_8; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_57 = 4'h9 == _T ? _sram_tag_T_4 : sram_tag_9; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_58 = 4'ha == _T ? _sram_tag_T_4 : sram_tag_10; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_59 = 4'hb == _T ? _sram_tag_T_4 : sram_tag_11; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_60 = 4'hc == _T ? _sram_tag_T_4 : sram_tag_12; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_61 = 4'hd == _T ? _sram_tag_T_4 : sram_tag_13; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_62 = 4'he == _T ? _sram_tag_T_4 : sram_tag_14; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [21:0] _GEN_63 = 4'hf == _T ? _sram_tag_T_4 : sram_tag_15; // @[ysyx_25030077_IFU.scala 21:28 67:{40,40}]
  wire [3:0] _T_1 = {index,2'h1}; // @[Cat.scala 31:58]
  wire  _sram_tag_T_7 = _write_reg_T_3 & j == 2'h1; // @[ysyx_25030077_IFU.scala 68:76]
  wire [21:0] _GEN_65 = 4'h1 == _T_1 ? sram_tag_1 : sram_tag_0; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_66 = 4'h2 == _T_1 ? sram_tag_2 : _GEN_65; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_67 = 4'h3 == _T_1 ? sram_tag_3 : _GEN_66; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_68 = 4'h4 == _T_1 ? sram_tag_4 : _GEN_67; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_69 = 4'h5 == _T_1 ? sram_tag_5 : _GEN_68; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_70 = 4'h6 == _T_1 ? sram_tag_6 : _GEN_69; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_71 = 4'h7 == _T_1 ? sram_tag_7 : _GEN_70; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_72 = 4'h8 == _T_1 ? sram_tag_8 : _GEN_71; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_73 = 4'h9 == _T_1 ? sram_tag_9 : _GEN_72; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_74 = 4'ha == _T_1 ? sram_tag_10 : _GEN_73; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_75 = 4'hb == _T_1 ? sram_tag_11 : _GEN_74; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_76 = 4'hc == _T_1 ? sram_tag_12 : _GEN_75; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_77 = 4'hd == _T_1 ? sram_tag_13 : _GEN_76; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_78 = 4'he == _T_1 ? sram_tag_14 : _GEN_77; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _GEN_79 = 4'hf == _T_1 ? sram_tag_15 : _GEN_78; // @[ysyx_25030077_IFU.scala 68:{46,46}]
  wire [21:0] _sram_tag_T_9 = _write_reg_T_3 & j == 2'h1 ? tag : _GEN_79; // @[ysyx_25030077_IFU.scala 68:46]
  wire [3:0] _T_2 = {index,2'h2}; // @[Cat.scala 31:58]
  wire  _sram_tag_T_12 = _write_reg_T_3 & j == 2'h2; // @[ysyx_25030077_IFU.scala 69:76]
  wire [21:0] _GEN_97 = 4'h1 == _T_2 ? sram_tag_1 : sram_tag_0; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_98 = 4'h2 == _T_2 ? sram_tag_2 : _GEN_97; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_99 = 4'h3 == _T_2 ? sram_tag_3 : _GEN_98; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_100 = 4'h4 == _T_2 ? sram_tag_4 : _GEN_99; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_101 = 4'h5 == _T_2 ? sram_tag_5 : _GEN_100; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_102 = 4'h6 == _T_2 ? sram_tag_6 : _GEN_101; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_103 = 4'h7 == _T_2 ? sram_tag_7 : _GEN_102; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_104 = 4'h8 == _T_2 ? sram_tag_8 : _GEN_103; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_105 = 4'h9 == _T_2 ? sram_tag_9 : _GEN_104; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_106 = 4'ha == _T_2 ? sram_tag_10 : _GEN_105; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_107 = 4'hb == _T_2 ? sram_tag_11 : _GEN_106; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_108 = 4'hc == _T_2 ? sram_tag_12 : _GEN_107; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_109 = 4'hd == _T_2 ? sram_tag_13 : _GEN_108; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_110 = 4'he == _T_2 ? sram_tag_14 : _GEN_109; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [21:0] _GEN_111 = 4'hf == _T_2 ? sram_tag_15 : _GEN_110; // @[ysyx_25030077_IFU.scala 69:{46,46}]
  wire [3:0] _T_3 = {index,2'h3}; // @[Cat.scala 31:58]
  wire  _sram_tag_T_17 = _write_reg_T_3 & _write_reg_T_4; // @[ysyx_25030077_IFU.scala 70:76]
  wire [21:0] _GEN_129 = 4'h1 == _T_3 ? sram_tag_1 : sram_tag_0; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_130 = 4'h2 == _T_3 ? sram_tag_2 : _GEN_129; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_131 = 4'h3 == _T_3 ? sram_tag_3 : _GEN_130; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_132 = 4'h4 == _T_3 ? sram_tag_4 : _GEN_131; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_133 = 4'h5 == _T_3 ? sram_tag_5 : _GEN_132; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_134 = 4'h6 == _T_3 ? sram_tag_6 : _GEN_133; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_135 = 4'h7 == _T_3 ? sram_tag_7 : _GEN_134; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_136 = 4'h8 == _T_3 ? sram_tag_8 : _GEN_135; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_137 = 4'h9 == _T_3 ? sram_tag_9 : _GEN_136; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_138 = 4'ha == _T_3 ? sram_tag_10 : _GEN_137; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_139 = 4'hb == _T_3 ? sram_tag_11 : _GEN_138; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_140 = 4'hc == _T_3 ? sram_tag_12 : _GEN_139; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_141 = 4'hd == _T_3 ? sram_tag_13 : _GEN_140; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire [21:0] _GEN_142 = 4'he == _T_3 ? sram_tag_14 : _GEN_141; // @[ysyx_25030077_IFU.scala 70:{46,46}]
  wire  _GEN_161 = 4'h1 == _T ? sram_valid_1 : sram_valid_0; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_162 = 4'h2 == _T ? sram_valid_2 : _GEN_161; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_163 = 4'h3 == _T ? sram_valid_3 : _GEN_162; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_164 = 4'h4 == _T ? sram_valid_4 : _GEN_163; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_165 = 4'h5 == _T ? sram_valid_5 : _GEN_164; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_166 = 4'h6 == _T ? sram_valid_6 : _GEN_165; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_167 = 4'h7 == _T ? sram_valid_7 : _GEN_166; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_168 = 4'h8 == _T ? sram_valid_8 : _GEN_167; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_169 = 4'h9 == _T ? sram_valid_9 : _GEN_168; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_170 = 4'ha == _T ? sram_valid_10 : _GEN_169; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_171 = 4'hb == _T ? sram_valid_11 : _GEN_170; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_172 = 4'hc == _T ? sram_valid_12 : _GEN_171; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_173 = 4'hd == _T ? sram_valid_13 : _GEN_172; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_174 = 4'he == _T ? sram_valid_14 : _GEN_173; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_175 = 4'hf == _T ? sram_valid_15 : _GEN_174; // @[ysyx_25030077_IFU.scala 72:{48,48}]
  wire  _GEN_176 = 4'h0 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_0; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_177 = 4'h1 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_1; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_178 = 4'h2 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_2; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_179 = 4'h3 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_3; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_180 = 4'h4 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_4; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_181 = 4'h5 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_5; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_182 = 4'h6 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_6; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_183 = 4'h7 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_7; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_184 = 4'h8 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_8; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_185 = 4'h9 == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_9; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_186 = 4'ha == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_10; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_187 = 4'hb == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_11; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_188 = 4'hc == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_12; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_189 = 4'hd == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_13; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_190 = 4'he == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_14; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_191 = 4'hf == _T ? _sram_tag_T_2 | _GEN_175 : sram_valid_15; // @[ysyx_25030077_IFU.scala 24:30 72:{42,42}]
  wire  _GEN_193 = 4'h1 == _T_1 ? sram_valid_1 : sram_valid_0; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_194 = 4'h2 == _T_1 ? sram_valid_2 : _GEN_193; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_195 = 4'h3 == _T_1 ? sram_valid_3 : _GEN_194; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_196 = 4'h4 == _T_1 ? sram_valid_4 : _GEN_195; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_197 = 4'h5 == _T_1 ? sram_valid_5 : _GEN_196; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_198 = 4'h6 == _T_1 ? sram_valid_6 : _GEN_197; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_199 = 4'h7 == _T_1 ? sram_valid_7 : _GEN_198; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_200 = 4'h8 == _T_1 ? sram_valid_8 : _GEN_199; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_201 = 4'h9 == _T_1 ? sram_valid_9 : _GEN_200; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_202 = 4'ha == _T_1 ? sram_valid_10 : _GEN_201; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_203 = 4'hb == _T_1 ? sram_valid_11 : _GEN_202; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_204 = 4'hc == _T_1 ? sram_valid_12 : _GEN_203; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_205 = 4'hd == _T_1 ? sram_valid_13 : _GEN_204; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_206 = 4'he == _T_1 ? sram_valid_14 : _GEN_205; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_207 = 4'hf == _T_1 ? sram_valid_15 : _GEN_206; // @[ysyx_25030077_IFU.scala 73:{48,48}]
  wire  _GEN_225 = 4'h1 == _T_2 ? sram_valid_1 : sram_valid_0; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_226 = 4'h2 == _T_2 ? sram_valid_2 : _GEN_225; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_227 = 4'h3 == _T_2 ? sram_valid_3 : _GEN_226; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_228 = 4'h4 == _T_2 ? sram_valid_4 : _GEN_227; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_229 = 4'h5 == _T_2 ? sram_valid_5 : _GEN_228; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_230 = 4'h6 == _T_2 ? sram_valid_6 : _GEN_229; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_231 = 4'h7 == _T_2 ? sram_valid_7 : _GEN_230; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_232 = 4'h8 == _T_2 ? sram_valid_8 : _GEN_231; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_233 = 4'h9 == _T_2 ? sram_valid_9 : _GEN_232; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_234 = 4'ha == _T_2 ? sram_valid_10 : _GEN_233; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_235 = 4'hb == _T_2 ? sram_valid_11 : _GEN_234; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_236 = 4'hc == _T_2 ? sram_valid_12 : _GEN_235; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_237 = 4'hd == _T_2 ? sram_valid_13 : _GEN_236; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_238 = 4'he == _T_2 ? sram_valid_14 : _GEN_237; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_239 = 4'hf == _T_2 ? sram_valid_15 : _GEN_238; // @[ysyx_25030077_IFU.scala 74:{48,48}]
  wire  _GEN_257 = 4'h1 == _T_3 ? sram_valid_1 : sram_valid_0; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_258 = 4'h2 == _T_3 ? sram_valid_2 : _GEN_257; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_259 = 4'h3 == _T_3 ? sram_valid_3 : _GEN_258; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_260 = 4'h4 == _T_3 ? sram_valid_4 : _GEN_259; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_261 = 4'h5 == _T_3 ? sram_valid_5 : _GEN_260; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_262 = 4'h6 == _T_3 ? sram_valid_6 : _GEN_261; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_263 = 4'h7 == _T_3 ? sram_valid_7 : _GEN_262; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_264 = 4'h8 == _T_3 ? sram_valid_8 : _GEN_263; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_265 = 4'h9 == _T_3 ? sram_valid_9 : _GEN_264; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_266 = 4'ha == _T_3 ? sram_valid_10 : _GEN_265; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_267 = 4'hb == _T_3 ? sram_valid_11 : _GEN_266; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_268 = 4'hc == _T_3 ? sram_valid_12 : _GEN_267; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_269 = 4'hd == _T_3 ? sram_valid_13 : _GEN_268; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_270 = 4'he == _T_3 ? sram_valid_14 : _GEN_269; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire  _GEN_271 = 4'hf == _T_3 ? sram_valid_15 : _GEN_270; // @[ysyx_25030077_IFU.scala 75:{48,48}]
  wire [31:0] _GEN_289 = 4'h1 == _T ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_290 = 4'h2 == _T ? sram_inst_2 : _GEN_289; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_291 = 4'h3 == _T ? sram_inst_3 : _GEN_290; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_292 = 4'h4 == _T ? sram_inst_4 : _GEN_291; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_293 = 4'h5 == _T ? sram_inst_5 : _GEN_292; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_294 = 4'h6 == _T ? sram_inst_6 : _GEN_293; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_295 = 4'h7 == _T ? sram_inst_7 : _GEN_294; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_296 = 4'h8 == _T ? sram_inst_8 : _GEN_295; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_297 = 4'h9 == _T ? sram_inst_9 : _GEN_296; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_298 = 4'ha == _T ? sram_inst_10 : _GEN_297; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_299 = 4'hb == _T ? sram_inst_11 : _GEN_298; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_300 = 4'hc == _T ? sram_inst_12 : _GEN_299; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_301 = 4'hd == _T ? sram_inst_13 : _GEN_300; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_302 = 4'he == _T ? sram_inst_14 : _GEN_301; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _GEN_303 = 4'hf == _T ? sram_inst_15 : _GEN_302; // @[ysyx_25030077_IFU.scala 77:{47,47}]
  wire [31:0] _sram_inst_T_4 = _state_reg_T_9 & q == 2'h0 ? sdram_data_0 : _GEN_303; // @[ysyx_25030077_IFU.scala 77:47]
  wire [31:0] _GEN_304 = 4'h0 == _T ? _sram_inst_T_4 : sram_inst_0; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_305 = 4'h1 == _T ? _sram_inst_T_4 : sram_inst_1; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_306 = 4'h2 == _T ? _sram_inst_T_4 : sram_inst_2; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_307 = 4'h3 == _T ? _sram_inst_T_4 : sram_inst_3; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_308 = 4'h4 == _T ? _sram_inst_T_4 : sram_inst_4; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_309 = 4'h5 == _T ? _sram_inst_T_4 : sram_inst_5; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_310 = 4'h6 == _T ? _sram_inst_T_4 : sram_inst_6; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_311 = 4'h7 == _T ? _sram_inst_T_4 : sram_inst_7; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_312 = 4'h8 == _T ? _sram_inst_T_4 : sram_inst_8; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_313 = 4'h9 == _T ? _sram_inst_T_4 : sram_inst_9; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_314 = 4'ha == _T ? _sram_inst_T_4 : sram_inst_10; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_315 = 4'hb == _T ? _sram_inst_T_4 : sram_inst_11; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_316 = 4'hc == _T ? _sram_inst_T_4 : sram_inst_12; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_317 = 4'hd == _T ? _sram_inst_T_4 : sram_inst_13; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_318 = 4'he == _T ? _sram_inst_T_4 : sram_inst_14; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_319 = 4'hf == _T ? _sram_inst_T_4 : sram_inst_15; // @[ysyx_25030077_IFU.scala 22:28 77:{41,41}]
  wire [31:0] _GEN_321 = 4'h1 == _T_1 ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_322 = 4'h2 == _T_1 ? sram_inst_2 : _GEN_321; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_323 = 4'h3 == _T_1 ? sram_inst_3 : _GEN_322; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_324 = 4'h4 == _T_1 ? sram_inst_4 : _GEN_323; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_325 = 4'h5 == _T_1 ? sram_inst_5 : _GEN_324; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_326 = 4'h6 == _T_1 ? sram_inst_6 : _GEN_325; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_327 = 4'h7 == _T_1 ? sram_inst_7 : _GEN_326; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_328 = 4'h8 == _T_1 ? sram_inst_8 : _GEN_327; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_329 = 4'h9 == _T_1 ? sram_inst_9 : _GEN_328; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_330 = 4'ha == _T_1 ? sram_inst_10 : _GEN_329; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_331 = 4'hb == _T_1 ? sram_inst_11 : _GEN_330; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_332 = 4'hc == _T_1 ? sram_inst_12 : _GEN_331; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_333 = 4'hd == _T_1 ? sram_inst_13 : _GEN_332; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_334 = 4'he == _T_1 ? sram_inst_14 : _GEN_333; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _GEN_335 = 4'hf == _T_1 ? sram_inst_15 : _GEN_334; // @[ysyx_25030077_IFU.scala 78:{47,47}]
  wire [31:0] _sram_inst_T_9 = _state_reg_T_9 & q == 2'h1 ? sdram_data_1 : _GEN_335; // @[ysyx_25030077_IFU.scala 78:47]
  wire [31:0] _GEN_353 = 4'h1 == _T_2 ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_354 = 4'h2 == _T_2 ? sram_inst_2 : _GEN_353; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_355 = 4'h3 == _T_2 ? sram_inst_3 : _GEN_354; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_356 = 4'h4 == _T_2 ? sram_inst_4 : _GEN_355; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_357 = 4'h5 == _T_2 ? sram_inst_5 : _GEN_356; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_358 = 4'h6 == _T_2 ? sram_inst_6 : _GEN_357; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_359 = 4'h7 == _T_2 ? sram_inst_7 : _GEN_358; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_360 = 4'h8 == _T_2 ? sram_inst_8 : _GEN_359; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_361 = 4'h9 == _T_2 ? sram_inst_9 : _GEN_360; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_362 = 4'ha == _T_2 ? sram_inst_10 : _GEN_361; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_363 = 4'hb == _T_2 ? sram_inst_11 : _GEN_362; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_364 = 4'hc == _T_2 ? sram_inst_12 : _GEN_363; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_365 = 4'hd == _T_2 ? sram_inst_13 : _GEN_364; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_366 = 4'he == _T_2 ? sram_inst_14 : _GEN_365; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_367 = 4'hf == _T_2 ? sram_inst_15 : _GEN_366; // @[ysyx_25030077_IFU.scala 79:{47,47}]
  wire [31:0] _GEN_385 = 4'h1 == _T_3 ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_386 = 4'h2 == _T_3 ? sram_inst_2 : _GEN_385; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_387 = 4'h3 == _T_3 ? sram_inst_3 : _GEN_386; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_388 = 4'h4 == _T_3 ? sram_inst_4 : _GEN_387; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_389 = 4'h5 == _T_3 ? sram_inst_5 : _GEN_388; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_390 = 4'h6 == _T_3 ? sram_inst_6 : _GEN_389; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_391 = 4'h7 == _T_3 ? sram_inst_7 : _GEN_390; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_392 = 4'h8 == _T_3 ? sram_inst_8 : _GEN_391; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_393 = 4'h9 == _T_3 ? sram_inst_9 : _GEN_392; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_394 = 4'ha == _T_3 ? sram_inst_10 : _GEN_393; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_395 = 4'hb == _T_3 ? sram_inst_11 : _GEN_394; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_396 = 4'hc == _T_3 ? sram_inst_12 : _GEN_395; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_397 = 4'hd == _T_3 ? sram_inst_13 : _GEN_396; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire [31:0] _GEN_398 = 4'he == _T_3 ? sram_inst_14 : _GEN_397; // @[ysyx_25030077_IFU.scala 80:{47,47}]
  wire  _ar_valid_reg_T_3 = _state_reg_T_2 & is_hit; // @[ysyx_25030077_IFU.scala 83:74]
  wire  _ar_valid_reg_T_7 = _state_reg_T_12 | _state_reg_T_5; // @[ysyx_25030077_IFU.scala 84:40]
  wire  _ar_valid_reg_T_9 = ar_valid_reg & io_ar_ready ? 1'h0 : ar_valid_reg; // @[ysyx_25030077_IFU.scala 84:80]
  wire [31:0] _ar_addr_reg_T_4 = {io_pc[31:4],4'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_417 = 4'h1 == _is_hit_T ? sram_inst_1 : sram_inst_0; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_418 = 4'h2 == _is_hit_T ? sram_inst_2 : _GEN_417; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_419 = 4'h3 == _is_hit_T ? sram_inst_3 : _GEN_418; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_420 = 4'h4 == _is_hit_T ? sram_inst_4 : _GEN_419; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_421 = 4'h5 == _is_hit_T ? sram_inst_5 : _GEN_420; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_422 = 4'h6 == _is_hit_T ? sram_inst_6 : _GEN_421; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_423 = 4'h7 == _is_hit_T ? sram_inst_7 : _GEN_422; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_424 = 4'h8 == _is_hit_T ? sram_inst_8 : _GEN_423; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_425 = 4'h9 == _is_hit_T ? sram_inst_9 : _GEN_424; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_426 = 4'ha == _is_hit_T ? sram_inst_10 : _GEN_425; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_427 = 4'hb == _is_hit_T ? sram_inst_11 : _GEN_426; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_428 = 4'hc == _is_hit_T ? sram_inst_12 : _GEN_427; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_429 = 4'hd == _is_hit_T ? sram_inst_13 : _GEN_428; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _GEN_430 = 4'he == _is_hit_T ? sram_inst_14 : _GEN_429; // @[ysyx_25030077_IFU.scala 98:{47,47}]
  wire [31:0] _rdata_reg_T_11 = io_r_valid & k == offset ? io_r_data : rdata_reg; // @[ysyx_25030077_IFU.scala 100:47]
  assign io_out_valid = state_reg == 5'h10; // @[ysyx_25030077_IFU.scala 93:32]
  assign io_out_bits_pc = io_pc; // @[ysyx_25030077_IFU.scala 94:22]
  assign io_out_bits_inst = rdata_reg; // @[ysyx_25030077_IFU.scala 102:22]
  assign io_out_bits_is_err1 = io_err1_in; // @[ysyx_25030077_IFU.scala 95:25]
  assign io_ar_addr = ar_addr_reg; // @[ysyx_25030077_IFU.scala 91:17]
  assign io_ar_valid = ar_valid_reg; // @[ysyx_25030077_IFU.scala 86:17]
  assign io_ar_burst = {{1'd0}, ar_addr_reg[31:28] == 4'ha}; // @[ysyx_25030077_IFU.scala 92:17]
  assign io_r_ready = 1'h1; // @[ysyx_25030077_IFU.scala 34:16]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_0 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h0 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_0 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_0 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_0 <= _GEN_142;
      end
    end else if (4'h0 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_0 <= tag;
      end else begin
        sram_tag_0 <= _GEN_111;
      end
    end else if (4'h0 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_0 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_0 <= _GEN_48;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_1 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h1 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_1 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_1 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_1 <= _GEN_142;
      end
    end else if (4'h1 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_1 <= tag;
      end else begin
        sram_tag_1 <= _GEN_111;
      end
    end else if (4'h1 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_1 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_1 <= _GEN_49;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_2 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h2 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_2 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_2 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_2 <= _GEN_142;
      end
    end else if (4'h2 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_2 <= tag;
      end else begin
        sram_tag_2 <= _GEN_111;
      end
    end else if (4'h2 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_2 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_2 <= _GEN_50;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_3 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h3 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_3 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_3 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_3 <= _GEN_142;
      end
    end else if (4'h3 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_3 <= tag;
      end else begin
        sram_tag_3 <= _GEN_111;
      end
    end else if (4'h3 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_3 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_3 <= _GEN_51;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_4 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h4 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_4 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_4 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_4 <= _GEN_142;
      end
    end else if (4'h4 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_4 <= tag;
      end else begin
        sram_tag_4 <= _GEN_111;
      end
    end else if (4'h4 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_4 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_4 <= _GEN_52;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_5 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h5 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_5 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_5 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_5 <= _GEN_142;
      end
    end else if (4'h5 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_5 <= tag;
      end else begin
        sram_tag_5 <= _GEN_111;
      end
    end else if (4'h5 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_5 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_5 <= _GEN_53;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_6 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h6 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_6 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_6 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_6 <= _GEN_142;
      end
    end else if (4'h6 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_6 <= tag;
      end else begin
        sram_tag_6 <= _GEN_111;
      end
    end else if (4'h6 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_6 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_6 <= _GEN_54;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_7 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h7 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_7 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_7 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_7 <= _GEN_142;
      end
    end else if (4'h7 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_7 <= tag;
      end else begin
        sram_tag_7 <= _GEN_111;
      end
    end else if (4'h7 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_7 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_7 <= _GEN_55;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_8 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h8 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_8 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_8 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_8 <= _GEN_142;
      end
    end else if (4'h8 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_8 <= tag;
      end else begin
        sram_tag_8 <= _GEN_111;
      end
    end else if (4'h8 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_8 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_8 <= _GEN_56;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_9 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'h9 == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_9 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_9 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_9 <= _GEN_142;
      end
    end else if (4'h9 == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_9 <= tag;
      end else begin
        sram_tag_9 <= _GEN_111;
      end
    end else if (4'h9 == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_9 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_9 <= _GEN_57;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_10 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'ha == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_10 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_10 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_10 <= _GEN_142;
      end
    end else if (4'ha == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_10 <= tag;
      end else begin
        sram_tag_10 <= _GEN_111;
      end
    end else if (4'ha == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_10 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_10 <= _GEN_58;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_11 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'hb == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_11 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_11 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_11 <= _GEN_142;
      end
    end else if (4'hb == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_11 <= tag;
      end else begin
        sram_tag_11 <= _GEN_111;
      end
    end else if (4'hb == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_11 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_11 <= _GEN_59;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_12 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'hc == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_12 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_12 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_12 <= _GEN_142;
      end
    end else if (4'hc == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_12 <= tag;
      end else begin
        sram_tag_12 <= _GEN_111;
      end
    end else if (4'hc == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_12 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_12 <= _GEN_60;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_13 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'hd == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_13 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_13 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_13 <= _GEN_142;
      end
    end else if (4'hd == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_13 <= tag;
      end else begin
        sram_tag_13 <= _GEN_111;
      end
    end else if (4'hd == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_13 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_13 <= _GEN_61;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_14 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'he == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_14 <= tag;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_14 <= sram_tag_15; // @[ysyx_25030077_IFU.scala 70:46]
      end else begin
        sram_tag_14 <= _GEN_142;
      end
    end else if (4'he == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_14 <= tag;
      end else begin
        sram_tag_14 <= _GEN_111;
      end
    end else if (4'he == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_14 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_14 <= _GEN_62;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 21:28]
      sram_tag_15 <= 22'h0; // @[ysyx_25030077_IFU.scala 21:28]
    end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 70:40]
      if (_write_reg_T_3 & _write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_15 <= tag;
      end else if (!(4'hf == _T_3)) begin // @[ysyx_25030077_IFU.scala 70:46]
        sram_tag_15 <= _GEN_142;
      end
    end else if (4'hf == _T_2) begin // @[ysyx_25030077_IFU.scala 69:40]
      if (_write_reg_T_3 & j == 2'h2) begin // @[ysyx_25030077_IFU.scala 69:46]
        sram_tag_15 <= tag;
      end else begin
        sram_tag_15 <= _GEN_111;
      end
    end else if (4'hf == _T_1) begin // @[ysyx_25030077_IFU.scala 68:40]
      sram_tag_15 <= _sram_tag_T_9; // @[ysyx_25030077_IFU.scala 68:40]
    end else begin
      sram_tag_15 <= _GEN_63;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_0 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h0 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_0 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_0 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_0 <= _GEN_398;
      end
    end else if (4'h0 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_0 <= sdram_data_2;
      end else begin
        sram_inst_0 <= _GEN_367;
      end
    end else if (4'h0 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_0 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_0 <= _GEN_304;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_1 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h1 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_1 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_1 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_1 <= _GEN_398;
      end
    end else if (4'h1 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_1 <= sdram_data_2;
      end else begin
        sram_inst_1 <= _GEN_367;
      end
    end else if (4'h1 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_1 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_1 <= _GEN_305;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_2 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h2 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_2 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_2 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_2 <= _GEN_398;
      end
    end else if (4'h2 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_2 <= sdram_data_2;
      end else begin
        sram_inst_2 <= _GEN_367;
      end
    end else if (4'h2 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_2 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_2 <= _GEN_306;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_3 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h3 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_3 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_3 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_3 <= _GEN_398;
      end
    end else if (4'h3 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_3 <= sdram_data_2;
      end else begin
        sram_inst_3 <= _GEN_367;
      end
    end else if (4'h3 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_3 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_3 <= _GEN_307;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_4 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h4 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_4 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_4 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_4 <= _GEN_398;
      end
    end else if (4'h4 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_4 <= sdram_data_2;
      end else begin
        sram_inst_4 <= _GEN_367;
      end
    end else if (4'h4 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_4 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_4 <= _GEN_308;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_5 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h5 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_5 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_5 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_5 <= _GEN_398;
      end
    end else if (4'h5 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_5 <= sdram_data_2;
      end else begin
        sram_inst_5 <= _GEN_367;
      end
    end else if (4'h5 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_5 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_5 <= _GEN_309;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_6 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h6 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_6 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_6 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_6 <= _GEN_398;
      end
    end else if (4'h6 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_6 <= sdram_data_2;
      end else begin
        sram_inst_6 <= _GEN_367;
      end
    end else if (4'h6 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_6 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_6 <= _GEN_310;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_7 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h7 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_7 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_7 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_7 <= _GEN_398;
      end
    end else if (4'h7 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_7 <= sdram_data_2;
      end else begin
        sram_inst_7 <= _GEN_367;
      end
    end else if (4'h7 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_7 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_7 <= _GEN_311;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_8 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h8 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_8 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_8 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_8 <= _GEN_398;
      end
    end else if (4'h8 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_8 <= sdram_data_2;
      end else begin
        sram_inst_8 <= _GEN_367;
      end
    end else if (4'h8 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_8 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_8 <= _GEN_312;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_9 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'h9 == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_9 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_9 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_9 <= _GEN_398;
      end
    end else if (4'h9 == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_9 <= sdram_data_2;
      end else begin
        sram_inst_9 <= _GEN_367;
      end
    end else if (4'h9 == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_9 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_9 <= _GEN_313;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_10 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'ha == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_10 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_10 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_10 <= _GEN_398;
      end
    end else if (4'ha == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_10 <= sdram_data_2;
      end else begin
        sram_inst_10 <= _GEN_367;
      end
    end else if (4'ha == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_10 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_10 <= _GEN_314;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_11 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'hb == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_11 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_11 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_11 <= _GEN_398;
      end
    end else if (4'hb == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_11 <= sdram_data_2;
      end else begin
        sram_inst_11 <= _GEN_367;
      end
    end else if (4'hb == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_11 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_11 <= _GEN_315;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_12 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'hc == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_12 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_12 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_12 <= _GEN_398;
      end
    end else if (4'hc == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_12 <= sdram_data_2;
      end else begin
        sram_inst_12 <= _GEN_367;
      end
    end else if (4'hc == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_12 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_12 <= _GEN_316;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_13 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'hd == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_13 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_13 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_13 <= _GEN_398;
      end
    end else if (4'hd == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_13 <= sdram_data_2;
      end else begin
        sram_inst_13 <= _GEN_367;
      end
    end else if (4'hd == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_13 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_13 <= _GEN_317;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_14 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'he == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_14 <= sdram_data_3;
      end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_14 <= sram_inst_15; // @[ysyx_25030077_IFU.scala 80:47]
      end else begin
        sram_inst_14 <= _GEN_398;
      end
    end else if (4'he == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_14 <= sdram_data_2;
      end else begin
        sram_inst_14 <= _GEN_367;
      end
    end else if (4'he == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_14 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_14 <= _GEN_318;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 22:28]
      sram_inst_15 <= 32'h0; // @[ysyx_25030077_IFU.scala 22:28]
    end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 80:41]
      if (_state_reg_T_9 & _state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_15 <= sdram_data_3;
      end else if (!(4'hf == _T_3)) begin // @[ysyx_25030077_IFU.scala 80:47]
        sram_inst_15 <= _GEN_398;
      end
    end else if (4'hf == _T_2) begin // @[ysyx_25030077_IFU.scala 79:41]
      if (_state_reg_T_9 & q == 2'h2) begin // @[ysyx_25030077_IFU.scala 79:47]
        sram_inst_15 <= sdram_data_2;
      end else begin
        sram_inst_15 <= _GEN_367;
      end
    end else if (4'hf == _T_1) begin // @[ysyx_25030077_IFU.scala 78:41]
      sram_inst_15 <= _sram_inst_T_9; // @[ysyx_25030077_IFU.scala 78:41]
    end else begin
      sram_inst_15 <= _GEN_319;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 23:29]
      sdram_data_0 <= 32'h0; // @[ysyx_25030077_IFU.scala 23:29]
    end else if (_state_reg_T_5 & io_r_valid & k == 2'h0) begin // @[ysyx_25030077_IFU.scala 62:25]
      sdram_data_0 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 23:29]
      sdram_data_1 <= 32'h0; // @[ysyx_25030077_IFU.scala 23:29]
    end else if (_sdram_data_0_T_1 & k == 2'h1) begin // @[ysyx_25030077_IFU.scala 63:25]
      sdram_data_1 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 23:29]
      sdram_data_2 <= 32'h0; // @[ysyx_25030077_IFU.scala 23:29]
    end else if (_sdram_data_0_T_1 & k == 2'h2) begin // @[ysyx_25030077_IFU.scala 64:25]
      sdram_data_2 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 23:29]
      sdram_data_3 <= 32'h0; // @[ysyx_25030077_IFU.scala 23:29]
    end else if (_sdram_data_0_T_1 & _state_reg_T_6) begin // @[ysyx_25030077_IFU.scala 65:25]
      sdram_data_3 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_0 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h0 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_0 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h0 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_0 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h0 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_0 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_0 <= _GEN_176;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_1 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h1 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_1 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h1 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_1 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h1 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_1 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_1 <= _GEN_177;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_2 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h2 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_2 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h2 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_2 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h2 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_2 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_2 <= _GEN_178;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_3 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h3 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_3 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h3 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_3 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h3 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_3 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_3 <= _GEN_179;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_4 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h4 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_4 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h4 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_4 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h4 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_4 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_4 <= _GEN_180;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_5 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h5 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_5 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h5 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_5 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h5 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_5 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_5 <= _GEN_181;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_6 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h6 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_6 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h6 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_6 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h6 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_6 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_6 <= _GEN_182;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_7 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h7 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_7 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h7 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_7 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h7 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_7 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_7 <= _GEN_183;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_8 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h8 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_8 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h8 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_8 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h8 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_8 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_8 <= _GEN_184;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_9 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'h9 == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_9 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'h9 == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_9 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'h9 == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_9 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_9 <= _GEN_185;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_10 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'ha == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_10 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'ha == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_10 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'ha == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_10 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_10 <= _GEN_186;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_11 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'hb == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_11 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'hb == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_11 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'hb == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_11 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_11 <= _GEN_187;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_12 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'hc == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_12 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'hc == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_12 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'hc == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_12 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_12 <= _GEN_188;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_13 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'hd == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_13 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'hd == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_13 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'hd == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_13 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_13 <= _GEN_189;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_14 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'he == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_14 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'he == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_14 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'he == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_14 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_14 <= _GEN_190;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 24:30]
      sram_valid_15 <= 1'h0; // @[ysyx_25030077_IFU.scala 24:30]
    end else if (4'hf == _T_3) begin // @[ysyx_25030077_IFU.scala 75:42]
      sram_valid_15 <= _sram_tag_T_17 | _GEN_271; // @[ysyx_25030077_IFU.scala 75:42]
    end else if (4'hf == _T_2) begin // @[ysyx_25030077_IFU.scala 74:42]
      sram_valid_15 <= _sram_tag_T_12 | _GEN_239; // @[ysyx_25030077_IFU.scala 74:42]
    end else if (4'hf == _T_1) begin // @[ysyx_25030077_IFU.scala 73:42]
      sram_valid_15 <= _sram_tag_T_7 | _GEN_207; // @[ysyx_25030077_IFU.scala 73:42]
    end else begin
      sram_valid_15 <= _GEN_191;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 28:20]
      j <= 2'h0; // @[ysyx_25030077_IFU.scala 28:20]
    end else if (_write_reg_T) begin // @[Mux.scala 101:16]
      j <= 2'h0;
    end else if (_write_reg_T_3) begin // @[Mux.scala 101:16]
      if (_write_reg_T_4) begin // @[ysyx_25030077_IFU.scala 56:45]
        j <= 2'h0;
      end else begin
        j <= _j_T_4;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 29:20]
      k <= 2'h0; // @[ysyx_25030077_IFU.scala 29:20]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      k <= 2'h0;
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 52:47]
        k <= _k_T_5;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 30:20]
      q <= 2'h0; // @[ysyx_25030077_IFU.scala 30:20]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      q <= 2'h0;
    end else if (_state_reg_T_9) begin // @[Mux.scala 101:16]
      if (_state_reg_T_10) begin // @[ysyx_25030077_IFU.scala 60:47]
        q <= 2'h0;
      end else begin
        q <= _q_T_4;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 31:28]
      rdata_reg <= 32'h0; // @[ysyx_25030077_IFU.scala 31:28]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (_ar_valid_reg_T_3) begin // @[ysyx_25030077_IFU.scala 98:47]
        if (4'hf == _is_hit_T) begin // @[ysyx_25030077_IFU.scala 98:47]
          rdata_reg <= sram_inst_15; // @[ysyx_25030077_IFU.scala 98:47]
        end else begin
          rdata_reg <= _GEN_430;
        end
      end
    end else if (_state_reg_T_12) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 99:47]
        rdata_reg <= io_r_data;
      end
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      rdata_reg <= _rdata_reg_T_11;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 32:31]
      ar_valid_reg <= 1'h0; // @[ysyx_25030077_IFU.scala 32:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (_state_reg_T_2 & is_hit) begin // @[ysyx_25030077_IFU.scala 83:47]
        ar_valid_reg <= 1'h0;
      end else begin
        ar_valid_reg <= 1'h1;
      end
    end else begin
      ar_valid_reg <= _ar_valid_reg_T_7 & _ar_valid_reg_T_9;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 33:31]
      ar_addr_reg <= 32'h0; // @[ysyx_25030077_IFU.scala 33:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (io_pc[31:28] == 4'h3) begin // @[ysyx_25030077_IFU.scala 89:47]
        ar_addr_reg <= io_pc;
      end else begin
        ar_addr_reg <= _ar_addr_reg_T_4;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 35:28]
      state_reg <= 5'h1; // @[ysyx_25030077_IFU.scala 35:28]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (io_pc[31:28] == 4'ha) begin // @[ysyx_25030077_IFU.scala 38:47]
        if (is_hit) begin // @[ysyx_25030077_IFU.scala 38:76]
          state_reg <= 5'h10;
        end else begin
          state_reg <= 5'h2;
        end
      end else begin
        state_reg <= 5'h8;
      end
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 39:47]
        state_reg <= _state_reg_T_7;
      end else begin
        state_reg <= 5'h2;
      end
    end else if (_state_reg_T_9) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_11;
    end else begin
      state_reg <= _state_reg_T_17;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 44:28]
      write_reg <= 3'h1; // @[ysyx_25030077_IFU.scala 44:28]
    end else if (_write_reg_T) begin // @[Mux.scala 101:16]
      if (_state_reg_T_5) begin // @[ysyx_25030077_IFU.scala 46:45]
        write_reg <= 3'h2;
      end else begin
        write_reg <= 3'h1;
      end
    end else if (_write_reg_T_3) begin // @[Mux.scala 101:16]
      if (j == 2'h3) begin // @[ysyx_25030077_IFU.scala 47:45]
        write_reg <= 3'h4;
      end else begin
        write_reg <= 3'h2;
      end
    end else if (_write_reg_T_6) begin // @[Mux.scala 101:16]
      write_reg <= _write_reg_T_8;
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
  sram_tag_4 = _RAND_4[21:0];
  _RAND_5 = {1{`RANDOM}};
  sram_tag_5 = _RAND_5[21:0];
  _RAND_6 = {1{`RANDOM}};
  sram_tag_6 = _RAND_6[21:0];
  _RAND_7 = {1{`RANDOM}};
  sram_tag_7 = _RAND_7[21:0];
  _RAND_8 = {1{`RANDOM}};
  sram_tag_8 = _RAND_8[21:0];
  _RAND_9 = {1{`RANDOM}};
  sram_tag_9 = _RAND_9[21:0];
  _RAND_10 = {1{`RANDOM}};
  sram_tag_10 = _RAND_10[21:0];
  _RAND_11 = {1{`RANDOM}};
  sram_tag_11 = _RAND_11[21:0];
  _RAND_12 = {1{`RANDOM}};
  sram_tag_12 = _RAND_12[21:0];
  _RAND_13 = {1{`RANDOM}};
  sram_tag_13 = _RAND_13[21:0];
  _RAND_14 = {1{`RANDOM}};
  sram_tag_14 = _RAND_14[21:0];
  _RAND_15 = {1{`RANDOM}};
  sram_tag_15 = _RAND_15[21:0];
  _RAND_16 = {1{`RANDOM}};
  sram_inst_0 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  sram_inst_1 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  sram_inst_2 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  sram_inst_3 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  sram_inst_4 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  sram_inst_5 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  sram_inst_6 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  sram_inst_7 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  sram_inst_8 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  sram_inst_9 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  sram_inst_10 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  sram_inst_11 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  sram_inst_12 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  sram_inst_13 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  sram_inst_14 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  sram_inst_15 = _RAND_31[31:0];
  _RAND_32 = {1{`RANDOM}};
  sdram_data_0 = _RAND_32[31:0];
  _RAND_33 = {1{`RANDOM}};
  sdram_data_1 = _RAND_33[31:0];
  _RAND_34 = {1{`RANDOM}};
  sdram_data_2 = _RAND_34[31:0];
  _RAND_35 = {1{`RANDOM}};
  sdram_data_3 = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  sram_valid_0 = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  sram_valid_1 = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  sram_valid_2 = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  sram_valid_3 = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  sram_valid_4 = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  sram_valid_5 = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  sram_valid_6 = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  sram_valid_7 = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  sram_valid_8 = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  sram_valid_9 = _RAND_45[0:0];
  _RAND_46 = {1{`RANDOM}};
  sram_valid_10 = _RAND_46[0:0];
  _RAND_47 = {1{`RANDOM}};
  sram_valid_11 = _RAND_47[0:0];
  _RAND_48 = {1{`RANDOM}};
  sram_valid_12 = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  sram_valid_13 = _RAND_49[0:0];
  _RAND_50 = {1{`RANDOM}};
  sram_valid_14 = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  sram_valid_15 = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  j = _RAND_52[1:0];
  _RAND_53 = {1{`RANDOM}};
  k = _RAND_53[1:0];
  _RAND_54 = {1{`RANDOM}};
  q = _RAND_54[1:0];
  _RAND_55 = {1{`RANDOM}};
  rdata_reg = _RAND_55[31:0];
  _RAND_56 = {1{`RANDOM}};
  ar_valid_reg = _RAND_56[0:0];
  _RAND_57 = {1{`RANDOM}};
  ar_addr_reg = _RAND_57[31:0];
  _RAND_58 = {1{`RANDOM}};
  state_reg = _RAND_58[4:0];
  _RAND_59 = {1{`RANDOM}};
  write_reg = _RAND_59[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
