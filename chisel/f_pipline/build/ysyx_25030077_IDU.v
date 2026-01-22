module ysyx_25030077_IDU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input         io_in_bits_is_err1,
  input         io_out_ready,
  output        io_out_valid,
  output [3:0]  io_out_bits_exu_type,
  output [3:0]  io_out_bits_data_type,
  output [3:0]  io_out_bits_pc_next_type,
  output [4:0]  io_out_bits_rd_addr,
  output [3:0]  io_out_bits_LSU_type,
  output [31:0] io_out_bits_rs1_data,
  output [31:0] io_out_bits_rs2_data,
  output [31:0] io_out_bits_imm_data,
  output [31:0] io_out_bits_pc_data,
  output        io_out_bits_is_err1,
  output        io_out_bits_is_err2,
  output [4:0]  io_rs1_addr,
  output [4:0]  io_rs2_addr,
  input  [31:0] io_rs1_data,
  input  [31:0] io_rs2_data,
  input  [4:0]  io_EXU_rd,
  input  [4:0]  io_LSU_rd,
  input  [4:0]  io_WBU_rd,
  input         io_EXU_state,
  input         io_LSU_state,
  input         io_WBU_state,
  input         io_err2_in
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [9:0] _isaddi_T_2 = {io_in_bits_inst[14:12],io_in_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  isaddi = _isaddi_T_2 == 10'h13; // @[ysyx_25030077_IDU.scala 22:66]
  wire  isxori = _isaddi_T_2 == 10'h213; // @[ysyx_25030077_IDU.scala 23:66]
  wire  isori = _isaddi_T_2 == 10'h313; // @[ysyx_25030077_IDU.scala 24:66]
  wire  isandi = _isaddi_T_2 == 10'h393; // @[ysyx_25030077_IDU.scala 25:66]
  wire [15:0] _issrai_T_3 = {io_in_bits_inst[31:26],io_in_bits_inst[14:12],io_in_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  issrai = _issrai_T_3 == 16'h4293; // @[ysyx_25030077_IDU.scala 26:90]
  wire  issrli = _issrai_T_3 == 16'h293; // @[ysyx_25030077_IDU.scala 27:90]
  wire  isslli = _issrai_T_3 == 16'h93; // @[ysyx_25030077_IDU.scala 28:90]
  wire  issltiu = _isaddi_T_2 == 10'h193; // @[ysyx_25030077_IDU.scala 29:67]
  wire  isslti = _isaddi_T_2 == 10'h113; // @[ysyx_25030077_IDU.scala 30:67]
  wire  islui = io_in_bits_inst[6:0] == 7'h37; // @[ysyx_25030077_IDU.scala 32:37]
  wire [16:0] _isadd_T_3 = {io_in_bits_inst[31:25],io_in_bits_inst[14:12],io_in_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  isadd = _isadd_T_3 == 17'h33; // @[ysyx_25030077_IDU.scala 34:90]
  wire  isxor = _isadd_T_3 == 17'h233; // @[ysyx_25030077_IDU.scala 35:90]
  wire  isor = _isadd_T_3 == 17'h333; // @[ysyx_25030077_IDU.scala 36:90]
  wire  isand = _isadd_T_3 == 17'h3b3; // @[ysyx_25030077_IDU.scala 37:90]
  wire  issub = _isadd_T_3 == 17'h8033; // @[ysyx_25030077_IDU.scala 38:90]
  wire  issra = _issrai_T_3 == 16'h42b3; // @[ysyx_25030077_IDU.scala 39:90]
  wire  issrl = _issrai_T_3 == 16'h2b3; // @[ysyx_25030077_IDU.scala 40:90]
  wire  isslt = _isadd_T_3 == 17'h133; // @[ysyx_25030077_IDU.scala 41:91]
  wire  issltu = _isadd_T_3 == 17'h1b3; // @[ysyx_25030077_IDU.scala 42:91]
  wire  issll = _isadd_T_3 == 17'hb3; // @[ysyx_25030077_IDU.scala 43:89]
  wire  isauipc = io_in_bits_inst[6:0] == 7'h17; // @[ysyx_25030077_IDU.scala 45:39]
  wire  isjal = io_in_bits_inst[6:0] == 7'h6f; // @[ysyx_25030077_IDU.scala 46:37]
  wire  isjalr = _isaddi_T_2 == 10'h67; // @[ysyx_25030077_IDU.scala 47:67]
  wire  isbeq = _isaddi_T_2 == 10'h63; // @[ysyx_25030077_IDU.scala 49:66]
  wire  isbne = _isaddi_T_2 == 10'he3; // @[ysyx_25030077_IDU.scala 50:66]
  wire  isbge = _isaddi_T_2 == 10'h2e3; // @[ysyx_25030077_IDU.scala 51:65]
  wire  isblt = _isaddi_T_2 == 10'h263; // @[ysyx_25030077_IDU.scala 52:65]
  wire  isbltu = _isaddi_T_2 == 10'h363; // @[ysyx_25030077_IDU.scala 53:65]
  wire  isbgeu = _isaddi_T_2 == 10'h3e3; // @[ysyx_25030077_IDU.scala 54:65]
  wire  issw = _isaddi_T_2 == 10'h123; // @[ysyx_25030077_IDU.scala 56:65]
  wire  issb = _isaddi_T_2 == 10'h23; // @[ysyx_25030077_IDU.scala 57:65]
  wire  issh = _isaddi_T_2 == 10'ha3; // @[ysyx_25030077_IDU.scala 58:65]
  wire  islbu = _isaddi_T_2 == 10'h203; // @[ysyx_25030077_IDU.scala 60:65]
  wire  islb = _isaddi_T_2 == 10'h3; // @[ysyx_25030077_IDU.scala 61:65]
  wire  islw = _isaddi_T_2 == 10'h103; // @[ysyx_25030077_IDU.scala 62:65]
  wire  islh = _isaddi_T_2 == 10'h83; // @[ysyx_25030077_IDU.scala 63:65]
  wire  islhu = _isaddi_T_2 == 10'h283; // @[ysyx_25030077_IDU.scala 64:65]
  wire  _inst_type_T_4 = isaddi | isxori | isori | isandi | isslti | issltiu; // @[ysyx_25030077_IDU.scala 69:52]
  wire  _inst_type_T_13 = isadd | isxor | isor | isand | isslt | issltu | issll | issra | issub | issrl; // @[ysyx_25030077_IDU.scala 71:84]
  wire  _inst_type_T_18 = isbeq | isbne | isblt | isbge | isbltu | isbgeu; // @[ysyx_25030077_IDU.scala 75:49]
  wire  _inst_type_T_20 = issw | issb | issh; // @[ysyx_25030077_IDU.scala 76:19]
  wire  _inst_type_T_24 = islw | islb | islh | islbu | islhu; // @[ysyx_25030077_IDU.scala 77:36]
  wire  _inst_type_T_26 = issrai | isslli | issrli; // @[ysyx_25030077_IDU.scala 78:23]
  wire [3:0] _inst_type_T_27 = _inst_type_T_26 ? 4'ha : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_28 = _inst_type_T_24 ? 4'h9 : _inst_type_T_27; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_29 = _inst_type_T_20 ? 4'h8 : _inst_type_T_28; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_30 = _inst_type_T_18 ? 4'h7 : _inst_type_T_29; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_31 = isjalr ? 4'h6 : _inst_type_T_30; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_32 = isjal ? 4'h5 : _inst_type_T_31; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_33 = isauipc ? 4'h4 : _inst_type_T_32; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_34 = _inst_type_T_13 ? 4'h3 : _inst_type_T_33; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_35 = islui ? 4'h2 : _inst_type_T_34; // @[Mux.scala 101:16]
  wire [3:0] inst_type = _inst_type_T_4 ? 4'h1 : _inst_type_T_35; // @[Mux.scala 101:16]
  wire  _imm_T = inst_type == 4'h1; // @[ysyx_25030077_IDU.scala 82:16]
  wire [19:0] _imm_T_3 = io_in_bits_inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _imm_T_5 = {_imm_T_3,io_in_bits_inst[31:20]}; // @[Cat.scala 31:58]
  wire  _imm_T_6 = inst_type == 4'h2; // @[ysyx_25030077_IDU.scala 83:16]
  wire [31:0] _imm_T_9 = {io_in_bits_inst[31:12],12'h0}; // @[Cat.scala 31:58]
  wire  _imm_T_10 = inst_type == 4'h4; // @[ysyx_25030077_IDU.scala 84:16]
  wire  _imm_T_14 = inst_type == 4'h5; // @[ysyx_25030077_IDU.scala 85:16]
  wire [10:0] _imm_T_17 = io_in_bits_inst[31] ? 11'h7ff : 11'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _imm_T_22 = {_imm_T_17,io_in_bits_inst[31],io_in_bits_inst[19:12],io_in_bits_inst[20],io_in_bits_inst[30:
    21],1'h0}; // @[Cat.scala 31:58]
  wire  _imm_T_23 = inst_type == 4'h6; // @[ysyx_25030077_IDU.scala 86:16]
  wire  _imm_T_29 = inst_type == 4'h7; // @[ysyx_25030077_IDU.scala 87:16]
  wire [18:0] _imm_T_32 = io_in_bits_inst[31] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _imm_T_37 = {_imm_T_32,io_in_bits_inst[31],io_in_bits_inst[7],io_in_bits_inst[30:25],io_in_bits_inst[11:8]
    ,1'h0}; // @[Cat.scala 31:58]
  wire  _imm_T_38 = inst_type == 4'h8; // @[ysyx_25030077_IDU.scala 88:16]
  wire [31:0] _imm_T_44 = {_imm_T_3,io_in_bits_inst[31:25],io_in_bits_inst[11:7]}; // @[Cat.scala 31:58]
  wire  _imm_T_45 = inst_type == 4'h9; // @[ysyx_25030077_IDU.scala 89:16]
  wire  _imm_T_51 = inst_type == 4'ha; // @[ysyx_25030077_IDU.scala 90:16]
  wire [31:0] _imm_T_53 = _imm_T_51 ? {{26'd0}, io_in_bits_inst[25:20]} : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_54 = _imm_T_45 ? _imm_T_5 : _imm_T_53; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_55 = _imm_T_38 ? _imm_T_44 : _imm_T_54; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_56 = _imm_T_29 ? _imm_T_37 : _imm_T_55; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_57 = _imm_T_23 ? _imm_T_5 : _imm_T_56; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_58 = _imm_T_14 ? _imm_T_22 : _imm_T_57; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_59 = _imm_T_10 ? _imm_T_9 : _imm_T_58; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_60 = _imm_T_6 ? _imm_T_9 : _imm_T_59; // @[Mux.scala 101:16]
  wire  _io_out_bits_exu_type_T = isxori | isxor; // @[ysyx_25030077_IDU.scala 94:13]
  wire  _io_out_bits_exu_type_T_1 = isori | isor; // @[ysyx_25030077_IDU.scala 95:13]
  wire  _io_out_bits_exu_type_T_2 = isandi | isand; // @[ysyx_25030077_IDU.scala 96:13]
  wire  _io_out_bits_exu_type_T_3 = isslli | issll; // @[ysyx_25030077_IDU.scala 97:13]
  wire  _io_out_bits_exu_type_T_4 = issrli | issrl; // @[ysyx_25030077_IDU.scala 98:13]
  wire  _io_out_bits_exu_type_T_5 = issrai | issra; // @[ysyx_25030077_IDU.scala 99:13]
  wire  _io_out_bits_exu_type_T_6 = isslti | isslt; // @[ysyx_25030077_IDU.scala 100:13]
  wire  _io_out_bits_exu_type_T_7 = issltiu | issltu; // @[ysyx_25030077_IDU.scala 101:13]
  wire [3:0] _io_out_bits_exu_type_T_8 = issub ? 4'h9 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_exu_type_T_9 = _io_out_bits_exu_type_T_7 ? 4'h8 : _io_out_bits_exu_type_T_8; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_exu_type_T_10 = _io_out_bits_exu_type_T_6 ? 4'h7 : _io_out_bits_exu_type_T_9; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_exu_type_T_11 = _io_out_bits_exu_type_T_5 ? 4'h6 : _io_out_bits_exu_type_T_10; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_exu_type_T_12 = _io_out_bits_exu_type_T_4 ? 4'h5 : _io_out_bits_exu_type_T_11; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_exu_type_T_13 = _io_out_bits_exu_type_T_3 ? 4'h4 : _io_out_bits_exu_type_T_12; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_exu_type_T_14 = _io_out_bits_exu_type_T_2 ? 4'h3 : _io_out_bits_exu_type_T_13; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_exu_type_T_15 = _io_out_bits_exu_type_T_1 ? 4'h2 : _io_out_bits_exu_type_T_14; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_LSU_type_T = islw ? 4'h8 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_LSU_type_T_1 = islhu ? 4'h7 : _io_out_bits_LSU_type_T; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_LSU_type_T_2 = islh ? 4'h6 : _io_out_bits_LSU_type_T_1; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_LSU_type_T_3 = islbu ? 4'h5 : _io_out_bits_LSU_type_T_2; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_LSU_type_T_4 = islb ? 4'h4 : _io_out_bits_LSU_type_T_3; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_LSU_type_T_5 = issb ? 4'h3 : _io_out_bits_LSU_type_T_4; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_LSU_type_T_6 = issh ? 4'h2 : _io_out_bits_LSU_type_T_5; // @[Mux.scala 101:16]
  wire  _io_out_bits_rd_addr_T_3 = _imm_T_29 | _imm_T_38; // @[ysyx_25030077_IDU.scala 117:29]
  wire  _io_rs1_addr_T_5 = _imm_T_6 | _imm_T_10 | _imm_T_14; // @[ysyx_25030077_IDU.scala 121:55]
  wire  _io_rs2_addr_T_4 = inst_type == 4'h3 | _imm_T_29 | _imm_T_38; // @[ysyx_25030077_IDU.scala 125:55]
  wire  _isRAW1_T_1 = ~io_in_bits_is_err1; // @[ysyx_25030077_IDU.scala 135:65]
  wire  _isRAW1_T_3 = io_rs1_addr != 5'h0; // @[ysyx_25030077_IDU.scala 135:95]
  wire  _isRAW1_T_6 = io_rs2_addr != 5'h0; // @[ysyx_25030077_IDU.scala 135:151]
  wire  isRAW1 = io_EXU_state & ~io_in_bits_is_err1 & (io_rs1_addr != 5'h0 & io_rs1_addr == io_EXU_rd | io_rs2_addr != 5'h0
     & io_rs2_addr == io_EXU_rd); // @[ysyx_25030077_IDU.scala 135:78]
  wire  isRAW2 = io_LSU_state & _isRAW1_T_1 & (_isRAW1_T_3 & io_rs1_addr == io_LSU_rd | _isRAW1_T_6 & io_rs2_addr ==
    io_LSU_rd); // @[ysyx_25030077_IDU.scala 136:78]
  wire  isRAW3 = io_WBU_state & _isRAW1_T_1 & (_isRAW1_T_3 & io_rs1_addr == io_WBU_rd | _isRAW1_T_6 & io_rs2_addr ==
    io_WBU_rd); // @[ysyx_25030077_IDU.scala 137:78]
  reg  ready_in_reg; // @[ysyx_25030077_IDU.scala 139:29]
  reg  ready_in_reg_dly; // @[ysyx_25030077_IDU.scala 140:33]
  wire  _ready_in_reg_T = io_in_valid ? 1'h0 : 1'h1; // @[ysyx_25030077_IDU.scala 142:24]
  wire  _ready_in_reg_T_1 = ~ready_in_reg; // @[ysyx_25030077_IDU.scala 143:19]
  wire  _ready_in_reg_T_4 = ~(isRAW1 | isRAW2 | isRAW3); // @[ysyx_25030077_IDU.scala 143:68]
  wire  _ready_in_reg_T_7 = ready_in_reg ? _ready_in_reg_T : _ready_in_reg_T_1 & _ready_in_reg_T_4; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T = isbgeu ? 4'h8 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_1 = isbltu ? 4'h7 : _io_out_bits_pc_next_type_T; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_2 = isbge ? 4'h6 : _io_out_bits_pc_next_type_T_1; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_3 = isblt ? 4'h5 : _io_out_bits_pc_next_type_T_2; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_4 = isbne ? 4'h4 : _io_out_bits_pc_next_type_T_3; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_5 = isbeq ? 4'h3 : _io_out_bits_pc_next_type_T_4; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_6 = isjalr ? 4'h2 : _io_out_bits_pc_next_type_T_5; // @[Mux.scala 101:16]
  assign io_in_ready = ready_in_reg; // @[ysyx_25030077_IDU.scala 164:15]
  assign io_out_valid = ready_in_reg & ~ready_in_reg_dly & ~reset; // @[ysyx_25030077_IDU.scala 162:58]
  assign io_out_bits_exu_type = _io_out_bits_exu_type_T ? 4'h1 : _io_out_bits_exu_type_T_15; // @[Mux.scala 101:16]
  assign io_out_bits_data_type = _inst_type_T_4 ? 4'h1 : _inst_type_T_35; // @[Mux.scala 101:16]
  assign io_out_bits_pc_next_type = isjal ? 4'h1 : _io_out_bits_pc_next_type_T_6; // @[Mux.scala 101:16]
  assign io_out_bits_rd_addr = _io_out_bits_rd_addr_T_3 ? 5'h0 : io_in_bits_inst[11:7]; // @[Mux.scala 101:16]
  assign io_out_bits_LSU_type = issw ? 4'h1 : _io_out_bits_LSU_type_T_6; // @[Mux.scala 101:16]
  assign io_out_bits_rs1_data = io_rs1_data; // @[ysyx_25030077_IDU.scala 129:24]
  assign io_out_bits_rs2_data = io_rs2_data; // @[ysyx_25030077_IDU.scala 130:24]
  assign io_out_bits_imm_data = _imm_T ? _imm_T_5 : _imm_T_60; // @[Mux.scala 101:16]
  assign io_out_bits_pc_data = io_in_bits_pc; // @[ysyx_25030077_IDU.scala 132:24]
  assign io_out_bits_is_err1 = io_in_bits_is_err1; // @[ysyx_25030077_IDU.scala 133:23]
  assign io_out_bits_is_err2 = io_err2_in; // @[ysyx_25030077_IDU.scala 165:23]
  assign io_rs1_addr = _io_rs1_addr_T_5 ? 5'h0 : io_in_bits_inst[19:15]; // @[Mux.scala 101:16]
  assign io_rs2_addr = _io_rs2_addr_T_4 ? io_in_bits_inst[24:20] : 5'h0; // @[Mux.scala 101:16]
  always @(posedge clock) begin
    ready_in_reg <= reset | _ready_in_reg_T_7; // @[ysyx_25030077_IDU.scala 139:{29,29} 141:16]
    if (reset) begin // @[ysyx_25030077_IDU.scala 140:33]
      ready_in_reg_dly <= 1'h0; // @[ysyx_25030077_IDU.scala 140:33]
    end else begin
      ready_in_reg_dly <= ready_in_reg; // @[ysyx_25030077_IDU.scala 145:20]
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
  ready_in_reg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  ready_in_reg_dly = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
