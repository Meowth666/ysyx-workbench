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
module ysyx_25030077_IDU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
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
  output [4:0]  io_rs1_addr,
  output [4:0]  io_rs2_addr,
  input  [31:0] io_rs1_data,
  input  [31:0] io_rs2_data,
  input  [4:0]  io_EXU_rd,
  input  [4:0]  io_LSU_rd,
  input  [4:0]  io_WBU_rd
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [9:0] _isaddi_T_2 = {io_in_bits_inst[14:12],io_in_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  isxori = _isaddi_T_2 == 10'h213; // @[ysyx_25030077_IDU.scala 19:66]
  wire  isori = _isaddi_T_2 == 10'h313; // @[ysyx_25030077_IDU.scala 20:66]
  wire  isandi = _isaddi_T_2 == 10'h393; // @[ysyx_25030077_IDU.scala 21:66]
  wire [15:0] _issrai_T_3 = {io_in_bits_inst[31:26],io_in_bits_inst[14:12],io_in_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  issrai = _issrai_T_3 == 16'h4293; // @[ysyx_25030077_IDU.scala 22:90]
  wire  issrli = _issrai_T_3 == 16'h293; // @[ysyx_25030077_IDU.scala 23:90]
  wire  isslli = _issrai_T_3 == 16'h93; // @[ysyx_25030077_IDU.scala 24:90]
  wire  issltiu = _isaddi_T_2 == 10'h193; // @[ysyx_25030077_IDU.scala 25:67]
  wire  isslti = _isaddi_T_2 == 10'h113; // @[ysyx_25030077_IDU.scala 26:67]
  wire  islui = io_in_bits_inst[6:0] == 7'h37; // @[ysyx_25030077_IDU.scala 28:37]
  wire [16:0] _isadd_T_3 = {io_in_bits_inst[31:25],io_in_bits_inst[14:12],io_in_bits_inst[6:0]}; // @[Cat.scala 31:58]
  wire  isxor = _isadd_T_3 == 17'h233; // @[ysyx_25030077_IDU.scala 31:90]
  wire  isor = _isadd_T_3 == 17'h333; // @[ysyx_25030077_IDU.scala 32:90]
  wire  isand = _isadd_T_3 == 17'h3b3; // @[ysyx_25030077_IDU.scala 33:90]
  wire  issub = _isadd_T_3 == 17'h8033; // @[ysyx_25030077_IDU.scala 34:90]
  wire  issra = _issrai_T_3 == 16'h42b3; // @[ysyx_25030077_IDU.scala 35:90]
  wire  issrl = _issrai_T_3 == 16'h2b3; // @[ysyx_25030077_IDU.scala 36:90]
  wire  isslt = _isadd_T_3 == 17'h133; // @[ysyx_25030077_IDU.scala 37:91]
  wire  issltu = _isadd_T_3 == 17'h1b3; // @[ysyx_25030077_IDU.scala 38:91]
  wire  issll = _isadd_T_3 == 17'hb3; // @[ysyx_25030077_IDU.scala 39:89]
  wire  isauipc = io_in_bits_inst[6:0] == 7'h17; // @[ysyx_25030077_IDU.scala 41:39]
  wire  isjal = io_in_bits_inst[6:0] == 7'h6f; // @[ysyx_25030077_IDU.scala 42:37]
  wire  isjalr = _isaddi_T_2 == 10'h67; // @[ysyx_25030077_IDU.scala 43:67]
  wire  isbeq = _isaddi_T_2 == 10'h63; // @[ysyx_25030077_IDU.scala 45:66]
  wire  isbne = _isaddi_T_2 == 10'he3; // @[ysyx_25030077_IDU.scala 46:66]
  wire  isbge = _isaddi_T_2 == 10'h2e3; // @[ysyx_25030077_IDU.scala 47:65]
  wire  isblt = _isaddi_T_2 == 10'h263; // @[ysyx_25030077_IDU.scala 48:65]
  wire  isbltu = _isaddi_T_2 == 10'h363; // @[ysyx_25030077_IDU.scala 49:65]
  wire  isbgeu = _isaddi_T_2 == 10'h3e3; // @[ysyx_25030077_IDU.scala 50:65]
  wire  issw = _isaddi_T_2 == 10'h123; // @[ysyx_25030077_IDU.scala 52:65]
  wire  issb = _isaddi_T_2 == 10'h23; // @[ysyx_25030077_IDU.scala 53:65]
  wire  issh = _isaddi_T_2 == 10'ha3; // @[ysyx_25030077_IDU.scala 54:65]
  wire  islbu = _isaddi_T_2 == 10'h203; // @[ysyx_25030077_IDU.scala 56:65]
  wire  islb = _isaddi_T_2 == 10'h3; // @[ysyx_25030077_IDU.scala 57:65]
  wire  islw = _isaddi_T_2 == 10'h103; // @[ysyx_25030077_IDU.scala 58:65]
  wire  islh = _isaddi_T_2 == 10'h83; // @[ysyx_25030077_IDU.scala 59:65]
  wire  islhu = _isaddi_T_2 == 10'h283; // @[ysyx_25030077_IDU.scala 60:65]
  wire  _inst_type_T_1 = io_in_bits_inst[6:0] == 7'h13; // @[ysyx_25030077_IDU.scala 65:27]
  wire  _inst_type_T_5 = io_in_bits_inst[6:0] == 7'h33; // @[ysyx_25030077_IDU.scala 67:27]
  wire  _inst_type_T_11 = io_in_bits_inst[6:0] == 7'h67; // @[ysyx_25030077_IDU.scala 70:27]
  wire  _inst_type_T_13 = io_in_bits_inst[6:0] == 7'h63; // @[ysyx_25030077_IDU.scala 71:27]
  wire  _inst_type_T_15 = io_in_bits_inst[6:0] == 7'h23; // @[ysyx_25030077_IDU.scala 72:27]
  wire  _inst_type_T_17 = io_in_bits_inst[6:0] == 7'h3; // @[ysyx_25030077_IDU.scala 73:27]
  wire [3:0] _inst_type_T_18 = _inst_type_T_17 ? 4'h9 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_19 = _inst_type_T_15 ? 4'h8 : _inst_type_T_18; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_20 = _inst_type_T_13 ? 4'h7 : _inst_type_T_19; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_21 = _inst_type_T_11 ? 4'h6 : _inst_type_T_20; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_22 = isjal ? 4'h5 : _inst_type_T_21; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_23 = isauipc ? 4'h4 : _inst_type_T_22; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_24 = _inst_type_T_5 ? 4'h3 : _inst_type_T_23; // @[Mux.scala 101:16]
  wire [3:0] _inst_type_T_25 = islui ? 4'h2 : _inst_type_T_24; // @[Mux.scala 101:16]
  wire [3:0] inst_type = _inst_type_T_1 ? 4'h1 : _inst_type_T_25; // @[Mux.scala 101:16]
  wire  _imm_T = inst_type == 4'h1; // @[ysyx_25030077_IDU.scala 77:16]
  wire [19:0] _imm_T_3 = io_in_bits_inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _imm_T_5 = {_imm_T_3,io_in_bits_inst[31:20]}; // @[Cat.scala 31:58]
  wire  _imm_T_6 = inst_type == 4'h2; // @[ysyx_25030077_IDU.scala 78:16]
  wire [31:0] _imm_T_9 = {io_in_bits_inst[31:12],12'h0}; // @[Cat.scala 31:58]
  wire  _imm_T_10 = inst_type == 4'h4; // @[ysyx_25030077_IDU.scala 79:16]
  wire  _imm_T_14 = inst_type == 4'h5; // @[ysyx_25030077_IDU.scala 80:16]
  wire [10:0] _imm_T_17 = io_in_bits_inst[31] ? 11'h7ff : 11'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _imm_T_22 = {_imm_T_17,io_in_bits_inst[31],io_in_bits_inst[19:12],io_in_bits_inst[20],io_in_bits_inst[30:
    21],1'h0}; // @[Cat.scala 31:58]
  wire  _imm_T_23 = inst_type == 4'h6; // @[ysyx_25030077_IDU.scala 81:16]
  wire  _imm_T_29 = inst_type == 4'h7; // @[ysyx_25030077_IDU.scala 82:16]
  wire [18:0] _imm_T_32 = io_in_bits_inst[31] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _imm_T_37 = {_imm_T_32,io_in_bits_inst[31],io_in_bits_inst[7],io_in_bits_inst[30:25],io_in_bits_inst[11:8]
    ,1'h0}; // @[Cat.scala 31:58]
  wire  _imm_T_38 = inst_type == 4'h8; // @[ysyx_25030077_IDU.scala 83:16]
  wire [31:0] _imm_T_44 = {_imm_T_3,io_in_bits_inst[31:25],io_in_bits_inst[11:7]}; // @[Cat.scala 31:58]
  wire  _imm_T_45 = inst_type == 4'h9; // @[ysyx_25030077_IDU.scala 84:16]
  wire [31:0] _imm_T_51 = _imm_T_45 ? _imm_T_5 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_52 = _imm_T_38 ? _imm_T_44 : _imm_T_51; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_53 = _imm_T_29 ? _imm_T_37 : _imm_T_52; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_54 = _imm_T_23 ? _imm_T_5 : _imm_T_53; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_55 = _imm_T_14 ? _imm_T_22 : _imm_T_54; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_56 = _imm_T_10 ? _imm_T_9 : _imm_T_55; // @[Mux.scala 101:16]
  wire [31:0] _imm_T_57 = _imm_T_6 ? _imm_T_9 : _imm_T_56; // @[Mux.scala 101:16]
  wire  _io_out_bits_exu_type_T = isxori | isxor; // @[ysyx_25030077_IDU.scala 88:13]
  wire  _io_out_bits_exu_type_T_1 = isori | isor; // @[ysyx_25030077_IDU.scala 89:13]
  wire  _io_out_bits_exu_type_T_2 = isandi | isand; // @[ysyx_25030077_IDU.scala 90:13]
  wire  _io_out_bits_exu_type_T_3 = isslli | issll; // @[ysyx_25030077_IDU.scala 91:13]
  wire  _io_out_bits_exu_type_T_4 = issrli | issrl; // @[ysyx_25030077_IDU.scala 92:13]
  wire  _io_out_bits_exu_type_T_5 = issrai | issra; // @[ysyx_25030077_IDU.scala 93:13]
  wire  _io_out_bits_exu_type_T_6 = isslti | isslt; // @[ysyx_25030077_IDU.scala 94:13]
  wire  _io_out_bits_exu_type_T_7 = issltiu | issltu; // @[ysyx_25030077_IDU.scala 95:13]
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
  wire  _io_out_bits_rd_addr_T_3 = _imm_T_29 | _imm_T_38; // @[ysyx_25030077_IDU.scala 111:29]
  wire  _io_rs1_addr_T_5 = _imm_T_6 | _imm_T_10 | _imm_T_14; // @[ysyx_25030077_IDU.scala 115:55]
  wire  _io_rs2_addr_T_4 = inst_type == 4'h3 | _imm_T_29 | _imm_T_38; // @[ysyx_25030077_IDU.scala 119:55]
  wire  _isRAW_T_13 = io_rs2_addr != 5'h0 & (io_rs2_addr == io_EXU_rd | io_rs2_addr == io_LSU_rd | io_rs2_addr ==
    io_WBU_rd); // @[ysyx_25030077_IDU.scala 130:36]
  wire  isRAW = io_rs1_addr != 5'h0 & (io_rs1_addr == io_EXU_rd | io_rs1_addr == io_LSU_rd | io_rs1_addr == io_WBU_rd)
     | _isRAW_T_13; // @[ysyx_25030077_IDU.scala 129:126]
  reg  ready_in_reg; // @[ysyx_25030077_IDU.scala 132:29]
  wire  _ready_in_reg_T = ~ready_in_reg; // @[ysyx_25030077_IDU.scala 135:19]
  wire  _ready_in_reg_T_5 = io_in_valid & (io_WBU_rd == io_rs1_addr | io_WBU_rd == io_rs2_addr); // @[ysyx_25030077_IDU.scala 136:61]
  wire  _ready_in_reg_T_7 = isRAW ? _ready_in_reg_T_5 : io_in_valid; // @[Mux.scala 101:16]
  wire  _ready_in_reg_T_9 = ready_in_reg ? 1'h0 : _ready_in_reg_T & _ready_in_reg_T_7; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T = isbgeu ? 4'h8 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_1 = isbltu ? 4'h7 : _io_out_bits_pc_next_type_T; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_2 = isbge ? 4'h6 : _io_out_bits_pc_next_type_T_1; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_3 = isblt ? 4'h5 : _io_out_bits_pc_next_type_T_2; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_4 = isbne ? 4'h4 : _io_out_bits_pc_next_type_T_3; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_5 = isbeq ? 4'h3 : _io_out_bits_pc_next_type_T_4; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_6 = isjalr ? 4'h2 : _io_out_bits_pc_next_type_T_5; // @[Mux.scala 101:16]
  assign io_in_ready = ready_in_reg; // @[ysyx_25030077_IDU.scala 151:15]
  assign io_out_valid = ready_in_reg; // @[ysyx_25030077_IDU.scala 149:16]
  assign io_out_bits_exu_type = _io_out_bits_exu_type_T ? 4'h1 : _io_out_bits_exu_type_T_15; // @[Mux.scala 101:16]
  assign io_out_bits_data_type = _inst_type_T_1 ? 4'h1 : _inst_type_T_25; // @[Mux.scala 101:16]
  assign io_out_bits_pc_next_type = isjal ? 4'h1 : _io_out_bits_pc_next_type_T_6; // @[Mux.scala 101:16]
  assign io_out_bits_rd_addr = _io_out_bits_rd_addr_T_3 ? 5'h0 : io_in_bits_inst[11:7]; // @[Mux.scala 101:16]
  assign io_out_bits_LSU_type = issw ? 4'h1 : _io_out_bits_LSU_type_T_6; // @[Mux.scala 101:16]
  assign io_out_bits_rs1_data = io_rs1_data; // @[ysyx_25030077_IDU.scala 123:24]
  assign io_out_bits_rs2_data = io_rs2_data; // @[ysyx_25030077_IDU.scala 124:24]
  assign io_out_bits_imm_data = _imm_T ? _imm_T_5 : _imm_T_57; // @[Mux.scala 101:16]
  assign io_out_bits_pc_data = io_in_bits_pc; // @[ysyx_25030077_IDU.scala 126:24]
  assign io_rs1_addr = _io_rs1_addr_T_5 ? 5'h0 : io_in_bits_inst[19:15]; // @[Mux.scala 101:16]
  assign io_rs2_addr = _io_rs2_addr_T_4 ? io_in_bits_inst[24:20] : 5'h0; // @[Mux.scala 101:16]
  always @(posedge clock) begin
    ready_in_reg <= reset | _ready_in_reg_T_9; // @[ysyx_25030077_IDU.scala 132:{29,29} 133:16]
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077_gpr(
  input         clock,
  input         reset,
  input  [4:0]  io_rs1_addr,
  input  [4:0]  io_rs2_addr,
  output [31:0] io_rdata_rs1,
  output [31:0] io_rdata_rs2,
  input  [4:0]  io_rd_addr,
  input  [31:0] io_rd_data,
  input         io_rd_valid
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
`endif // RANDOMIZE_REG_INIT
  reg [31:0] regs_0; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_1; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_2; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_3; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_4; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_5; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_6; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_7; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_8; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_9; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_10; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_11; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_12; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_13; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_14; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_15; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_16; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_17; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_18; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_19; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_20; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_21; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_22; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_23; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_24; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_25; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_26; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_27; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_28; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_29; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_30; // @[ysyx_25030077_gpr.scala 16:21]
  reg [31:0] regs_31; // @[ysyx_25030077_gpr.scala 16:21]
  wire [31:0] _GEN_1 = 5'h1 == io_rs1_addr ? regs_1 : regs_0; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_2 = 5'h2 == io_rs1_addr ? regs_2 : _GEN_1; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_3 = 5'h3 == io_rs1_addr ? regs_3 : _GEN_2; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_4 = 5'h4 == io_rs1_addr ? regs_4 : _GEN_3; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_5 = 5'h5 == io_rs1_addr ? regs_5 : _GEN_4; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_6 = 5'h6 == io_rs1_addr ? regs_6 : _GEN_5; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_7 = 5'h7 == io_rs1_addr ? regs_7 : _GEN_6; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_8 = 5'h8 == io_rs1_addr ? regs_8 : _GEN_7; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_9 = 5'h9 == io_rs1_addr ? regs_9 : _GEN_8; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_10 = 5'ha == io_rs1_addr ? regs_10 : _GEN_9; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_11 = 5'hb == io_rs1_addr ? regs_11 : _GEN_10; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_12 = 5'hc == io_rs1_addr ? regs_12 : _GEN_11; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_13 = 5'hd == io_rs1_addr ? regs_13 : _GEN_12; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_14 = 5'he == io_rs1_addr ? regs_14 : _GEN_13; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_15 = 5'hf == io_rs1_addr ? regs_15 : _GEN_14; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_16 = 5'h10 == io_rs1_addr ? regs_16 : _GEN_15; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_17 = 5'h11 == io_rs1_addr ? regs_17 : _GEN_16; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_18 = 5'h12 == io_rs1_addr ? regs_18 : _GEN_17; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_19 = 5'h13 == io_rs1_addr ? regs_19 : _GEN_18; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_20 = 5'h14 == io_rs1_addr ? regs_20 : _GEN_19; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_21 = 5'h15 == io_rs1_addr ? regs_21 : _GEN_20; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_22 = 5'h16 == io_rs1_addr ? regs_22 : _GEN_21; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_23 = 5'h17 == io_rs1_addr ? regs_23 : _GEN_22; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_24 = 5'h18 == io_rs1_addr ? regs_24 : _GEN_23; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_25 = 5'h19 == io_rs1_addr ? regs_25 : _GEN_24; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_26 = 5'h1a == io_rs1_addr ? regs_26 : _GEN_25; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_27 = 5'h1b == io_rs1_addr ? regs_27 : _GEN_26; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_28 = 5'h1c == io_rs1_addr ? regs_28 : _GEN_27; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_29 = 5'h1d == io_rs1_addr ? regs_29 : _GEN_28; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_30 = 5'h1e == io_rs1_addr ? regs_30 : _GEN_29; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  wire [31:0] _GEN_33 = 5'h1 == io_rs2_addr ? regs_1 : regs_0; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_34 = 5'h2 == io_rs2_addr ? regs_2 : _GEN_33; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_35 = 5'h3 == io_rs2_addr ? regs_3 : _GEN_34; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_36 = 5'h4 == io_rs2_addr ? regs_4 : _GEN_35; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_37 = 5'h5 == io_rs2_addr ? regs_5 : _GEN_36; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_38 = 5'h6 == io_rs2_addr ? regs_6 : _GEN_37; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_39 = 5'h7 == io_rs2_addr ? regs_7 : _GEN_38; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_40 = 5'h8 == io_rs2_addr ? regs_8 : _GEN_39; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_41 = 5'h9 == io_rs2_addr ? regs_9 : _GEN_40; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_42 = 5'ha == io_rs2_addr ? regs_10 : _GEN_41; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_43 = 5'hb == io_rs2_addr ? regs_11 : _GEN_42; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_44 = 5'hc == io_rs2_addr ? regs_12 : _GEN_43; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_45 = 5'hd == io_rs2_addr ? regs_13 : _GEN_44; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_46 = 5'he == io_rs2_addr ? regs_14 : _GEN_45; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_47 = 5'hf == io_rs2_addr ? regs_15 : _GEN_46; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_48 = 5'h10 == io_rs2_addr ? regs_16 : _GEN_47; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_49 = 5'h11 == io_rs2_addr ? regs_17 : _GEN_48; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_50 = 5'h12 == io_rs2_addr ? regs_18 : _GEN_49; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_51 = 5'h13 == io_rs2_addr ? regs_19 : _GEN_50; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_52 = 5'h14 == io_rs2_addr ? regs_20 : _GEN_51; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_53 = 5'h15 == io_rs2_addr ? regs_21 : _GEN_52; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_54 = 5'h16 == io_rs2_addr ? regs_22 : _GEN_53; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_55 = 5'h17 == io_rs2_addr ? regs_23 : _GEN_54; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_56 = 5'h18 == io_rs2_addr ? regs_24 : _GEN_55; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_57 = 5'h19 == io_rs2_addr ? regs_25 : _GEN_56; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_58 = 5'h1a == io_rs2_addr ? regs_26 : _GEN_57; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_59 = 5'h1b == io_rs2_addr ? regs_27 : _GEN_58; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_60 = 5'h1c == io_rs2_addr ? regs_28 : _GEN_59; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_61 = 5'h1d == io_rs2_addr ? regs_29 : _GEN_60; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  wire [31:0] _GEN_62 = 5'h1e == io_rs2_addr ? regs_30 : _GEN_61; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  assign io_rdata_rs1 = 5'h1f == io_rs1_addr ? regs_31 : _GEN_30; // @[ysyx_25030077_gpr.scala 17:{16,16}]
  assign io_rdata_rs2 = 5'h1f == io_rs2_addr ? regs_31 : _GEN_62; // @[ysyx_25030077_gpr.scala 18:{16,16}]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_0 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h0 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_0 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_1 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h1 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_1 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_2 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h2 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_2 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_3 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h3 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_3 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_4 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h4 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_4 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_5 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h5 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_5 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_6 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h6 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_6 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_7 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h7 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_7 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_8 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h8 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_8 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_9 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h9 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_9 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_10 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'ha == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_10 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_11 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'hb == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_11 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_12 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'hc == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_12 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_13 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'hd == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_13 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_14 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'he == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_14 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_15 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'hf == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_15 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_16 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h10 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_16 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_17 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h11 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_17 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_18 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h12 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_18 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_19 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h13 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_19 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_20 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h14 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_20 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_21 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h15 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_21 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_22 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h16 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_22 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_23 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h17 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_23 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_24 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h18 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_24 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_25 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h19 == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_25 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_26 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h1a == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_26 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_27 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h1b == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_27 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_28 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h1c == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_28 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_29 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h1d == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_29 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_30 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h1e == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_30 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
    end
    if (reset) begin // @[ysyx_25030077_gpr.scala 16:21]
      regs_31 <= 32'h0; // @[ysyx_25030077_gpr.scala 16:21]
    end else if (io_rd_valid & io_rd_addr != 5'h0) begin // @[ysyx_25030077_gpr.scala 19:46]
      if (5'h1f == io_rd_addr) begin // @[ysyx_25030077_gpr.scala 20:22]
        regs_31 <= io_rd_data; // @[ysyx_25030077_gpr.scala 20:22]
      end
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
  regs_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  regs_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  regs_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  regs_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  regs_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  regs_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  regs_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  regs_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  regs_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  regs_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  regs_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  regs_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  regs_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  regs_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  regs_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  regs_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  regs_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  regs_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  regs_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  regs_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  regs_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  regs_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  regs_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  regs_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  regs_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  regs_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  regs_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  regs_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  regs_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  regs_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  regs_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  regs_31 = _RAND_31[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077_EXU(
  output        io_in_ready,
  input         io_in_valid,
  input  [3:0]  io_in_bits_exu_type,
  input  [3:0]  io_in_bits_data_type,
  input  [3:0]  io_in_bits_pc_next_type,
  input  [4:0]  io_in_bits_rd_addr,
  input  [3:0]  io_in_bits_LSU_type,
  input  [31:0] io_in_bits_rs1_data,
  input  [31:0] io_in_bits_rs2_data,
  input  [31:0] io_in_bits_imm_data,
  input  [31:0] io_in_bits_pc_data,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_result,
  output [4:0]  io_out_bits_rd_addr,
  output [3:0]  io_out_bits_LSU_type,
  output [31:0] io_out_bits_rs2_data,
  output [31:0] io_pc_next
);
  wire  _data1_T = io_in_bits_data_type == 4'h2; // @[ysyx_25030077_EXU.scala 12:27]
  wire  _data1_T_1 = io_in_bits_data_type == 4'h4; // @[ysyx_25030077_EXU.scala 13:27]
  wire  _data1_T_2 = io_in_bits_data_type == 4'h5; // @[ysyx_25030077_EXU.scala 14:27]
  wire  _data1_T_3 = io_in_bits_data_type == 4'h6; // @[ysyx_25030077_EXU.scala 15:27]
  wire  _data1_T_4 = io_in_bits_data_type == 4'h7; // @[ysyx_25030077_EXU.scala 16:27]
  wire [31:0] _data1_T_5 = _data1_T_4 ? 32'h0 : io_in_bits_rs1_data; // @[Mux.scala 101:16]
  wire [31:0] _data1_T_6 = _data1_T_3 ? io_in_bits_pc_data : _data1_T_5; // @[Mux.scala 101:16]
  wire [31:0] _data1_T_7 = _data1_T_2 ? io_in_bits_pc_data : _data1_T_6; // @[Mux.scala 101:16]
  wire [31:0] _data1_T_8 = _data1_T_1 ? io_in_bits_pc_data : _data1_T_7; // @[Mux.scala 101:16]
  wire [31:0] data1 = _data1_T ? 32'h0 : _data1_T_8; // @[Mux.scala 101:16]
  wire  _data2_T = io_in_bits_data_type == 4'h3; // @[ysyx_25030077_EXU.scala 19:27]
  wire [31:0] _data2_T_4 = _data1_T_4 ? 32'h0 : io_in_bits_imm_data; // @[Mux.scala 101:16]
  wire [31:0] _data2_T_5 = _data1_T_3 ? 32'h4 : _data2_T_4; // @[Mux.scala 101:16]
  wire [31:0] _data2_T_6 = _data1_T_2 ? 32'h4 : _data2_T_5; // @[Mux.scala 101:16]
  wire [31:0] data2 = _data2_T ? io_in_bits_rs2_data : _data2_T_6; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_1 = io_in_bits_pc_data + 32'h4; // @[ysyx_25030077_EXU.scala 24:44]
  wire  _pc_next_T_2 = io_in_bits_pc_next_type == 4'h1; // @[ysyx_25030077_EXU.scala 25:30]
  wire [31:0] _pc_next_T_4 = io_in_bits_pc_data + io_in_bits_imm_data; // @[ysyx_25030077_EXU.scala 25:67]
  wire  _pc_next_T_5 = io_in_bits_pc_next_type == 4'h2; // @[ysyx_25030077_EXU.scala 26:30]
  wire [31:0] _pc_next_T_7 = io_in_bits_imm_data + io_in_bits_rs1_data; // @[ysyx_25030077_EXU.scala 26:69]
  wire [31:0] _pc_next_T_10 = _pc_next_T_7 & 32'hfffffffe; // @[ysyx_25030077_EXU.scala 26:92]
  wire  _pc_next_T_11 = io_in_bits_pc_next_type == 4'h3; // @[ysyx_25030077_EXU.scala 27:30]
  wire [31:0] _pc_next_T_17 = data1 == data2 ? _pc_next_T_4 : _pc_next_T_1; // @[ysyx_25030077_EXU.scala 27:50]
  wire  _pc_next_T_18 = io_in_bits_pc_next_type == 4'h4; // @[ysyx_25030077_EXU.scala 28:30]
  wire [31:0] _pc_next_T_24 = data1 != data2 ? _pc_next_T_4 : _pc_next_T_1; // @[ysyx_25030077_EXU.scala 28:50]
  wire  _pc_next_T_25 = io_in_bits_pc_next_type == 4'h5; // @[ysyx_25030077_EXU.scala 29:30]
  wire [31:0] _pc_next_T_26 = _data1_T ? 32'h0 : _data1_T_8; // @[ysyx_25030077_EXU.scala 29:57]
  wire [31:0] _pc_next_T_27 = _data2_T ? io_in_bits_rs2_data : _data2_T_6; // @[ysyx_25030077_EXU.scala 29:72]
  wire  _pc_next_T_28 = $signed(_pc_next_T_26) < $signed(_pc_next_T_27); // @[ysyx_25030077_EXU.scala 29:64]
  wire [31:0] _pc_next_T_33 = $signed(_pc_next_T_26) < $signed(_pc_next_T_27) ? _pc_next_T_4 : _pc_next_T_1; // @[ysyx_25030077_EXU.scala 29:50]
  wire  _pc_next_T_34 = io_in_bits_pc_next_type == 4'h6; // @[ysyx_25030077_EXU.scala 30:30]
  wire [31:0] _pc_next_T_42 = $signed(_pc_next_T_26) >= $signed(_pc_next_T_27) ? _pc_next_T_4 : _pc_next_T_1; // @[ysyx_25030077_EXU.scala 30:50]
  wire  _pc_next_T_43 = io_in_bits_pc_next_type == 4'h7; // @[ysyx_25030077_EXU.scala 31:30]
  wire  _pc_next_T_44 = data1 < data2; // @[ysyx_25030077_EXU.scala 31:57]
  wire [31:0] _pc_next_T_49 = data1 < data2 ? _pc_next_T_4 : _pc_next_T_1; // @[ysyx_25030077_EXU.scala 31:50]
  wire  _pc_next_T_50 = io_in_bits_pc_next_type == 4'h8; // @[ysyx_25030077_EXU.scala 32:30]
  wire [31:0] _pc_next_T_56 = data1 >= data2 ? _pc_next_T_4 : _pc_next_T_1; // @[ysyx_25030077_EXU.scala 32:50]
  wire [31:0] _pc_next_T_57 = _pc_next_T_50 ? _pc_next_T_56 : _pc_next_T_1; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_58 = _pc_next_T_43 ? _pc_next_T_49 : _pc_next_T_57; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_59 = _pc_next_T_34 ? _pc_next_T_42 : _pc_next_T_58; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_60 = _pc_next_T_25 ? _pc_next_T_33 : _pc_next_T_59; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_61 = _pc_next_T_18 ? _pc_next_T_24 : _pc_next_T_60; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_62 = _pc_next_T_11 ? _pc_next_T_17 : _pc_next_T_61; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_63 = _pc_next_T_5 ? _pc_next_T_10 : _pc_next_T_62; // @[Mux.scala 101:16]
  wire [32:0] _out33_T = data1 + data2; // @[ysyx_25030077_EXU.scala 34:30]
  wire  _out33_T_1 = io_in_bits_exu_type == 4'h1; // @[ysyx_25030077_EXU.scala 35:26]
  wire [31:0] _out33_T_2 = data1 ^ data2; // @[ysyx_25030077_EXU.scala 35:64]
  wire [32:0] _out33_T_3 = {1'h0,_out33_T_2}; // @[Cat.scala 31:58]
  wire  _out33_T_4 = io_in_bits_exu_type == 4'h2; // @[ysyx_25030077_EXU.scala 36:26]
  wire [31:0] _out33_T_5 = data1 | data2; // @[ysyx_25030077_EXU.scala 36:64]
  wire [32:0] _out33_T_6 = {1'h0,_out33_T_5}; // @[Cat.scala 31:58]
  wire  _out33_T_7 = io_in_bits_exu_type == 4'h3; // @[ysyx_25030077_EXU.scala 37:26]
  wire [31:0] _out33_T_8 = data1 & data2; // @[ysyx_25030077_EXU.scala 37:64]
  wire [32:0] _out33_T_9 = {1'h0,_out33_T_8}; // @[Cat.scala 31:58]
  wire  _out33_T_10 = io_in_bits_exu_type == 4'h4; // @[ysyx_25030077_EXU.scala 38:26]
  wire [62:0] _GEN_0 = {{31'd0}, data1}; // @[ysyx_25030077_EXU.scala 38:64]
  wire [62:0] _out33_T_12 = _GEN_0 << data2[4:0]; // @[ysyx_25030077_EXU.scala 38:64]
  wire [63:0] _out33_T_13 = {1'h0,_out33_T_12}; // @[Cat.scala 31:58]
  wire  _out33_T_14 = io_in_bits_exu_type == 4'h5; // @[ysyx_25030077_EXU.scala 39:26]
  wire [31:0] _out33_T_16 = data1 >> data2[4:0]; // @[ysyx_25030077_EXU.scala 39:64]
  wire [32:0] _out33_T_17 = {1'h0,_out33_T_16}; // @[Cat.scala 31:58]
  wire  _out33_T_18 = io_in_bits_exu_type == 4'h6; // @[ysyx_25030077_EXU.scala 40:26]
  wire [31:0] out33_lo = $signed(_pc_next_T_26) >>> data2[4:0]; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_22 = {1'h0,out33_lo}; // @[Cat.scala 31:58]
  wire  _out33_T_23 = io_in_bits_exu_type == 4'h7; // @[ysyx_25030077_EXU.scala 41:26]
  wire [32:0] _out33_T_27 = {32'h0,_pc_next_T_28}; // @[Cat.scala 31:58]
  wire  _out33_T_28 = io_in_bits_exu_type == 4'h8; // @[ysyx_25030077_EXU.scala 42:26]
  wire [32:0] _out33_T_30 = {32'h0,_pc_next_T_44}; // @[Cat.scala 31:58]
  wire  _out33_T_31 = io_in_bits_exu_type == 4'h9; // @[ysyx_25030077_EXU.scala 43:26]
  wire [32:0] _out33_T_32 = data1 - data2; // @[ysyx_25030077_EXU.scala 43:50]
  wire [32:0] _out33_T_34 = _out33_T_31 ? _out33_T_32 : _out33_T; // @[Mux.scala 101:16]
  wire [32:0] _out33_T_35 = _out33_T_28 ? _out33_T_30 : _out33_T_34; // @[Mux.scala 101:16]
  wire [32:0] _out33_T_36 = _out33_T_23 ? _out33_T_27 : _out33_T_35; // @[Mux.scala 101:16]
  wire [32:0] _out33_T_37 = _out33_T_18 ? _out33_T_22 : _out33_T_36; // @[Mux.scala 101:16]
  wire [32:0] _out33_T_38 = _out33_T_14 ? _out33_T_17 : _out33_T_37; // @[Mux.scala 101:16]
  wire [63:0] _out33_T_39 = _out33_T_10 ? _out33_T_13 : {{31'd0}, _out33_T_38}; // @[Mux.scala 101:16]
  wire [63:0] _out33_T_40 = _out33_T_7 ? {{31'd0}, _out33_T_9} : _out33_T_39; // @[Mux.scala 101:16]
  wire [63:0] _out33_T_41 = _out33_T_4 ? {{31'd0}, _out33_T_6} : _out33_T_40; // @[Mux.scala 101:16]
  wire [63:0] out33 = _out33_T_1 ? {{31'd0}, _out33_T_3} : _out33_T_41; // @[Mux.scala 101:16]
  assign io_in_ready = 1'h1; // @[ysyx_25030077_EXU.scala 45:15]
  assign io_out_valid = io_in_valid; // @[ysyx_25030077_EXU.scala 46:16]
  assign io_out_bits_result = out33[31:0]; // @[ysyx_25030077_EXU.scala 47:30]
  assign io_out_bits_rd_addr = io_in_bits_rd_addr; // @[ysyx_25030077_EXU.scala 48:23]
  assign io_out_bits_LSU_type = io_in_bits_LSU_type; // @[ysyx_25030077_EXU.scala 49:24]
  assign io_out_bits_rs2_data = io_in_bits_rs2_data; // @[ysyx_25030077_EXU.scala 50:24]
  assign io_pc_next = _pc_next_T_2 ? _pc_next_T_4 : _pc_next_T_63; // @[Mux.scala 101:16]
endmodule
module ysyx_25030077_LSU(
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_result,
  input  [4:0]  io_in_bits_rd_addr,
  input  [3:0]  io_in_bits_LSU_type,
  input  [31:0] io_in_bits_rs2_data,
  input         io_out_ready,
  output        io_out_valid,
  output [4:0]  io_out_bits_rd_addr,
  output [31:0] io_out_bits_rd_data
);
  assign io_in_ready = 1'h1; // @[ysyx_25030077_LSU.scala 10:15]
  assign io_out_valid = io_in_valid; // @[ysyx_25030077_LSU.scala 13:16]
  assign io_out_bits_rd_addr = io_in_bits_rd_addr; // @[ysyx_25030077_LSU.scala 11:23]
  assign io_out_bits_rd_data = io_in_bits_rs2_data; // @[ysyx_25030077_LSU.scala 12:23]
endmodule
module ysyx_25030077_WBU(
  output        io_in_ready,
  input         io_in_valid,
  input  [4:0]  io_in_bits_rd_addr,
  input  [31:0] io_in_bits_rd_data,
  output [4:0]  io_rd_addr,
  output [31:0] io_rd_data,
  output        io_rd_valid,
  input         io_out_ready,
  output        io_out_valid
);
  assign io_in_ready = 1'h1; // @[ysyx_25030077_WBU.scala 13:15]
  assign io_rd_addr = io_in_bits_rd_addr; // @[ysyx_25030077_WBU.scala 14:14]
  assign io_rd_data = io_in_bits_rd_data; // @[ysyx_25030077_WBU.scala 15:14]
  assign io_rd_valid = io_in_valid; // @[ysyx_25030077_WBU.scala 16:15]
  assign io_out_valid = 1'h1; // @[ysyx_25030077_WBU.scala 17:16]
endmodule
module ysyx_25030077(
  input   clock,
  input   reset
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
`endif // RANDOMIZE_REG_INIT
  wire  a_ifu_clock; // @[ysyx_25030077.scala 7:21]
  wire  a_ifu_reset; // @[ysyx_25030077.scala 7:21]
  wire  a_ifu_io_out_ready; // @[ysyx_25030077.scala 7:21]
  wire  a_ifu_io_out_valid; // @[ysyx_25030077.scala 7:21]
  wire [31:0] a_ifu_io_out_bits_pc; // @[ysyx_25030077.scala 7:21]
  wire [31:0] a_ifu_io_out_bits_inst; // @[ysyx_25030077.scala 7:21]
  wire  b_idu_clock; // @[ysyx_25030077.scala 8:21]
  wire  b_idu_reset; // @[ysyx_25030077.scala 8:21]
  wire  b_idu_io_in_ready; // @[ysyx_25030077.scala 8:21]
  wire  b_idu_io_in_valid; // @[ysyx_25030077.scala 8:21]
  wire [31:0] b_idu_io_in_bits_pc; // @[ysyx_25030077.scala 8:21]
  wire [31:0] b_idu_io_in_bits_inst; // @[ysyx_25030077.scala 8:21]
  wire  b_idu_io_out_ready; // @[ysyx_25030077.scala 8:21]
  wire  b_idu_io_out_valid; // @[ysyx_25030077.scala 8:21]
  wire [3:0] b_idu_io_out_bits_exu_type; // @[ysyx_25030077.scala 8:21]
  wire [3:0] b_idu_io_out_bits_data_type; // @[ysyx_25030077.scala 8:21]
  wire [3:0] b_idu_io_out_bits_pc_next_type; // @[ysyx_25030077.scala 8:21]
  wire [4:0] b_idu_io_out_bits_rd_addr; // @[ysyx_25030077.scala 8:21]
  wire [3:0] b_idu_io_out_bits_LSU_type; // @[ysyx_25030077.scala 8:21]
  wire [31:0] b_idu_io_out_bits_rs1_data; // @[ysyx_25030077.scala 8:21]
  wire [31:0] b_idu_io_out_bits_rs2_data; // @[ysyx_25030077.scala 8:21]
  wire [31:0] b_idu_io_out_bits_imm_data; // @[ysyx_25030077.scala 8:21]
  wire [31:0] b_idu_io_out_bits_pc_data; // @[ysyx_25030077.scala 8:21]
  wire [4:0] b_idu_io_rs1_addr; // @[ysyx_25030077.scala 8:21]
  wire [4:0] b_idu_io_rs2_addr; // @[ysyx_25030077.scala 8:21]
  wire [31:0] b_idu_io_rs1_data; // @[ysyx_25030077.scala 8:21]
  wire [31:0] b_idu_io_rs2_data; // @[ysyx_25030077.scala 8:21]
  wire [4:0] b_idu_io_EXU_rd; // @[ysyx_25030077.scala 8:21]
  wire [4:0] b_idu_io_LSU_rd; // @[ysyx_25030077.scala 8:21]
  wire [4:0] b_idu_io_WBU_rd; // @[ysyx_25030077.scala 8:21]
  wire  g_gpr_clock; // @[ysyx_25030077.scala 9:21]
  wire  g_gpr_reset; // @[ysyx_25030077.scala 9:21]
  wire [4:0] g_gpr_io_rs1_addr; // @[ysyx_25030077.scala 9:21]
  wire [4:0] g_gpr_io_rs2_addr; // @[ysyx_25030077.scala 9:21]
  wire [31:0] g_gpr_io_rdata_rs1; // @[ysyx_25030077.scala 9:21]
  wire [31:0] g_gpr_io_rdata_rs2; // @[ysyx_25030077.scala 9:21]
  wire [4:0] g_gpr_io_rd_addr; // @[ysyx_25030077.scala 9:21]
  wire [31:0] g_gpr_io_rd_data; // @[ysyx_25030077.scala 9:21]
  wire  g_gpr_io_rd_valid; // @[ysyx_25030077.scala 9:21]
  wire  c_exu_io_in_ready; // @[ysyx_25030077.scala 10:21]
  wire  c_exu_io_in_valid; // @[ysyx_25030077.scala 10:21]
  wire [3:0] c_exu_io_in_bits_exu_type; // @[ysyx_25030077.scala 10:21]
  wire [3:0] c_exu_io_in_bits_data_type; // @[ysyx_25030077.scala 10:21]
  wire [3:0] c_exu_io_in_bits_pc_next_type; // @[ysyx_25030077.scala 10:21]
  wire [4:0] c_exu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 10:21]
  wire [3:0] c_exu_io_in_bits_LSU_type; // @[ysyx_25030077.scala 10:21]
  wire [31:0] c_exu_io_in_bits_rs1_data; // @[ysyx_25030077.scala 10:21]
  wire [31:0] c_exu_io_in_bits_rs2_data; // @[ysyx_25030077.scala 10:21]
  wire [31:0] c_exu_io_in_bits_imm_data; // @[ysyx_25030077.scala 10:21]
  wire [31:0] c_exu_io_in_bits_pc_data; // @[ysyx_25030077.scala 10:21]
  wire  c_exu_io_out_ready; // @[ysyx_25030077.scala 10:21]
  wire  c_exu_io_out_valid; // @[ysyx_25030077.scala 10:21]
  wire [31:0] c_exu_io_out_bits_result; // @[ysyx_25030077.scala 10:21]
  wire [4:0] c_exu_io_out_bits_rd_addr; // @[ysyx_25030077.scala 10:21]
  wire [3:0] c_exu_io_out_bits_LSU_type; // @[ysyx_25030077.scala 10:21]
  wire [31:0] c_exu_io_out_bits_rs2_data; // @[ysyx_25030077.scala 10:21]
  wire [31:0] c_exu_io_pc_next; // @[ysyx_25030077.scala 10:21]
  wire  d_lsu_io_in_ready; // @[ysyx_25030077.scala 11:21]
  wire  d_lsu_io_in_valid; // @[ysyx_25030077.scala 11:21]
  wire [31:0] d_lsu_io_in_bits_result; // @[ysyx_25030077.scala 11:21]
  wire [4:0] d_lsu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 11:21]
  wire [3:0] d_lsu_io_in_bits_LSU_type; // @[ysyx_25030077.scala 11:21]
  wire [31:0] d_lsu_io_in_bits_rs2_data; // @[ysyx_25030077.scala 11:21]
  wire  d_lsu_io_out_ready; // @[ysyx_25030077.scala 11:21]
  wire  d_lsu_io_out_valid; // @[ysyx_25030077.scala 11:21]
  wire [4:0] d_lsu_io_out_bits_rd_addr; // @[ysyx_25030077.scala 11:21]
  wire [31:0] d_lsu_io_out_bits_rd_data; // @[ysyx_25030077.scala 11:21]
  wire  e_wbu_io_in_ready; // @[ysyx_25030077.scala 12:21]
  wire  e_wbu_io_in_valid; // @[ysyx_25030077.scala 12:21]
  wire [4:0] e_wbu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 12:21]
  wire [31:0] e_wbu_io_in_bits_rd_data; // @[ysyx_25030077.scala 12:21]
  wire [4:0] e_wbu_io_rd_addr; // @[ysyx_25030077.scala 12:21]
  wire [31:0] e_wbu_io_rd_data; // @[ysyx_25030077.scala 12:21]
  wire  e_wbu_io_rd_valid; // @[ysyx_25030077.scala 12:21]
  wire  e_wbu_io_out_ready; // @[ysyx_25030077.scala 12:21]
  wire  e_wbu_io_out_valid; // @[ysyx_25030077.scala 12:21]
  reg  validReg; // @[ChiselHelpers.scala.scala 25:27]
  wire  _b_idu_io_in_bits_T = a_ifu_io_out_valid & b_idu_io_in_ready; // @[ChiselHelpers.scala.scala 31:58]
  reg [31:0] b_idu_io_in_bits_r_pc; // @[Reg.scala 16:16]
  reg [31:0] b_idu_io_in_bits_r_inst; // @[Reg.scala 16:16]
  reg  validReg_1; // @[ChiselHelpers.scala.scala 25:27]
  wire  _c_exu_io_in_bits_T = b_idu_io_out_valid & c_exu_io_in_ready; // @[ChiselHelpers.scala.scala 31:58]
  reg [3:0] c_exu_io_in_bits_r_exu_type; // @[Reg.scala 16:16]
  reg [3:0] c_exu_io_in_bits_r_data_type; // @[Reg.scala 16:16]
  reg [3:0] c_exu_io_in_bits_r_pc_next_type; // @[Reg.scala 16:16]
  reg [4:0] c_exu_io_in_bits_r_rd_addr; // @[Reg.scala 16:16]
  reg [3:0] c_exu_io_in_bits_r_LSU_type; // @[Reg.scala 16:16]
  reg [31:0] c_exu_io_in_bits_r_rs1_data; // @[Reg.scala 16:16]
  reg [31:0] c_exu_io_in_bits_r_rs2_data; // @[Reg.scala 16:16]
  reg [31:0] c_exu_io_in_bits_r_imm_data; // @[Reg.scala 16:16]
  reg [31:0] c_exu_io_in_bits_r_pc_data; // @[Reg.scala 16:16]
  reg  validReg_2; // @[ChiselHelpers.scala.scala 25:27]
  wire  _d_lsu_io_in_bits_T = c_exu_io_out_valid & d_lsu_io_in_ready; // @[ChiselHelpers.scala.scala 31:58]
  reg [31:0] d_lsu_io_in_bits_r_result; // @[Reg.scala 16:16]
  reg [4:0] d_lsu_io_in_bits_r_rd_addr; // @[Reg.scala 16:16]
  reg [3:0] d_lsu_io_in_bits_r_LSU_type; // @[Reg.scala 16:16]
  reg [31:0] d_lsu_io_in_bits_r_rs2_data; // @[Reg.scala 16:16]
  reg  validReg_3; // @[ChiselHelpers.scala.scala 25:27]
  wire  _e_wbu_io_in_bits_T = d_lsu_io_out_valid & e_wbu_io_in_ready; // @[ChiselHelpers.scala.scala 31:58]
  reg [4:0] e_wbu_io_in_bits_r_rd_addr; // @[Reg.scala 16:16]
  reg [31:0] e_wbu_io_in_bits_r_rd_data; // @[Reg.scala 16:16]
  ysyx_25030077_IFU a_ifu ( // @[ysyx_25030077.scala 7:21]
    .clock(a_ifu_clock),
    .reset(a_ifu_reset),
    .io_out_ready(a_ifu_io_out_ready),
    .io_out_valid(a_ifu_io_out_valid),
    .io_out_bits_pc(a_ifu_io_out_bits_pc),
    .io_out_bits_inst(a_ifu_io_out_bits_inst)
  );
  ysyx_25030077_IDU b_idu ( // @[ysyx_25030077.scala 8:21]
    .clock(b_idu_clock),
    .reset(b_idu_reset),
    .io_in_ready(b_idu_io_in_ready),
    .io_in_valid(b_idu_io_in_valid),
    .io_in_bits_pc(b_idu_io_in_bits_pc),
    .io_in_bits_inst(b_idu_io_in_bits_inst),
    .io_out_ready(b_idu_io_out_ready),
    .io_out_valid(b_idu_io_out_valid),
    .io_out_bits_exu_type(b_idu_io_out_bits_exu_type),
    .io_out_bits_data_type(b_idu_io_out_bits_data_type),
    .io_out_bits_pc_next_type(b_idu_io_out_bits_pc_next_type),
    .io_out_bits_rd_addr(b_idu_io_out_bits_rd_addr),
    .io_out_bits_LSU_type(b_idu_io_out_bits_LSU_type),
    .io_out_bits_rs1_data(b_idu_io_out_bits_rs1_data),
    .io_out_bits_rs2_data(b_idu_io_out_bits_rs2_data),
    .io_out_bits_imm_data(b_idu_io_out_bits_imm_data),
    .io_out_bits_pc_data(b_idu_io_out_bits_pc_data),
    .io_rs1_addr(b_idu_io_rs1_addr),
    .io_rs2_addr(b_idu_io_rs2_addr),
    .io_rs1_data(b_idu_io_rs1_data),
    .io_rs2_data(b_idu_io_rs2_data),
    .io_EXU_rd(b_idu_io_EXU_rd),
    .io_LSU_rd(b_idu_io_LSU_rd),
    .io_WBU_rd(b_idu_io_WBU_rd)
  );
  ysyx_25030077_gpr g_gpr ( // @[ysyx_25030077.scala 9:21]
    .clock(g_gpr_clock),
    .reset(g_gpr_reset),
    .io_rs1_addr(g_gpr_io_rs1_addr),
    .io_rs2_addr(g_gpr_io_rs2_addr),
    .io_rdata_rs1(g_gpr_io_rdata_rs1),
    .io_rdata_rs2(g_gpr_io_rdata_rs2),
    .io_rd_addr(g_gpr_io_rd_addr),
    .io_rd_data(g_gpr_io_rd_data),
    .io_rd_valid(g_gpr_io_rd_valid)
  );
  ysyx_25030077_EXU c_exu ( // @[ysyx_25030077.scala 10:21]
    .io_in_ready(c_exu_io_in_ready),
    .io_in_valid(c_exu_io_in_valid),
    .io_in_bits_exu_type(c_exu_io_in_bits_exu_type),
    .io_in_bits_data_type(c_exu_io_in_bits_data_type),
    .io_in_bits_pc_next_type(c_exu_io_in_bits_pc_next_type),
    .io_in_bits_rd_addr(c_exu_io_in_bits_rd_addr),
    .io_in_bits_LSU_type(c_exu_io_in_bits_LSU_type),
    .io_in_bits_rs1_data(c_exu_io_in_bits_rs1_data),
    .io_in_bits_rs2_data(c_exu_io_in_bits_rs2_data),
    .io_in_bits_imm_data(c_exu_io_in_bits_imm_data),
    .io_in_bits_pc_data(c_exu_io_in_bits_pc_data),
    .io_out_ready(c_exu_io_out_ready),
    .io_out_valid(c_exu_io_out_valid),
    .io_out_bits_result(c_exu_io_out_bits_result),
    .io_out_bits_rd_addr(c_exu_io_out_bits_rd_addr),
    .io_out_bits_LSU_type(c_exu_io_out_bits_LSU_type),
    .io_out_bits_rs2_data(c_exu_io_out_bits_rs2_data),
    .io_pc_next(c_exu_io_pc_next)
  );
  ysyx_25030077_LSU d_lsu ( // @[ysyx_25030077.scala 11:21]
    .io_in_ready(d_lsu_io_in_ready),
    .io_in_valid(d_lsu_io_in_valid),
    .io_in_bits_result(d_lsu_io_in_bits_result),
    .io_in_bits_rd_addr(d_lsu_io_in_bits_rd_addr),
    .io_in_bits_LSU_type(d_lsu_io_in_bits_LSU_type),
    .io_in_bits_rs2_data(d_lsu_io_in_bits_rs2_data),
    .io_out_ready(d_lsu_io_out_ready),
    .io_out_valid(d_lsu_io_out_valid),
    .io_out_bits_rd_addr(d_lsu_io_out_bits_rd_addr),
    .io_out_bits_rd_data(d_lsu_io_out_bits_rd_data)
  );
  ysyx_25030077_WBU e_wbu ( // @[ysyx_25030077.scala 12:21]
    .io_in_ready(e_wbu_io_in_ready),
    .io_in_valid(e_wbu_io_in_valid),
    .io_in_bits_rd_addr(e_wbu_io_in_bits_rd_addr),
    .io_in_bits_rd_data(e_wbu_io_in_bits_rd_data),
    .io_rd_addr(e_wbu_io_rd_addr),
    .io_rd_data(e_wbu_io_rd_data),
    .io_rd_valid(e_wbu_io_rd_valid),
    .io_out_ready(e_wbu_io_out_ready),
    .io_out_valid(e_wbu_io_out_valid)
  );
  assign a_ifu_clock = clock;
  assign a_ifu_reset = reset;
  assign a_ifu_io_out_ready = b_idu_io_in_ready; // @[ChiselHelpers.scala.scala 23:19]
  assign b_idu_clock = clock;
  assign b_idu_reset = reset;
  assign b_idu_io_in_valid = validReg; // @[ChiselHelpers.scala.scala 29:18]
  assign b_idu_io_in_bits_pc = b_idu_io_in_bits_r_pc; // @[ChiselHelpers.scala.scala 31:17]
  assign b_idu_io_in_bits_inst = b_idu_io_in_bits_r_inst; // @[ChiselHelpers.scala.scala 31:17]
  assign b_idu_io_out_ready = c_exu_io_in_ready; // @[ChiselHelpers.scala.scala 23:19]
  assign b_idu_io_rs1_data = g_gpr_io_rdata_rs1; // @[ysyx_25030077.scala 39:21]
  assign b_idu_io_rs2_data = g_gpr_io_rdata_rs2; // @[ysyx_25030077.scala 40:21]
  assign b_idu_io_EXU_rd = c_exu_io_out_bits_rd_addr; // @[ysyx_25030077.scala 41:21]
  assign b_idu_io_LSU_rd = d_lsu_io_out_bits_rd_addr; // @[ysyx_25030077.scala 42:21]
  assign b_idu_io_WBU_rd = e_wbu_io_rd_addr; // @[ysyx_25030077.scala 43:21]
  assign g_gpr_clock = clock;
  assign g_gpr_reset = reset;
  assign g_gpr_io_rs1_addr = b_idu_io_rs1_addr; // @[ysyx_25030077.scala 45:21]
  assign g_gpr_io_rs2_addr = b_idu_io_rs2_addr; // @[ysyx_25030077.scala 46:21]
  assign g_gpr_io_rd_addr = e_wbu_io_rd_addr; // @[ysyx_25030077.scala 48:21]
  assign g_gpr_io_rd_data = e_wbu_io_rd_data; // @[ysyx_25030077.scala 49:21]
  assign g_gpr_io_rd_valid = e_wbu_io_rd_valid; // @[ysyx_25030077.scala 50:21]
  assign c_exu_io_in_valid = validReg_1; // @[ChiselHelpers.scala.scala 29:18]
  assign c_exu_io_in_bits_exu_type = c_exu_io_in_bits_r_exu_type; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_in_bits_data_type = c_exu_io_in_bits_r_data_type; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_in_bits_pc_next_type = c_exu_io_in_bits_r_pc_next_type; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_in_bits_rd_addr = c_exu_io_in_bits_r_rd_addr; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_in_bits_LSU_type = c_exu_io_in_bits_r_LSU_type; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_in_bits_rs1_data = c_exu_io_in_bits_r_rs1_data; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_in_bits_rs2_data = c_exu_io_in_bits_r_rs2_data; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_in_bits_imm_data = c_exu_io_in_bits_r_imm_data; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_in_bits_pc_data = c_exu_io_in_bits_r_pc_data; // @[ChiselHelpers.scala.scala 31:17]
  assign c_exu_io_out_ready = d_lsu_io_in_ready; // @[ChiselHelpers.scala.scala 23:19]
  assign d_lsu_io_in_valid = validReg_2; // @[ChiselHelpers.scala.scala 29:18]
  assign d_lsu_io_in_bits_result = d_lsu_io_in_bits_r_result; // @[ChiselHelpers.scala.scala 31:17]
  assign d_lsu_io_in_bits_rd_addr = d_lsu_io_in_bits_r_rd_addr; // @[ChiselHelpers.scala.scala 31:17]
  assign d_lsu_io_in_bits_LSU_type = d_lsu_io_in_bits_r_LSU_type; // @[ChiselHelpers.scala.scala 31:17]
  assign d_lsu_io_in_bits_rs2_data = d_lsu_io_in_bits_r_rs2_data; // @[ChiselHelpers.scala.scala 31:17]
  assign d_lsu_io_out_ready = e_wbu_io_in_ready; // @[ChiselHelpers.scala.scala 23:19]
  assign e_wbu_io_in_valid = validReg_3; // @[ChiselHelpers.scala.scala 29:18]
  assign e_wbu_io_in_bits_rd_addr = e_wbu_io_in_bits_r_rd_addr; // @[ChiselHelpers.scala.scala 31:17]
  assign e_wbu_io_in_bits_rd_data = e_wbu_io_in_bits_r_rd_data; // @[ChiselHelpers.scala.scala 31:17]
  assign e_wbu_io_out_ready = 1'h1; // @[ysyx_25030077.scala 52:22]
  always @(posedge clock) begin
    if (reset) begin // @[ChiselHelpers.scala.scala 25:27]
      validReg <= 1'h0; // @[ChiselHelpers.scala.scala 25:27]
    end else if (b_idu_io_in_ready) begin // @[ChiselHelpers.scala.scala 26:25]
      validReg <= a_ifu_io_out_valid; // @[ChiselHelpers.scala.scala 27:16]
    end
    if (_b_idu_io_in_bits_T) begin // @[Reg.scala 17:18]
      b_idu_io_in_bits_r_pc <= a_ifu_io_out_bits_pc; // @[Reg.scala 17:22]
    end
    if (_b_idu_io_in_bits_T) begin // @[Reg.scala 17:18]
      b_idu_io_in_bits_r_inst <= a_ifu_io_out_bits_inst; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[ChiselHelpers.scala.scala 25:27]
      validReg_1 <= 1'h0; // @[ChiselHelpers.scala.scala 25:27]
    end else if (c_exu_io_in_ready) begin // @[ChiselHelpers.scala.scala 26:25]
      validReg_1 <= b_idu_io_out_valid; // @[ChiselHelpers.scala.scala 27:16]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_exu_type <= b_idu_io_out_bits_exu_type; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_data_type <= b_idu_io_out_bits_data_type; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_pc_next_type <= b_idu_io_out_bits_pc_next_type; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_rd_addr <= b_idu_io_out_bits_rd_addr; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_LSU_type <= b_idu_io_out_bits_LSU_type; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_rs1_data <= b_idu_io_out_bits_rs1_data; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_rs2_data <= b_idu_io_out_bits_rs2_data; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_imm_data <= b_idu_io_out_bits_imm_data; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_pc_data <= b_idu_io_out_bits_pc_data; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[ChiselHelpers.scala.scala 25:27]
      validReg_2 <= 1'h0; // @[ChiselHelpers.scala.scala 25:27]
    end else if (d_lsu_io_in_ready) begin // @[ChiselHelpers.scala.scala 26:25]
      validReg_2 <= c_exu_io_out_valid; // @[ChiselHelpers.scala.scala 27:16]
    end
    if (_d_lsu_io_in_bits_T) begin // @[Reg.scala 17:18]
      d_lsu_io_in_bits_r_result <= c_exu_io_out_bits_result; // @[Reg.scala 17:22]
    end
    if (_d_lsu_io_in_bits_T) begin // @[Reg.scala 17:18]
      d_lsu_io_in_bits_r_rd_addr <= c_exu_io_out_bits_rd_addr; // @[Reg.scala 17:22]
    end
    if (_d_lsu_io_in_bits_T) begin // @[Reg.scala 17:18]
      d_lsu_io_in_bits_r_LSU_type <= c_exu_io_out_bits_LSU_type; // @[Reg.scala 17:22]
    end
    if (_d_lsu_io_in_bits_T) begin // @[Reg.scala 17:18]
      d_lsu_io_in_bits_r_rs2_data <= c_exu_io_out_bits_rs2_data; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[ChiselHelpers.scala.scala 25:27]
      validReg_3 <= 1'h0; // @[ChiselHelpers.scala.scala 25:27]
    end else if (e_wbu_io_in_ready) begin // @[ChiselHelpers.scala.scala 26:25]
      validReg_3 <= d_lsu_io_out_valid; // @[ChiselHelpers.scala.scala 27:16]
    end
    if (_e_wbu_io_in_bits_T) begin // @[Reg.scala 17:18]
      e_wbu_io_in_bits_r_rd_addr <= d_lsu_io_out_bits_rd_addr; // @[Reg.scala 17:22]
    end
    if (_e_wbu_io_in_bits_T) begin // @[Reg.scala 17:18]
      e_wbu_io_in_bits_r_rd_data <= d_lsu_io_out_bits_rd_data; // @[Reg.scala 17:22]
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
  validReg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  b_idu_io_in_bits_r_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  b_idu_io_in_bits_r_inst = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  validReg_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  c_exu_io_in_bits_r_exu_type = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  c_exu_io_in_bits_r_data_type = _RAND_5[3:0];
  _RAND_6 = {1{`RANDOM}};
  c_exu_io_in_bits_r_pc_next_type = _RAND_6[3:0];
  _RAND_7 = {1{`RANDOM}};
  c_exu_io_in_bits_r_rd_addr = _RAND_7[4:0];
  _RAND_8 = {1{`RANDOM}};
  c_exu_io_in_bits_r_LSU_type = _RAND_8[3:0];
  _RAND_9 = {1{`RANDOM}};
  c_exu_io_in_bits_r_rs1_data = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  c_exu_io_in_bits_r_rs2_data = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  c_exu_io_in_bits_r_imm_data = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  c_exu_io_in_bits_r_pc_data = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  validReg_2 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_result = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_rd_addr = _RAND_15[4:0];
  _RAND_16 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_LSU_type = _RAND_16[3:0];
  _RAND_17 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_rs2_data = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  validReg_3 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  e_wbu_io_in_bits_r_rd_addr = _RAND_19[4:0];
  _RAND_20 = {1{`RANDOM}};
  e_wbu_io_in_bits_r_rd_data = _RAND_20[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
