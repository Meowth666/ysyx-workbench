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
  output        io_r_ready,
  input         io_b_valid,
  output        io_b_ready,
  output        io_aw_valid,
  output [31:0] io_aw_addr,
  input         io_aw_ready,
  output        io_w_valid,
  output [31:0] io_w_data,
  input         io_w_ready
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
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state_reg; // @[ysyx_25030077_IFU.scala 34:28]
  reg [31:0] rdata_reg; // @[ysyx_25030077_IFU.scala 35:28]
  reg  ar_valid_reg; // @[ysyx_25030077_IFU.scala 36:31]
  reg [31:0] ar_addr_reg; // @[ysyx_25030077_IFU.scala 37:31]
  wire [2:0] index = io_pc[4:2]; // @[ysyx_25030077_IFU.scala 38:22]
  reg [2:0] j; // @[ysyx_25030077_IFU.scala 39:20]
  reg [2:0] k; // @[ysyx_25030077_IFU.scala 40:20]
  reg [2:0] temp; // @[ysyx_25030077_IFU.scala 41:23]
  reg  is_full; // @[ysyx_25030077_IFU.scala 42:26]
  wire [6:0] _serach_addr_T = {index,4'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_0 = {{25'd0}, _serach_addr_T}; // @[ysyx_25030077_IFU.scala 43:42]
  wire [31:0] _serach_addr_T_2 = 32'hf001600 + _GEN_0; // @[ysyx_25030077_IFU.scala 43:42]
  wire [2:0] _serach_addr_T_4 = j + 3'h1; // @[ysyx_25030077_IFU.scala 43:74]
  wire [4:0] _serach_addr_T_5 = {_serach_addr_T_4,2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_1 = {{27'd0}, _serach_addr_T_5}; // @[ysyx_25030077_IFU.scala 43:65]
  wire [31:0] serach_addr = _serach_addr_T_2 + _GEN_1; // @[ysyx_25030077_IFU.scala 43:65]
  wire  is_tag = io_r_data[27:1] == io_pc[31:5] & io_r_data[0]; // @[ysyx_25030077_IFU.scala 44:53]
  wire  is_notvalid = ~io_r_data[0]; // @[ysyx_25030077_IFU.scala 45:39]
  wire [31:0] _tag_addr_T_2 = 32'hf001680 + _GEN_0; // @[ysyx_25030077_IFU.scala 46:39]
  wire [3:0] _tag_addr_T_4 = {j[1:0],2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_3 = {{28'd0}, _tag_addr_T_4}; // @[ysyx_25030077_IFU.scala 46:62]
  wire [31:0] tag_addr = _tag_addr_T_2 + _GEN_3; // @[ysyx_25030077_IFU.scala 46:62]
  wire [3:0] _inst_addr_T_1 = {k[1:0],2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_4 = {{28'd0}, _inst_addr_T_1}; // @[ysyx_25030077_IFU.scala 47:27]
  wire [31:0] inst_addr = io_pc + _GEN_4; // @[ysyx_25030077_IFU.scala 47:27]
  reg [31:0] data0; // @[ysyx_25030077_IFU.scala 48:24]
  reg [31:0] data1; // @[ysyx_25030077_IFU.scala 49:24]
  reg [31:0] data2; // @[ysyx_25030077_IFU.scala 50:24]
  reg [31:0] data3; // @[ysyx_25030077_IFU.scala 51:24]
  wire  _state_reg_T = state_reg == 3'h0; // @[ysyx_25030077_IFU.scala 54:20]
  wire  _state_reg_T_2 = io_pc[31:28] == 4'ha; // @[ysyx_25030077_IFU.scala 54:50]
  wire  _state_reg_T_4 = state_reg == 3'h1; // @[ysyx_25030077_IFU.scala 55:20]
  wire  _state_reg_T_5 = j == 3'h3; // @[ysyx_25030077_IFU.scala 55:72]
  wire  _state_reg_T_6 = j == 3'h3 | is_notvalid; // @[ysyx_25030077_IFU.scala 55:80]
  wire [1:0] _state_reg_T_7 = j == 3'h3 | is_notvalid ? 2'h3 : 2'h1; // @[ysyx_25030077_IFU.scala 55:68]
  wire [1:0] _state_reg_T_8 = is_tag ? 2'h2 : _state_reg_T_7; // @[ysyx_25030077_IFU.scala 55:51]
  wire [1:0] _state_reg_T_9 = io_r_valid ? _state_reg_T_8 : 2'h1; // @[ysyx_25030077_IFU.scala 55:35]
  wire  _state_reg_T_10 = state_reg == 3'h2; // @[ysyx_25030077_IFU.scala 56:20]
  wire [2:0] _state_reg_T_11 = io_r_valid ? 3'h6 : 3'h2; // @[ysyx_25030077_IFU.scala 56:35]
  wire  _state_reg_T_12 = state_reg == 3'h6; // @[ysyx_25030077_IFU.scala 57:20]
  wire [2:0] _state_reg_T_13 = io_out_ready ? 3'h0 : 3'h6; // @[ysyx_25030077_IFU.scala 57:35]
  wire  _state_reg_T_14 = state_reg == 3'h3; // @[ysyx_25030077_IFU.scala 58:20]
  wire  _state_reg_T_15 = k == 3'h3; // @[ysyx_25030077_IFU.scala 58:54]
  wire [2:0] _state_reg_T_16 = k == 3'h3 ? 3'h4 : 3'h3; // @[ysyx_25030077_IFU.scala 58:51]
  wire [2:0] _state_reg_T_17 = io_r_valid ? _state_reg_T_16 : 3'h3; // @[ysyx_25030077_IFU.scala 58:35]
  wire  _state_reg_T_18 = state_reg == 3'h4; // @[ysyx_25030077_IFU.scala 59:20]
  wire [2:0] _state_reg_T_19 = io_b_valid ? 3'h5 : 3'h4; // @[ysyx_25030077_IFU.scala 59:35]
  wire  _state_reg_T_20 = state_reg == 3'h5; // @[ysyx_25030077_IFU.scala 60:20]
  wire  _state_reg_T_21 = k == 3'h4; // @[ysyx_25030077_IFU.scala 60:54]
  wire [2:0] _state_reg_T_22 = k == 3'h4 ? 3'h6 : 3'h4; // @[ysyx_25030077_IFU.scala 60:51]
  wire [2:0] _state_reg_T_23 = io_b_valid ? _state_reg_T_22 : 3'h5; // @[ysyx_25030077_IFU.scala 60:35]
  wire  _state_reg_T_24 = state_reg == 3'h7; // @[ysyx_25030077_IFU.scala 61:20]
  wire [2:0] _state_reg_T_25 = io_r_valid ? 3'h6 : 3'h7; // @[ysyx_25030077_IFU.scala 61:35]
  wire [2:0] _state_reg_T_26 = _state_reg_T_24 ? _state_reg_T_25 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_27 = _state_reg_T_20 ? _state_reg_T_23 : _state_reg_T_26; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_28 = _state_reg_T_18 ? _state_reg_T_19 : _state_reg_T_27; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_29 = _state_reg_T_14 ? _state_reg_T_17 : _state_reg_T_28; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_30 = _state_reg_T_12 ? _state_reg_T_13 : _state_reg_T_29; // @[Mux.scala 101:16]
  wire [2:0] _k_T_4 = k + 3'h1; // @[ysyx_25030077_IFU.scala 70:70]
  wire [2:0] _k_T_5 = _state_reg_T_15 ? 3'h0 : _k_T_4; // @[ysyx_25030077_IFU.scala 70:51]
  wire [2:0] _k_T_10 = io_b_valid ? _k_T_4 : k; // @[ysyx_25030077_IFU.scala 71:35]
  wire  _data0_T_1 = _state_reg_T_14 & io_r_valid; // @[ysyx_25030077_IFU.scala 74:37]
  wire  _data0_T_2 = k == 3'h0; // @[ysyx_25030077_IFU.scala 74:56]
  wire  _data1_T_2 = k == 3'h1; // @[ysyx_25030077_IFU.scala 75:56]
  wire  _data2_T_2 = k == 3'h2; // @[ysyx_25030077_IFU.scala 76:56]
  wire [2:0] temp1 = temp + 3'h1; // @[ysyx_25030077_IFU.scala 79:22]
  wire [2:0] _temp_T_6 = {1'h0,temp1[1:0]}; // @[Cat.scala 31:58]
  wire  _ar_valid_reg_T_2 = io_ar_ready ? 1'h0 : 1'h1; // @[ysyx_25030077_IFU.scala 84:53]
  wire  _ar_valid_reg_T_4 = ar_valid_reg ? _ar_valid_reg_T_2 : io_r_valid; // @[ysyx_25030077_IFU.scala 84:35]
  wire  _ar_valid_reg_T_9 = _state_reg_T_10 | _state_reg_T_14 | _state_reg_T_24; // @[ysyx_25030077_IFU.scala 85:49]
  wire  _ar_valid_reg_T_11 = ar_valid_reg & io_ar_ready ? 1'h0 : ar_valid_reg; // @[ysyx_25030077_IFU.scala 85:77]
  wire  _ar_valid_reg_T_13 = _state_reg_T_4 ? _ar_valid_reg_T_4 : _ar_valid_reg_T_9 & _ar_valid_reg_T_11; // @[Mux.scala 101:16]
  wire  _ar_valid_reg_T_14 = _state_reg_T | _ar_valid_reg_T_13; // @[Mux.scala 101:16]
  wire [31:0] _ar_addr_reg_T_10 = _state_reg_T_6 ? io_pc : serach_addr; // @[ysyx_25030077_IFU.scala 90:73]
  wire [31:0] _ar_addr_reg_T_11 = is_tag ? tag_addr : _ar_addr_reg_T_10; // @[ysyx_25030077_IFU.scala 90:51]
  reg  aw_valid_reg; // @[ysyx_25030077_IFU.scala 101:31]
  wire  _aw_valid_reg_T_2 = io_r_valid & _state_reg_T_15; // @[ysyx_25030077_IFU.scala 103:48]
  wire  _aw_valid_reg_T_5 = io_aw_ready ? 1'h0 : 1'h1; // @[ysyx_25030077_IFU.scala 104:53]
  wire  _aw_valid_reg_T_11 = io_b_valid & k != 3'h4; // @[ysyx_25030077_IFU.scala 105:101]
  wire  _aw_valid_reg_T_13 = aw_valid_reg ? _aw_valid_reg_T_5 : io_b_valid & k != 3'h4; // @[ysyx_25030077_IFU.scala 105:35]
  wire [2:0] w_index = index + k; // @[ysyx_25030077_IFU.scala 107:25]
  wire [2:0] w_index1 = w_index - 3'h1; // @[ysyx_25030077_IFU.scala 108:30]
  wire [6:0] _io_aw_addr_T_2 = {w_index,4'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_6 = {{25'd0}, _io_aw_addr_T_2}; // @[ysyx_25030077_IFU.scala 111:64]
  wire [31:0] _io_aw_addr_T_4 = 32'hf001600 + _GEN_6; // @[ysyx_25030077_IFU.scala 111:64]
  wire [4:0] _io_aw_addr_T_5 = {temp,2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_7 = {{27'd0}, _io_aw_addr_T_5}; // @[ysyx_25030077_IFU.scala 111:94]
  wire [31:0] _io_aw_addr_T_7 = _io_aw_addr_T_4 + _GEN_7; // @[ysyx_25030077_IFU.scala 111:94]
  wire [2:0] _io_aw_addr_T_13 = j - 3'h1; // @[ysyx_25030077_IFU.scala 111:174]
  wire [4:0] _io_aw_addr_T_14 = {_io_aw_addr_T_13,2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_9 = {{27'd0}, _io_aw_addr_T_14}; // @[ysyx_25030077_IFU.scala 111:166]
  wire [31:0] _io_aw_addr_T_16 = _io_aw_addr_T_4 + _GEN_9; // @[ysyx_25030077_IFU.scala 111:166]
  wire [31:0] _io_aw_addr_T_17 = is_full ? _io_aw_addr_T_7 : _io_aw_addr_T_16; // @[ysyx_25030077_IFU.scala 111:35]
  wire [6:0] _io_aw_addr_T_20 = {w_index1,4'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_10 = {{25'd0}, _io_aw_addr_T_20}; // @[ysyx_25030077_IFU.scala 112:64]
  wire [31:0] _io_aw_addr_T_22 = 32'hf001680 + _GEN_10; // @[ysyx_25030077_IFU.scala 112:64]
  wire [31:0] _io_aw_addr_T_25 = _io_aw_addr_T_22 + _GEN_7; // @[ysyx_25030077_IFU.scala 112:95]
  wire [31:0] _io_aw_addr_T_34 = _io_aw_addr_T_22 + _GEN_9; // @[ysyx_25030077_IFU.scala 112:168]
  wire [31:0] _io_aw_addr_T_35 = is_full ? _io_aw_addr_T_25 : _io_aw_addr_T_34; // @[ysyx_25030077_IFU.scala 112:35]
  wire [31:0] _io_aw_addr_T_36 = _state_reg_T_20 ? _io_aw_addr_T_35 : 32'h0; // @[Mux.scala 101:16]
  reg  w_valid_reg; // @[ysyx_25030077_IFU.scala 115:30]
  wire  _w_valid_reg_T_5 = io_w_ready ? 1'h0 : 1'h1; // @[ysyx_25030077_IFU.scala 118:52]
  wire  _w_valid_reg_T_13 = w_valid_reg ? _w_valid_reg_T_5 : _aw_valid_reg_T_11; // @[ysyx_25030077_IFU.scala 119:35]
  wire [31:0] _io_w_data_T_2 = {4'h0,inst_addr[31:5],1'h1}; // @[Cat.scala 31:58]
  wire [31:0] _io_w_data_T_8 = _state_reg_T_21 ? data3 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_9 = _state_reg_T_15 ? data2 : _io_w_data_T_8; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_10 = _data2_T_2 ? data1 : _io_w_data_T_9; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_11 = _data1_T_2 ? data0 : _io_w_data_T_10; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_12 = _state_reg_T_20 ? _io_w_data_T_11 : 32'h0; // @[Mux.scala 101:16]
  assign io_out_valid = state_reg == 3'h6; // @[ysyx_25030077_IFU.scala 130:32]
  assign io_out_bits_pc = io_pc; // @[ysyx_25030077_IFU.scala 131:22]
  assign io_out_bits_inst = rdata_reg; // @[ysyx_25030077_IFU.scala 132:22]
  assign io_out_bits_is_err1 = io_err1_in; // @[ysyx_25030077_IFU.scala 133:25]
  assign io_ar_addr = ar_addr_reg; // @[ysyx_25030077_IFU.scala 93:17]
  assign io_ar_valid = ar_valid_reg; // @[ysyx_25030077_IFU.scala 87:17]
  assign io_ar_burst = {{1'd0}, ar_addr_reg[31:28] == 4'ha}; // @[ysyx_25030077_IFU.scala 94:17]
  assign io_r_ready = 1'h1; // @[ysyx_25030077_IFU.scala 32:16]
  assign io_b_ready = 1'h1; // @[ysyx_25030077_IFU.scala 33:16]
  assign io_aw_valid = aw_valid_reg; // @[ysyx_25030077_IFU.scala 109:17]
  assign io_aw_addr = _state_reg_T_18 ? _io_aw_addr_T_17 : _io_aw_addr_T_36; // @[Mux.scala 101:16]
  assign io_w_valid = w_valid_reg; // @[ysyx_25030077_IFU.scala 121:16]
  assign io_w_data = _state_reg_T_18 ? _io_w_data_T_2 : _io_w_data_T_12; // @[Mux.scala 101:16]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_IFU.scala 34:28]
      state_reg <= 3'h0; // @[ysyx_25030077_IFU.scala 34:28]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (io_pc[31:28] == 4'ha) begin // @[ysyx_25030077_IFU.scala 54:35]
        state_reg <= 3'h1;
      end else begin
        state_reg <= 3'h7;
      end
    end else if (_state_reg_T_4) begin // @[Mux.scala 101:16]
      state_reg <= {{1'd0}, _state_reg_T_9};
    end else if (_state_reg_T_10) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_11;
    end else begin
      state_reg <= _state_reg_T_30;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 35:28]
      rdata_reg <= 32'h0; // @[ysyx_25030077_IFU.scala 35:28]
    end else if ((_state_reg_T_14 & _data0_T_2 | _state_reg_T_10 | _state_reg_T_24) & io_r_valid) begin // @[ysyx_25030077_IFU.scala 99:22]
      rdata_reg <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 36:31]
      ar_valid_reg <= 1'h0; // @[ysyx_25030077_IFU.scala 36:31]
    end else begin
      ar_valid_reg <= _ar_valid_reg_T_14; // @[ysyx_25030077_IFU.scala 82:18]
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 37:31]
      ar_addr_reg <= 32'h0; // @[ysyx_25030077_IFU.scala 37:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (_state_reg_T_2) begin // @[ysyx_25030077_IFU.scala 89:35]
        ar_addr_reg <= _serach_addr_T_2;
      end else begin
        ar_addr_reg <= io_pc;
      end
    end else if (_state_reg_T_4) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 90:35]
        ar_addr_reg <= _ar_addr_reg_T_11;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 39:20]
      j <= 3'h0; // @[ysyx_25030077_IFU.scala 39:20]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      j <= 3'h0;
    end else if (_state_reg_T_4) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 66:35]
        j <= _serach_addr_T_4;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 40:20]
      k <= 3'h0; // @[ysyx_25030077_IFU.scala 40:20]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      k <= 3'h0;
    end else if (_state_reg_T_14) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 70:35]
        k <= _k_T_5;
      end
    end else if (_state_reg_T_18) begin // @[Mux.scala 101:16]
      k <= _k_T_10;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 41:23]
      temp <= 3'h0; // @[ysyx_25030077_IFU.scala 41:23]
    end else if (_state_reg_T_20 & io_w_ready & _state_reg_T_21 & is_full) begin // @[ysyx_25030077_IFU.scala 80:16]
      temp <= _temp_T_6;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 42:26]
      is_full <= 1'h0; // @[ysyx_25030077_IFU.scala 42:26]
    end else if (_state_reg_T_4) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_IFU.scala 97:35]
        is_full <= _state_reg_T_5 & ~is_notvalid;
      end
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 48:24]
      data0 <= 32'h0; // @[ysyx_25030077_IFU.scala 48:24]
    end else if (_state_reg_T_14 & io_r_valid & k == 3'h0) begin // @[ysyx_25030077_IFU.scala 74:17]
      data0 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 49:24]
      data1 <= 32'h0; // @[ysyx_25030077_IFU.scala 49:24]
    end else if (_data0_T_1 & k == 3'h1) begin // @[ysyx_25030077_IFU.scala 75:17]
      data1 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 50:24]
      data2 <= 32'h0; // @[ysyx_25030077_IFU.scala 50:24]
    end else if (_data0_T_1 & k == 3'h2) begin // @[ysyx_25030077_IFU.scala 76:17]
      data2 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 51:24]
      data3 <= 32'h0; // @[ysyx_25030077_IFU.scala 51:24]
    end else if (_data0_T_1 & _state_reg_T_15) begin // @[ysyx_25030077_IFU.scala 77:17]
      data3 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 101:31]
      aw_valid_reg <= 1'h0; // @[ysyx_25030077_IFU.scala 101:31]
    end else if (_state_reg_T_14) begin // @[Mux.scala 101:16]
      aw_valid_reg <= _aw_valid_reg_T_2;
    end else if (_state_reg_T_18) begin // @[Mux.scala 101:16]
      if (aw_valid_reg) begin // @[ysyx_25030077_IFU.scala 104:35]
        aw_valid_reg <= _aw_valid_reg_T_5;
      end else begin
        aw_valid_reg <= io_b_valid;
      end
    end else begin
      aw_valid_reg <= _state_reg_T_20 & _aw_valid_reg_T_13;
    end
    if (reset) begin // @[ysyx_25030077_IFU.scala 115:30]
      w_valid_reg <= 1'h0; // @[ysyx_25030077_IFU.scala 115:30]
    end else if (_state_reg_T_14) begin // @[Mux.scala 101:16]
      w_valid_reg <= _aw_valid_reg_T_2;
    end else if (_state_reg_T_18) begin // @[Mux.scala 101:16]
      if (w_valid_reg) begin // @[ysyx_25030077_IFU.scala 118:35]
        w_valid_reg <= _w_valid_reg_T_5;
      end else begin
        w_valid_reg <= io_b_valid;
      end
    end else begin
      w_valid_reg <= _state_reg_T_20 & _w_valid_reg_T_13;
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
  state_reg = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  rdata_reg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  ar_valid_reg = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  ar_addr_reg = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  j = _RAND_4[2:0];
  _RAND_5 = {1{`RANDOM}};
  k = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  temp = _RAND_6[2:0];
  _RAND_7 = {1{`RANDOM}};
  is_full = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  data0 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  data1 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  data2 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  data3 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  aw_valid_reg = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  w_valid_reg = _RAND_13[0:0];
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
  reg [31:0] _RAND_2;
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
  reg  valid_out_reg; // @[ysyx_25030077_IDU.scala 138:30]
  reg  ready_in_reg; // @[ysyx_25030077_IDU.scala 139:29]
  wire  _ready_in_reg_T = io_in_valid ? 1'h0 : 1'h1; // @[ysyx_25030077_IDU.scala 141:24]
  wire  _ready_in_reg_T_1 = ~ready_in_reg; // @[ysyx_25030077_IDU.scala 142:19]
  wire  _ready_in_reg_T_5 = ~(isRAW1 | isRAW2 | isRAW3); // @[ysyx_25030077_IDU.scala 142:104]
  wire  _ready_in_reg_T_6 = valid_out_reg & io_out_ready & ~(isRAW1 | isRAW2 | isRAW3); // @[ysyx_25030077_IDU.scala 142:71]
  wire  _ready_in_reg_T_9 = ready_in_reg ? _ready_in_reg_T : _ready_in_reg_T_1 & _ready_in_reg_T_6; // @[Mux.scala 101:16]
  reg  valid_in_reg; // @[ysyx_25030077_IDU.scala 144:29]
  wire  _valid_in_reg_T_4 = ~valid_in_reg; // @[ysyx_25030077_IDU.scala 147:19]
  wire  _valid_in_reg_T_5 = io_in_valid & ready_in_reg; // @[ysyx_25030077_IDU.scala 147:51]
  wire  _valid_out_reg_T_1 = ~valid_out_reg; // @[ysyx_25030077_IDU.scala 151:20]
  wire  _valid_out_reg_T_5 = valid_in_reg & _ready_in_reg_T_5; // @[ysyx_25030077_IDU.scala 151:53]
  wire [3:0] _io_out_bits_pc_next_type_T = isbgeu ? 4'h8 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_1 = isbltu ? 4'h7 : _io_out_bits_pc_next_type_T; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_2 = isbge ? 4'h6 : _io_out_bits_pc_next_type_T_1; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_3 = isblt ? 4'h5 : _io_out_bits_pc_next_type_T_2; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_4 = isbne ? 4'h4 : _io_out_bits_pc_next_type_T_3; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_5 = isbeq ? 4'h3 : _io_out_bits_pc_next_type_T_4; // @[Mux.scala 101:16]
  wire [3:0] _io_out_bits_pc_next_type_T_6 = isjalr ? 4'h2 : _io_out_bits_pc_next_type_T_5; // @[Mux.scala 101:16]
  assign io_in_ready = ready_in_reg; // @[ysyx_25030077_IDU.scala 165:15]
  assign io_out_valid = valid_out_reg; // @[ysyx_25030077_IDU.scala 163:16]
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
  assign io_out_bits_is_err2 = io_err2_in; // @[ysyx_25030077_IDU.scala 166:23]
  assign io_rs1_addr = _io_rs1_addr_T_5 ? 5'h0 : io_in_bits_inst[19:15]; // @[Mux.scala 101:16]
  assign io_rs2_addr = _io_rs2_addr_T_4 ? io_in_bits_inst[24:20] : 5'h0; // @[Mux.scala 101:16]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_IDU.scala 138:30]
      valid_out_reg <= 1'h0; // @[ysyx_25030077_IDU.scala 138:30]
    end else if (valid_out_reg) begin // @[Mux.scala 101:16]
      if (io_out_ready) begin // @[ysyx_25030077_IDU.scala 150:25]
        valid_out_reg <= 1'h0;
      end else begin
        valid_out_reg <= 1'h1;
      end
    end else begin
      valid_out_reg <= _valid_out_reg_T_1 & _valid_out_reg_T_5;
    end
    ready_in_reg <= reset | _ready_in_reg_T_9; // @[ysyx_25030077_IDU.scala 139:{29,29} 140:16]
    if (reset) begin // @[ysyx_25030077_IDU.scala 144:29]
      valid_in_reg <= 1'h0; // @[ysyx_25030077_IDU.scala 144:29]
    end else if (valid_in_reg) begin // @[Mux.scala 101:16]
      if (_ready_in_reg_T_5) begin // @[ysyx_25030077_IDU.scala 146:24]
        valid_in_reg <= 1'h0;
      end else begin
        valid_in_reg <= 1'h1;
      end
    end else begin
      valid_in_reg <= _valid_in_reg_T_4 & _valid_in_reg_T_5;
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
  valid_out_reg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  ready_in_reg = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  valid_in_reg = _RAND_2[0:0];
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
  input         clock,
  input         reset,
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
  input         io_in_bits_is_err1,
  input         io_in_bits_is_err2,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_result,
  output [4:0]  io_out_bits_rd_addr,
  output [3:0]  io_out_bits_LSU_type,
  output [31:0] io_out_bits_rs2_data,
  output        io_out_bits_is_err1,
  output        io_out_bits_is_err2,
  output [31:0] io_pc_next,
  output        io_is_err,
  output        io_state
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  _data1_T = io_in_bits_data_type == 4'h2; // @[ysyx_25030077_EXU.scala 14:27]
  wire  _data1_T_1 = io_in_bits_data_type == 4'h4; // @[ysyx_25030077_EXU.scala 15:27]
  wire  _data1_T_2 = io_in_bits_data_type == 4'h5; // @[ysyx_25030077_EXU.scala 16:27]
  wire  _data1_T_3 = io_in_bits_data_type == 4'h6; // @[ysyx_25030077_EXU.scala 17:27]
  wire [31:0] _data1_T_4 = _data1_T_3 ? io_in_bits_pc_data : io_in_bits_rs1_data; // @[Mux.scala 101:16]
  wire [31:0] _data1_T_5 = _data1_T_2 ? io_in_bits_pc_data : _data1_T_4; // @[Mux.scala 101:16]
  wire [31:0] _data1_T_6 = _data1_T_1 ? io_in_bits_pc_data : _data1_T_5; // @[Mux.scala 101:16]
  wire [31:0] data1 = _data1_T ? 32'h0 : _data1_T_6; // @[Mux.scala 101:16]
  wire  _data2_T = io_in_bits_data_type == 4'h3; // @[ysyx_25030077_EXU.scala 20:27]
  wire  _data2_T_3 = io_in_bits_data_type == 4'h7; // @[ysyx_25030077_EXU.scala 23:27]
  wire [31:0] _data2_T_4 = _data2_T_3 ? io_in_bits_rs2_data : io_in_bits_imm_data; // @[Mux.scala 101:16]
  wire [31:0] _data2_T_5 = _data1_T_3 ? 32'h4 : _data2_T_4; // @[Mux.scala 101:16]
  wire [31:0] _data2_T_6 = _data1_T_2 ? 32'h4 : _data2_T_5; // @[Mux.scala 101:16]
  wire [31:0] data2 = _data2_T ? io_in_bits_rs2_data : _data2_T_6; // @[Mux.scala 101:16]
  wire [31:0] pc_est = io_in_bits_pc_data + 32'h4; // @[ysyx_25030077_EXU.scala 25:35]
  wire  _pc_next_T = io_in_bits_pc_next_type == 4'h1; // @[ysyx_25030077_EXU.scala 27:30]
  wire [31:0] _pc_next_T_2 = io_in_bits_pc_data + io_in_bits_imm_data; // @[ysyx_25030077_EXU.scala 27:67]
  wire  _pc_next_T_3 = io_in_bits_pc_next_type == 4'h2; // @[ysyx_25030077_EXU.scala 28:30]
  wire [31:0] _pc_next_T_5 = io_in_bits_imm_data + io_in_bits_rs1_data; // @[ysyx_25030077_EXU.scala 28:69]
  wire [31:0] _pc_next_T_8 = _pc_next_T_5 & 32'hfffffffe; // @[ysyx_25030077_EXU.scala 28:92]
  wire  _pc_next_T_9 = io_in_bits_pc_next_type == 4'h3; // @[ysyx_25030077_EXU.scala 29:30]
  wire [31:0] _pc_next_T_13 = data1 == data2 ? _pc_next_T_2 : pc_est; // @[ysyx_25030077_EXU.scala 29:50]
  wire  _pc_next_T_14 = io_in_bits_pc_next_type == 4'h4; // @[ysyx_25030077_EXU.scala 30:30]
  wire [31:0] _pc_next_T_18 = data1 != data2 ? _pc_next_T_2 : pc_est; // @[ysyx_25030077_EXU.scala 30:50]
  wire  _pc_next_T_19 = io_in_bits_pc_next_type == 4'h5; // @[ysyx_25030077_EXU.scala 31:30]
  wire [31:0] _pc_next_T_20 = _data1_T ? 32'h0 : _data1_T_6; // @[ysyx_25030077_EXU.scala 31:57]
  wire [31:0] _pc_next_T_21 = _data2_T ? io_in_bits_rs2_data : _data2_T_6; // @[ysyx_25030077_EXU.scala 31:72]
  wire  _pc_next_T_22 = $signed(_pc_next_T_20) < $signed(_pc_next_T_21); // @[ysyx_25030077_EXU.scala 31:64]
  wire [31:0] _pc_next_T_25 = $signed(_pc_next_T_20) < $signed(_pc_next_T_21) ? _pc_next_T_2 : pc_est; // @[ysyx_25030077_EXU.scala 31:50]
  wire  _pc_next_T_26 = io_in_bits_pc_next_type == 4'h6; // @[ysyx_25030077_EXU.scala 32:30]
  wire [31:0] _pc_next_T_32 = $signed(_pc_next_T_20) >= $signed(_pc_next_T_21) ? _pc_next_T_2 : pc_est; // @[ysyx_25030077_EXU.scala 32:50]
  wire  _pc_next_T_33 = io_in_bits_pc_next_type == 4'h7; // @[ysyx_25030077_EXU.scala 33:30]
  wire  _pc_next_T_34 = data1 < data2; // @[ysyx_25030077_EXU.scala 33:57]
  wire [31:0] _pc_next_T_37 = data1 < data2 ? _pc_next_T_2 : pc_est; // @[ysyx_25030077_EXU.scala 33:50]
  wire  _pc_next_T_38 = io_in_bits_pc_next_type == 4'h8; // @[ysyx_25030077_EXU.scala 34:30]
  wire [31:0] _pc_next_T_42 = data1 >= data2 ? _pc_next_T_2 : pc_est; // @[ysyx_25030077_EXU.scala 34:50]
  wire [31:0] _pc_next_T_43 = _pc_next_T_38 ? _pc_next_T_42 : pc_est; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_44 = _pc_next_T_33 ? _pc_next_T_37 : _pc_next_T_43; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_45 = _pc_next_T_26 ? _pc_next_T_32 : _pc_next_T_44; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_46 = _pc_next_T_19 ? _pc_next_T_25 : _pc_next_T_45; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_47 = _pc_next_T_14 ? _pc_next_T_18 : _pc_next_T_46; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_48 = _pc_next_T_9 ? _pc_next_T_13 : _pc_next_T_47; // @[Mux.scala 101:16]
  wire [31:0] _pc_next_T_49 = _pc_next_T_3 ? _pc_next_T_8 : _pc_next_T_48; // @[Mux.scala 101:16]
  wire [31:0] pc_next = _pc_next_T ? _pc_next_T_2 : _pc_next_T_49; // @[Mux.scala 101:16]
  wire [32:0] _out33_T = data1 + data2; // @[ysyx_25030077_EXU.scala 36:30]
  wire  _out33_T_1 = io_in_bits_exu_type == 4'h1; // @[ysyx_25030077_EXU.scala 37:26]
  wire [31:0] _out33_T_2 = data1 ^ data2; // @[ysyx_25030077_EXU.scala 37:64]
  wire [32:0] _out33_T_3 = {1'h0,_out33_T_2}; // @[Cat.scala 31:58]
  wire  _out33_T_4 = io_in_bits_exu_type == 4'h2; // @[ysyx_25030077_EXU.scala 38:26]
  wire [31:0] _out33_T_5 = data1 | data2; // @[ysyx_25030077_EXU.scala 38:64]
  wire [32:0] _out33_T_6 = {1'h0,_out33_T_5}; // @[Cat.scala 31:58]
  wire  _out33_T_7 = io_in_bits_exu_type == 4'h3; // @[ysyx_25030077_EXU.scala 39:26]
  wire [31:0] _out33_T_8 = data1 & data2; // @[ysyx_25030077_EXU.scala 39:64]
  wire [32:0] _out33_T_9 = {1'h0,_out33_T_8}; // @[Cat.scala 31:58]
  wire  _out33_T_10 = io_in_bits_exu_type == 4'h4; // @[ysyx_25030077_EXU.scala 40:26]
  wire [62:0] _GEN_0 = {{31'd0}, data1}; // @[ysyx_25030077_EXU.scala 40:64]
  wire [62:0] _out33_T_12 = _GEN_0 << data2[4:0]; // @[ysyx_25030077_EXU.scala 40:64]
  wire [63:0] _out33_T_13 = {1'h0,_out33_T_12}; // @[Cat.scala 31:58]
  wire  _out33_T_14 = io_in_bits_exu_type == 4'h5; // @[ysyx_25030077_EXU.scala 41:26]
  wire [31:0] _out33_T_16 = data1 >> data2[4:0]; // @[ysyx_25030077_EXU.scala 41:64]
  wire [32:0] _out33_T_17 = {1'h0,_out33_T_16}; // @[Cat.scala 31:58]
  wire  _out33_T_18 = io_in_bits_exu_type == 4'h6; // @[ysyx_25030077_EXU.scala 42:26]
  wire [31:0] out33_lo = $signed(_pc_next_T_20) >>> data2[4:0]; // @[Cat.scala 31:58]
  wire [32:0] _out33_T_22 = {1'h0,out33_lo}; // @[Cat.scala 31:58]
  wire  _out33_T_23 = io_in_bits_exu_type == 4'h7; // @[ysyx_25030077_EXU.scala 43:26]
  wire [32:0] _out33_T_27 = {32'h0,_pc_next_T_22}; // @[Cat.scala 31:58]
  wire  _out33_T_28 = io_in_bits_exu_type == 4'h8; // @[ysyx_25030077_EXU.scala 44:26]
  wire [32:0] _out33_T_30 = {32'h0,_pc_next_T_34}; // @[Cat.scala 31:58]
  wire  _out33_T_31 = io_in_bits_exu_type == 4'h9; // @[ysyx_25030077_EXU.scala 45:26]
  wire [32:0] _out33_T_32 = data1 - data2; // @[ysyx_25030077_EXU.scala 45:50]
  wire [32:0] _out33_T_34 = _out33_T_31 ? _out33_T_32 : _out33_T; // @[Mux.scala 101:16]
  wire [32:0] _out33_T_35 = _out33_T_28 ? _out33_T_30 : _out33_T_34; // @[Mux.scala 101:16]
  wire [32:0] _out33_T_36 = _out33_T_23 ? _out33_T_27 : _out33_T_35; // @[Mux.scala 101:16]
  wire [32:0] _out33_T_37 = _out33_T_18 ? _out33_T_22 : _out33_T_36; // @[Mux.scala 101:16]
  wire [32:0] _out33_T_38 = _out33_T_14 ? _out33_T_17 : _out33_T_37; // @[Mux.scala 101:16]
  wire [63:0] _out33_T_39 = _out33_T_10 ? _out33_T_13 : {{31'd0}, _out33_T_38}; // @[Mux.scala 101:16]
  wire [63:0] _out33_T_40 = _out33_T_7 ? {{31'd0}, _out33_T_9} : _out33_T_39; // @[Mux.scala 101:16]
  wire [63:0] _out33_T_41 = _out33_T_4 ? {{31'd0}, _out33_T_6} : _out33_T_40; // @[Mux.scala 101:16]
  wire [63:0] out33 = _out33_T_1 ? {{31'd0}, _out33_T_3} : _out33_T_41; // @[Mux.scala 101:16]
  reg  valid_out_reg; // @[ysyx_25030077_EXU.scala 47:30]
  wire  _valid_out_reg_T_1 = ~valid_out_reg; // @[ysyx_25030077_EXU.scala 50:20]
  reg  ready_in_reg; // @[ysyx_25030077_EXU.scala 52:29]
  wire  _ready_in_reg_T = io_in_valid ? 1'h0 : 1'h1; // @[ysyx_25030077_EXU.scala 54:24]
  wire  _ready_in_reg_T_1 = ~ready_in_reg; // @[ysyx_25030077_EXU.scala 55:19]
  wire  _ready_in_reg_T_2 = valid_out_reg & io_out_ready; // @[ysyx_25030077_EXU.scala 55:53]
  wire  _ready_in_reg_T_5 = ready_in_reg ? _ready_in_reg_T : _ready_in_reg_T_1 & _ready_in_reg_T_2; // @[Mux.scala 101:16]
  wire  is_err_in = ~(io_in_bits_is_err1 | io_in_bits_is_err2); // @[ysyx_25030077_EXU.scala 65:19]
  reg  is_err0_dly; // @[ysyx_25030077_EXU.scala 67:28]
  wire  is_err0 = pc_est != pc_next & is_err_in; // @[ysyx_25030077_EXU.scala 68:38]
  reg  state_reg; // @[ysyx_25030077_EXU.scala 71:26]
  wire  _state_reg_T_2 = ~state_reg; // @[ysyx_25030077_EXU.scala 74:16]
  wire  _state_reg_T_3 = io_in_valid & io_in_ready; // @[ysyx_25030077_EXU.scala 74:48]
  assign io_in_ready = ready_in_reg; // @[ysyx_25030077_EXU.scala 58:15]
  assign io_out_valid = valid_out_reg; // @[ysyx_25030077_EXU.scala 57:16]
  assign io_out_bits_result = out33[31:0]; // @[ysyx_25030077_EXU.scala 59:30]
  assign io_out_bits_rd_addr = io_in_bits_rd_addr; // @[ysyx_25030077_EXU.scala 60:23]
  assign io_out_bits_LSU_type = io_in_bits_LSU_type; // @[ysyx_25030077_EXU.scala 61:24]
  assign io_out_bits_rs2_data = io_in_bits_rs2_data; // @[ysyx_25030077_EXU.scala 62:24]
  assign io_out_bits_is_err1 = io_in_bits_is_err1; // @[ysyx_25030077_EXU.scala 63:23]
  assign io_out_bits_is_err2 = io_in_bits_is_err2; // @[ysyx_25030077_EXU.scala 64:23]
  assign io_pc_next = _pc_next_T ? _pc_next_T_2 : _pc_next_T_49; // @[Mux.scala 101:16]
  assign io_is_err = is_err0 & ~is_err0_dly; // @[ysyx_25030077_EXU.scala 70:24]
  assign io_state = state_reg & is_err_in; // @[ysyx_25030077_EXU.scala 76:25]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_EXU.scala 47:30]
      valid_out_reg <= 1'h0; // @[ysyx_25030077_EXU.scala 47:30]
    end else if (valid_out_reg) begin // @[Mux.scala 101:16]
      if (io_out_ready) begin // @[ysyx_25030077_EXU.scala 49:25]
        valid_out_reg <= 1'h0;
      end else begin
        valid_out_reg <= 1'h1;
      end
    end else begin
      valid_out_reg <= _valid_out_reg_T_1 & io_in_valid;
    end
    ready_in_reg <= reset | _ready_in_reg_T_5; // @[ysyx_25030077_EXU.scala 52:{29,29} 53:16]
    if (reset) begin // @[ysyx_25030077_EXU.scala 67:28]
      is_err0_dly <= 1'h0; // @[ysyx_25030077_EXU.scala 67:28]
    end else begin
      is_err0_dly <= is_err0; // @[ysyx_25030077_EXU.scala 69:15]
    end
    if (reset) begin // @[ysyx_25030077_EXU.scala 71:26]
      state_reg <= 1'h0; // @[ysyx_25030077_EXU.scala 71:26]
    end else if (state_reg) begin // @[Mux.scala 101:16]
      if (io_out_valid & io_out_ready) begin // @[ysyx_25030077_EXU.scala 73:21]
        state_reg <= 1'h0;
      end else begin
        state_reg <= 1'h1;
      end
    end else begin
      state_reg <= _state_reg_T_2 & _state_reg_T_3;
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
  valid_out_reg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  ready_in_reg = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  is_err0_dly = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  state_reg = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077_LSU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_result,
  input  [4:0]  io_in_bits_rd_addr,
  input  [3:0]  io_in_bits_LSU_type,
  input  [31:0] io_in_bits_rs2_data,
  input         io_in_bits_is_err1,
  input         io_in_bits_is_err2,
  input         io_out_ready,
  output        io_out_valid,
  output [4:0]  io_out_bits_rd_addr,
  output [31:0] io_out_bits_rd_data,
  output        io_out_bits_is_err1,
  output        io_out_bits_is_err2,
  output        io_state,
  output [31:0] io_ar_addr,
  input         io_ar_ready,
  output        io_ar_valid,
  input         io_r_valid,
  input  [31:0] io_r_data,
  output        io_r_ready,
  input         io_b_valid,
  output        io_b_ready,
  output        io_aw_valid,
  output [31:0] io_aw_addr,
  input         io_aw_ready,
  output        io_w_valid,
  output [31:0] io_w_data,
  input         io_w_ready,
  output [3:0]  io_rw_type
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
`endif // RANDOMIZE_REG_INIT
  reg  valid_out_reg; // @[ysyx_25030077_LSU.scala 31:30]
  reg [1:0] lsu_state; // @[ysyx_25030077_LSU.scala 32:26]
  reg  ready_in_reg; // @[ysyx_25030077_LSU.scala 33:29]
  reg [31:0] data_out_reg; // @[ysyx_25030077_LSU.scala 34:29]
  reg [4:0] addr_out_reg; // @[ysyx_25030077_LSU.scala 35:29]
  reg  valid_in_dly; // @[ysyx_25030077_LSU.scala 36:29]
  wire  _valid_in_dly_T = io_in_valid & ready_in_reg; // @[ysyx_25030077_LSU.scala 37:31]
  wire  is_err_in = ~(io_in_bits_is_err1 | io_in_bits_is_err2); // @[ysyx_25030077_LSU.scala 38:19]
  wire  _data_out_reg_T = lsu_state == 2'h1; // @[ysyx_25030077_LSU.scala 40:32]
  wire  _data_out_reg_T_2 = lsu_state == 2'h2; // @[ysyx_25030077_LSU.scala 41:32]
  wire  _data_out_reg_T_4 = lsu_state == 2'h3; // @[ysyx_25030077_LSU.scala 42:32]
  wire [31:0] _data_out_reg_T_5 = io_r_valid ? io_r_data : data_out_reg; // @[ysyx_25030077_LSU.scala 42:47]
  wire [4:0] _addr_out_reg_T_5 = io_r_valid ? io_in_bits_rd_addr : addr_out_reg; // @[ysyx_25030077_LSU.scala 48:47]
  wire  _valid_out_reg_T_1 = ~valid_out_reg; // @[ysyx_25030077_LSU.scala 54:20]
  wire  _valid_out_reg_T_8 = _data_out_reg_T_2 ? io_b_valid : _data_out_reg_T_4 & io_r_valid; // @[Mux.scala 101:16]
  wire  _ready_in_reg_T = io_in_valid ? 1'h0 : 1'h1; // @[ysyx_25030077_LSU.scala 62:24]
  wire  _ready_in_reg_T_1 = ~ready_in_reg; // @[ysyx_25030077_LSU.scala 63:19]
  wire  _ready_in_reg_T_2 = valid_out_reg & io_out_ready; // @[ysyx_25030077_LSU.scala 63:53]
  wire  _ready_in_reg_T_5 = ready_in_reg ? _ready_in_reg_T : _ready_in_reg_T_1 & _ready_in_reg_T_2; // @[Mux.scala 101:16]
  wire  _lsu_state_T = lsu_state == 2'h0; // @[ysyx_25030077_LSU.scala 66:16]
  wire  _lsu_state_T_3 = io_in_bits_LSU_type == 4'h0 | ~is_err_in; // @[ysyx_25030077_LSU.scala 67:43]
  wire  _lsu_state_T_4 = io_in_bits_LSU_type == 4'h1; // @[ysyx_25030077_LSU.scala 68:29]
  wire  _lsu_state_T_5 = io_in_bits_LSU_type == 4'h2; // @[ysyx_25030077_LSU.scala 69:29]
  wire  _lsu_state_T_6 = io_in_bits_LSU_type == 4'h3; // @[ysyx_25030077_LSU.scala 70:29]
  wire [1:0] _lsu_state_T_7 = _lsu_state_T_6 ? 2'h2 : 2'h3; // @[Mux.scala 101:16]
  wire [1:0] _lsu_state_T_8 = _lsu_state_T_5 ? 2'h2 : _lsu_state_T_7; // @[Mux.scala 101:16]
  wire [1:0] _lsu_state_T_9 = _lsu_state_T_4 ? 2'h2 : _lsu_state_T_8; // @[Mux.scala 101:16]
  wire [1:0] _lsu_state_T_14 = io_b_valid ? 2'h0 : lsu_state; // @[ysyx_25030077_LSU.scala 73:31]
  wire [1:0] _lsu_state_T_16 = io_r_valid ? 2'h0 : lsu_state; // @[ysyx_25030077_LSU.scala 74:31]
  wire [1:0] _lsu_state_T_17 = _data_out_reg_T_4 ? _lsu_state_T_16 : lsu_state; // @[Mux.scala 101:16]
  reg  state_reg; // @[ysyx_25030077_LSU.scala 78:26]
  wire  _state_reg_T_2 = ~state_reg; // @[ysyx_25030077_LSU.scala 81:16]
  reg  ar_valid_reg; // @[ysyx_25030077_LSU.scala 85:29]
  reg  aw_valid_reg; // @[ysyx_25030077_LSU.scala 86:29]
  reg  w_valid_reg; // @[ysyx_25030077_LSU.scala 87:29]
  reg [1:0] state_dly; // @[ysyx_25030077_LSU.scala 88:26]
  wire  _ar_valid_reg_T_1 = ~ar_valid_reg; // @[ysyx_25030077_LSU.scala 92:19]
  wire  _ar_valid_reg_T_3 = state_dly == 2'h0; // @[ysyx_25030077_LSU.scala 92:73]
  wire  _ar_valid_reg_T_4 = _data_out_reg_T_4 & state_dly == 2'h0; // @[ysyx_25030077_LSU.scala 92:59]
  wire  _aw_valid_reg_T_1 = ~aw_valid_reg; // @[ysyx_25030077_LSU.scala 96:19]
  wire  _aw_valid_reg_T_4 = _data_out_reg_T_2 & _ar_valid_reg_T_3; // @[ysyx_25030077_LSU.scala 96:59]
  wire  _w_valid_reg_T_1 = ~w_valid_reg; // @[ysyx_25030077_LSU.scala 100:18]
  assign io_in_ready = ready_in_reg; // @[ysyx_25030077_LSU.scala 76:16]
  assign io_out_valid = valid_out_reg; // @[ysyx_25030077_LSU.scala 77:16]
  assign io_out_bits_rd_addr = addr_out_reg; // @[ysyx_25030077_LSU.scala 50:23]
  assign io_out_bits_rd_data = data_out_reg; // @[ysyx_25030077_LSU.scala 51:23]
  assign io_out_bits_is_err1 = io_in_bits_is_err1; // @[ysyx_25030077_LSU.scala 26:23]
  assign io_out_bits_is_err2 = io_in_bits_is_err2; // @[ysyx_25030077_LSU.scala 27:23]
  assign io_state = state_reg & is_err_in; // @[ysyx_25030077_LSU.scala 83:25]
  assign io_ar_addr = io_in_bits_result; // @[ysyx_25030077_LSU.scala 106:15]
  assign io_ar_valid = ar_valid_reg; // @[ysyx_25030077_LSU.scala 103:15]
  assign io_r_ready = 1'h1; // @[ysyx_25030077_LSU.scala 29:14]
  assign io_b_ready = 1'h1; // @[ysyx_25030077_LSU.scala 30:14]
  assign io_aw_valid = aw_valid_reg; // @[ysyx_25030077_LSU.scala 104:15]
  assign io_aw_addr = io_in_bits_result; // @[ysyx_25030077_LSU.scala 107:15]
  assign io_w_valid = w_valid_reg; // @[ysyx_25030077_LSU.scala 105:15]
  assign io_w_data = io_in_bits_rs2_data; // @[ysyx_25030077_LSU.scala 108:15]
  assign io_rw_type = io_in_bits_LSU_type; // @[ysyx_25030077_LSU.scala 102:14]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_LSU.scala 31:30]
      valid_out_reg <= 1'h0; // @[ysyx_25030077_LSU.scala 31:30]
    end else if (valid_out_reg) begin // @[Mux.scala 101:16]
      if (io_out_ready) begin // @[ysyx_25030077_LSU.scala 53:25]
        valid_out_reg <= 1'h0;
      end else begin
        valid_out_reg <= 1'h1;
      end
    end else begin
      valid_out_reg <= _valid_out_reg_T_1 & (_data_out_reg_T | _valid_out_reg_T_8);
    end
    if (reset) begin // @[ysyx_25030077_LSU.scala 32:26]
      lsu_state <= 2'h0; // @[ysyx_25030077_LSU.scala 32:26]
    end else if (_lsu_state_T) begin // @[Mux.scala 101:16]
      if (valid_in_dly) begin // @[ysyx_25030077_LSU.scala 66:31]
        if (_lsu_state_T_3) begin // @[Mux.scala 101:16]
          lsu_state <= 2'h1;
        end else begin
          lsu_state <= _lsu_state_T_9;
        end
      end
    end else if (_data_out_reg_T) begin // @[Mux.scala 101:16]
      lsu_state <= 2'h0;
    end else if (_data_out_reg_T_2) begin // @[Mux.scala 101:16]
      lsu_state <= _lsu_state_T_14;
    end else begin
      lsu_state <= _lsu_state_T_17;
    end
    ready_in_reg <= reset | _ready_in_reg_T_5; // @[ysyx_25030077_LSU.scala 33:{29,29} 61:16]
    if (reset) begin // @[ysyx_25030077_LSU.scala 34:29]
      data_out_reg <= 32'h0; // @[ysyx_25030077_LSU.scala 34:29]
    end else if (_data_out_reg_T) begin // @[Mux.scala 101:16]
      if (is_err_in) begin // @[ysyx_25030077_LSU.scala 40:47]
        data_out_reg <= io_in_bits_result;
      end else begin
        data_out_reg <= 32'h0;
      end
    end else if (_data_out_reg_T_2) begin // @[Mux.scala 101:16]
      if (io_b_valid) begin // @[ysyx_25030077_LSU.scala 41:47]
        data_out_reg <= 32'h0;
      end
    end else if (_data_out_reg_T_4) begin // @[Mux.scala 101:16]
      data_out_reg <= _data_out_reg_T_5;
    end
    if (reset) begin // @[ysyx_25030077_LSU.scala 35:29]
      addr_out_reg <= 5'h0; // @[ysyx_25030077_LSU.scala 35:29]
    end else if (_data_out_reg_T) begin // @[Mux.scala 101:16]
      if (is_err_in) begin // @[ysyx_25030077_LSU.scala 46:47]
        addr_out_reg <= io_in_bits_rd_addr;
      end else begin
        addr_out_reg <= 5'h0;
      end
    end else if (_data_out_reg_T_2) begin // @[Mux.scala 101:16]
      if (io_b_valid) begin // @[ysyx_25030077_LSU.scala 47:47]
        addr_out_reg <= 5'h0;
      end
    end else if (_data_out_reg_T_4) begin // @[Mux.scala 101:16]
      addr_out_reg <= _addr_out_reg_T_5;
    end
    if (reset) begin // @[ysyx_25030077_LSU.scala 36:29]
      valid_in_dly <= 1'h0; // @[ysyx_25030077_LSU.scala 36:29]
    end else begin
      valid_in_dly <= io_in_valid & ready_in_reg; // @[ysyx_25030077_LSU.scala 37:16]
    end
    if (reset) begin // @[ysyx_25030077_LSU.scala 78:26]
      state_reg <= 1'h0; // @[ysyx_25030077_LSU.scala 78:26]
    end else if (state_reg) begin // @[Mux.scala 101:16]
      if (_ready_in_reg_T_2) begin // @[ysyx_25030077_LSU.scala 80:21]
        state_reg <= 1'h0;
      end else begin
        state_reg <= 1'h1;
      end
    end else begin
      state_reg <= _state_reg_T_2 & _valid_in_dly_T;
    end
    if (reset) begin // @[ysyx_25030077_LSU.scala 85:29]
      ar_valid_reg <= 1'h0; // @[ysyx_25030077_LSU.scala 85:29]
    end else if (ar_valid_reg) begin // @[Mux.scala 101:16]
      if (io_ar_ready) begin // @[ysyx_25030077_LSU.scala 91:24]
        ar_valid_reg <= 1'h0;
      end else begin
        ar_valid_reg <= 1'h1;
      end
    end else begin
      ar_valid_reg <= _ar_valid_reg_T_1 & _ar_valid_reg_T_4;
    end
    if (reset) begin // @[ysyx_25030077_LSU.scala 86:29]
      aw_valid_reg <= 1'h0; // @[ysyx_25030077_LSU.scala 86:29]
    end else if (aw_valid_reg) begin // @[Mux.scala 101:16]
      if (io_aw_ready) begin // @[ysyx_25030077_LSU.scala 95:24]
        aw_valid_reg <= 1'h0;
      end else begin
        aw_valid_reg <= 1'h1;
      end
    end else begin
      aw_valid_reg <= _aw_valid_reg_T_1 & _aw_valid_reg_T_4;
    end
    if (reset) begin // @[ysyx_25030077_LSU.scala 87:29]
      w_valid_reg <= 1'h0; // @[ysyx_25030077_LSU.scala 87:29]
    end else if (w_valid_reg) begin // @[Mux.scala 101:16]
      if (io_w_ready) begin // @[ysyx_25030077_LSU.scala 99:23]
        w_valid_reg <= 1'h0;
      end else begin
        w_valid_reg <= 1'h1;
      end
    end else begin
      w_valid_reg <= _w_valid_reg_T_1 & _aw_valid_reg_T_4;
    end
    if (reset) begin // @[ysyx_25030077_LSU.scala 88:26]
      state_dly <= 2'h0; // @[ysyx_25030077_LSU.scala 88:26]
    end else begin
      state_dly <= lsu_state; // @[ysyx_25030077_LSU.scala 89:13]
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
  valid_out_reg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  lsu_state = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  ready_in_reg = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  data_out_reg = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  addr_out_reg = _RAND_4[4:0];
  _RAND_5 = {1{`RANDOM}};
  valid_in_dly = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  state_reg = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  ar_valid_reg = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  aw_valid_reg = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  w_valid_reg = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  state_dly = _RAND_10[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077_WBU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [4:0]  io_in_bits_rd_addr,
  input  [31:0] io_in_bits_rd_data,
  input         io_in_bits_is_err1,
  input         io_in_bits_is_err2,
  output [4:0]  io_rd_addr,
  output [31:0] io_rd_data,
  output        io_rd_valid,
  input         io_out_ready,
  output        io_out_valid,
  output        io_state
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  valid_out_reg; // @[ysyx_25030077_WBU.scala 17:30]
  wire  _valid_out_reg_T_1 = ~valid_out_reg; // @[ysyx_25030077_WBU.scala 20:20]
  wire  is_err_in = ~(io_in_bits_is_err1 | io_in_bits_is_err2); // @[ysyx_25030077_WBU.scala 24:19]
  reg  state_reg; // @[ysyx_25030077_WBU.scala 25:26]
  wire  _state_reg_T_2 = ~state_reg; // @[ysyx_25030077_WBU.scala 28:16]
  wire  _state_reg_T_3 = io_in_valid & io_in_ready; // @[ysyx_25030077_WBU.scala 28:48]
  assign io_in_ready = 1'h1; // @[ysyx_25030077_WBU.scala 14:15]
  assign io_rd_addr = io_in_bits_rd_addr; // @[ysyx_25030077_WBU.scala 15:14]
  assign io_rd_data = io_in_bits_rd_data; // @[ysyx_25030077_WBU.scala 16:14]
  assign io_rd_valid = valid_out_reg & ~io_in_bits_is_err1 & ~io_in_bits_is_err2; // @[ysyx_25030077_WBU.scala 22:57]
  assign io_out_valid = 1'h1; // @[ysyx_25030077_WBU.scala 23:16]
  assign io_state = state_reg & is_err_in; // @[ysyx_25030077_WBU.scala 30:25]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_WBU.scala 17:30]
      valid_out_reg <= 1'h0; // @[ysyx_25030077_WBU.scala 17:30]
    end else if (valid_out_reg) begin // @[Mux.scala 101:16]
      if (io_out_ready) begin // @[ysyx_25030077_WBU.scala 19:25]
        valid_out_reg <= 1'h0;
      end else begin
        valid_out_reg <= 1'h1;
      end
    end else begin
      valid_out_reg <= _valid_out_reg_T_1 & io_in_valid;
    end
    if (reset) begin // @[ysyx_25030077_WBU.scala 25:26]
      state_reg <= 1'h0; // @[ysyx_25030077_WBU.scala 25:26]
    end else if (state_reg) begin // @[Mux.scala 101:16]
      if (io_out_valid & io_out_ready) begin // @[ysyx_25030077_WBU.scala 27:21]
        state_reg <= 1'h0;
      end else begin
        state_reg <= 1'h1;
      end
    end else begin
      state_reg <= _state_reg_T_2 & _state_reg_T_3;
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
  valid_out_reg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  state_reg = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077_arbiter(
  input         clock,
  input         reset,
  input         io_IFU_ar_valid,
  input  [31:0] io_IFU_ar_addr,
  input  [1:0]  io_IFU_ar_brust,
  output        io_IFU_ar_ready,
  input         io_IFU_r_ready,
  output        io_IFU_r_valid,
  output [31:0] io_IFU_r_data,
  input         io_IFU_b_ready,
  output        io_IFU_b_valid,
  input         io_IFU_aw_valid,
  input  [31:0] io_IFU_aw_addr,
  output        io_IFU_aw_ready,
  input         io_IFU_w_valid,
  input  [31:0] io_IFU_w_data,
  output        io_IFU_w_ready,
  input         io_LSU_ar_valid,
  input  [31:0] io_LSU_ar_addr,
  output        io_LSU_ar_ready,
  input         io_LSU_r_ready,
  output        io_LSU_r_valid,
  output [31:0] io_LSU_r_data,
  input  [3:0]  io_LSU_rw_type,
  input         io_LSU_b_ready,
  output        io_LSU_b_valid,
  input         io_LSU_aw_valid,
  input  [31:0] io_LSU_aw_addr,
  output        io_LSU_aw_ready,
  input         io_LSU_w_valid,
  input  [31:0] io_LSU_w_data,
  output        io_LSU_w_ready,
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
  input  [3:0]  io_axi_b_id
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state; // @[ysyx_25030077_arbiter.scala 78:22]
  reg [1:0] r_cnt; // @[ysyx_25030077_arbiter.scala 79:22]
  reg [1:0] ar_len; // @[ysyx_25030077_arbiter.scala 80:23]
  wire  _state_T = state == 3'h0; // @[ysyx_25030077_arbiter.scala 82:16]
  wire [2:0] _state_T_5 = io_IFU_aw_valid & io_axi_aw_ready ? 3'h4 : 3'h0; // @[ysyx_25030077_arbiter.scala 85:44]
  wire [2:0] _state_T_6 = io_IFU_ar_valid & io_axi_ar_ready ? 3'h1 : _state_T_5; // @[ysyx_25030077_arbiter.scala 84:40]
  wire  _state_T_9 = state == 3'h1; // @[ysyx_25030077_arbiter.scala 86:16]
  wire  _state_T_10 = io_IFU_r_ready & io_axi_r_valid; // @[ysyx_25030077_arbiter.scala 86:47]
  wire  _state_T_14 = state == 3'h2; // @[ysyx_25030077_arbiter.scala 87:16]
  wire [2:0] _state_T_16 = io_LSU_r_ready & io_axi_r_valid ? 3'h0 : 3'h2; // @[ysyx_25030077_arbiter.scala 87:31]
  wire  _state_T_17 = state == 3'h3; // @[ysyx_25030077_arbiter.scala 88:16]
  wire [2:0] _state_T_19 = io_LSU_b_ready & io_axi_b_valid ? 3'h0 : 3'h3; // @[ysyx_25030077_arbiter.scala 88:31]
  wire  _state_T_20 = state == 3'h4; // @[ysyx_25030077_arbiter.scala 89:16]
  wire [2:0] _state_T_22 = io_IFU_b_ready & io_axi_b_valid ? 3'h0 : 3'h4; // @[ysyx_25030077_arbiter.scala 89:31]
  wire [2:0] _state_T_23 = _state_T_20 ? _state_T_22 : state; // @[Mux.scala 101:16]
  wire [2:0] _state_T_24 = _state_T_17 ? _state_T_19 : _state_T_23; // @[Mux.scala 101:16]
  wire [31:0] _io_axi_ar_addr_T_2 = _state_T_9 ? io_IFU_ar_addr : 32'h0; // @[ysyx_25030077_arbiter.scala 93:61]
  wire  _rsize_T = io_LSU_rw_type == 4'h4; // @[ysyx_25030077_arbiter.scala 102:29]
  wire  _rsize_T_1 = io_LSU_rw_type == 4'h5; // @[ysyx_25030077_arbiter.scala 103:29]
  wire  _rsize_T_2 = io_LSU_rw_type == 4'h6; // @[ysyx_25030077_arbiter.scala 104:29]
  wire  _rsize_T_3 = io_LSU_rw_type == 4'h7; // @[ysyx_25030077_arbiter.scala 105:29]
  wire  _rsize_T_4 = io_LSU_rw_type == 4'h8; // @[ysyx_25030077_arbiter.scala 106:29]
  wire [1:0] _rsize_T_5 = _rsize_T_4 ? 2'h2 : 2'h0; // @[Mux.scala 101:16]
  wire [1:0] _rsize_T_6 = _rsize_T_3 ? 2'h1 : _rsize_T_5; // @[Mux.scala 101:16]
  wire [1:0] _rsize_T_7 = _rsize_T_2 ? 2'h1 : _rsize_T_6; // @[Mux.scala 101:16]
  wire [1:0] _rsize_T_8 = _rsize_T_1 ? 2'h0 : _rsize_T_7; // @[Mux.scala 101:16]
  wire [1:0] rsize = _rsize_T ? 2'h0 : _rsize_T_8; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_ar_size_T_2 = _state_T_9 ? 2'h2 : 2'h0; // @[ysyx_25030077_arbiter.scala 108:51]
  wire [1:0] _io_axi_ar_size_T_3 = _state_T_14 ? rsize : _io_axi_ar_size_T_2; // @[ysyx_25030077_arbiter.scala 108:25]
  wire [1:0] _io_axi_ar_len_T_2 = io_IFU_ar_brust == 2'h1 ? 2'h3 : 2'h0; // @[ysyx_25030077_arbiter.scala 109:42]
  wire [1:0] _io_axi_ar_len_T_3 = _state_T_9 ? _io_axi_ar_len_T_2 : 2'h0; // @[ysyx_25030077_arbiter.scala 109:23]
  wire [1:0] _r_cnt_T_4 = r_cnt + 2'h1; // @[ysyx_25030077_arbiter.scala 112:98]
  wire [31:0] _io_axi_aw_addr_T_2 = _state_T_20 ? io_IFU_aw_addr : 32'h0; // @[ysyx_25030077_arbiter.scala 115:61]
  wire  _wsize_T = io_LSU_rw_type == 4'h1; // @[ysyx_25030077_arbiter.scala 119:39]
  wire  _wsize_T_1 = io_LSU_rw_type == 4'h2; // @[ysyx_25030077_arbiter.scala 120:39]
  wire  _wsize_T_2 = io_LSU_rw_type == 4'h3; // @[ysyx_25030077_arbiter.scala 121:39]
  wire [1:0] wsize = _wsize_T ? 2'h2 : {{1'd0}, _wsize_T_1}; // @[Mux.scala 101:16]
  wire [1:0] _io_axi_aw_size_T_2 = _state_T_20 ? 2'h2 : 2'h0; // @[ysyx_25030077_arbiter.scala 123:51]
  wire [1:0] _io_axi_aw_size_T_3 = _state_T_17 ? wsize : _io_axi_aw_size_T_2; // @[ysyx_25030077_arbiter.scala 123:25]
  wire  _w_data_T_3 = ~io_LSU_aw_addr[1]; // @[ysyx_25030077_arbiter.scala 128:74]
  wire [31:0] _w_data_T_5 = {16'h0,io_LSU_w_data[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_9 = {io_LSU_w_data[15:0],16'h0}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_10 = io_LSU_aw_addr[1] ? _w_data_T_9 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_11 = _w_data_T_3 ? _w_data_T_5 : _w_data_T_10; // @[Mux.scala 101:16]
  wire  _w_data_T_14 = io_LSU_aw_addr[1:0] == 2'h0; // @[ysyx_25030077_arbiter.scala 132:77]
  wire [31:0] _w_data_T_16 = {24'h0,io_LSU_w_data[7:0]}; // @[Cat.scala 31:58]
  wire  _w_data_T_18 = io_LSU_aw_addr[1:0] == 2'h1; // @[ysyx_25030077_arbiter.scala 133:77]
  wire [31:0] _w_data_T_20 = {16'h0,io_LSU_w_data[7:0],8'h0}; // @[Cat.scala 31:58]
  wire  _w_data_T_22 = io_LSU_aw_addr[1:0] == 2'h2; // @[ysyx_25030077_arbiter.scala 134:77]
  wire [31:0] _w_data_T_24 = {8'h0,io_LSU_w_data[7:0],16'h0}; // @[Cat.scala 31:58]
  wire  _w_data_T_26 = io_LSU_aw_addr[1:0] == 2'h3; // @[ysyx_25030077_arbiter.scala 135:77]
  wire [31:0] _w_data_T_28 = {io_LSU_w_data[7:0],24'h0}; // @[Cat.scala 31:58]
  wire [31:0] _w_data_T_29 = _w_data_T_26 ? _w_data_T_28 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_30 = _w_data_T_22 ? _w_data_T_24 : _w_data_T_29; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_31 = _w_data_T_18 ? _w_data_T_20 : _w_data_T_30; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_32 = _w_data_T_14 ? _w_data_T_16 : _w_data_T_31; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_33 = _wsize_T_2 ? _w_data_T_32 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _w_data_T_34 = _wsize_T_1 ? _w_data_T_11 : _w_data_T_33; // @[Mux.scala 101:16]
  wire [31:0] w_data = _wsize_T ? io_LSU_w_data : _w_data_T_34; // @[Mux.scala 101:16]
  wire [31:0] _io_axi_w_data_T_2 = _state_T_20 ? io_IFU_w_data : 32'h0; // @[ysyx_25030077_arbiter.scala 138:52]
  wire [3:0] _strb_T_6 = io_LSU_aw_addr[1] ? 4'hc : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_7 = _w_data_T_3 ? 4'h3 : _strb_T_6; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_17 = _w_data_T_26 ? 4'h8 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_18 = _w_data_T_22 ? 4'h4 : _strb_T_17; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_19 = _w_data_T_18 ? 4'h2 : _strb_T_18; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_20 = _w_data_T_14 ? 4'h1 : _strb_T_19; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_21 = _wsize_T_2 ? _strb_T_20 : 4'h0; // @[Mux.scala 101:16]
  wire [3:0] _strb_T_22 = _wsize_T_1 ? _strb_T_7 : _strb_T_21; // @[Mux.scala 101:16]
  wire [3:0] strb = _wsize_T ? 4'hf : _strb_T_22; // @[Mux.scala 101:16]
  wire  is_sram = ~(io_axi_ar_addr[31:28] == 4'h3); // @[ysyx_25030077_arbiter.scala 154:18]
  wire  _rdata_sram_T_3 = io_axi_ar_addr[1:0] == 2'h0; // @[ysyx_25030077_arbiter.scala 158:79]
  wire [31:0] _rdata_sram_T_5 = {24'h0,io_axi_r_data[7:0]}; // @[Cat.scala 31:58]
  wire  _rdata_sram_T_7 = io_axi_ar_addr[1:0] == 2'h1; // @[ysyx_25030077_arbiter.scala 159:79]
  wire [31:0] _rdata_sram_T_9 = {24'h0,io_axi_r_data[15:8]}; // @[Cat.scala 31:58]
  wire  _rdata_sram_T_11 = io_axi_ar_addr[1:0] == 2'h2; // @[ysyx_25030077_arbiter.scala 160:79]
  wire [31:0] _rdata_sram_T_13 = {24'h0,io_axi_r_data[23:16]}; // @[Cat.scala 31:58]
  wire  _rdata_sram_T_15 = io_axi_ar_addr[1:0] == 2'h3; // @[ysyx_25030077_arbiter.scala 161:79]
  wire [31:0] _rdata_sram_T_17 = {24'h0,io_axi_r_data[31:24]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_18 = _rdata_sram_T_15 ? _rdata_sram_T_17 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_19 = _rdata_sram_T_11 ? _rdata_sram_T_13 : _rdata_sram_T_18; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_20 = _rdata_sram_T_7 ? _rdata_sram_T_9 : _rdata_sram_T_19; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_21 = _rdata_sram_T_3 ? _rdata_sram_T_5 : _rdata_sram_T_20; // @[Mux.scala 101:16]
  wire  _rdata_sram_T_24 = ~io_axi_ar_addr[1]; // @[ysyx_25030077_arbiter.scala 164:76]
  wire [15:0] _rdata_sram_T_27 = io_axi_r_data[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_29 = {_rdata_sram_T_27,io_axi_r_data[15:0]}; // @[Cat.scala 31:58]
  wire [15:0] _rdata_sram_T_34 = io_axi_r_data[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_36 = {_rdata_sram_T_34,io_axi_r_data[31:16]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_37 = io_axi_ar_addr[1] ? _rdata_sram_T_36 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_38 = _rdata_sram_T_24 ? _rdata_sram_T_29 : _rdata_sram_T_37; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_43 = {16'h0,io_axi_r_data[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_47 = {16'h0,io_axi_r_data[31:16]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_48 = io_axi_ar_addr[1] ? _rdata_sram_T_47 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_49 = _rdata_sram_T_24 ? _rdata_sram_T_43 : _rdata_sram_T_48; // @[Mux.scala 101:16]
  wire [23:0] _rdata_sram_T_55 = io_axi_r_data[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_57 = {_rdata_sram_T_55,io_axi_r_data[7:0]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_62 = io_axi_r_data[15] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_64 = {_rdata_sram_T_62,io_axi_r_data[15:8]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_69 = io_axi_r_data[23] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_71 = {_rdata_sram_T_69,io_axi_r_data[23:16]}; // @[Cat.scala 31:58]
  wire [23:0] _rdata_sram_T_76 = io_axi_r_data[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _rdata_sram_T_78 = {_rdata_sram_T_76,io_axi_r_data[31:24]}; // @[Cat.scala 31:58]
  wire [31:0] _rdata_sram_T_79 = _rdata_sram_T_15 ? _rdata_sram_T_78 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_80 = _rdata_sram_T_11 ? _rdata_sram_T_71 : _rdata_sram_T_79; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_81 = _rdata_sram_T_7 ? _rdata_sram_T_64 : _rdata_sram_T_80; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_82 = _rdata_sram_T_3 ? _rdata_sram_T_57 : _rdata_sram_T_81; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_83 = _rsize_T ? _rdata_sram_T_82 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_84 = _rsize_T_3 ? _rdata_sram_T_49 : _rdata_sram_T_83; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_85 = _rsize_T_2 ? _rdata_sram_T_38 : _rdata_sram_T_84; // @[Mux.scala 101:16]
  wire [31:0] _rdata_sram_T_86 = _rsize_T_1 ? _rdata_sram_T_21 : _rdata_sram_T_85; // @[Mux.scala 101:16]
  wire [31:0] rdata_sram = _rsize_T_4 ? io_axi_r_data : _rdata_sram_T_86; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_19 = _rsize_T ? _rdata_sram_T_57 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_20 = _rsize_T_3 ? _rdata_sram_T_43 : _rdata_mrom_T_19; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_21 = _rsize_T_2 ? _rdata_sram_T_29 : _rdata_mrom_T_20; // @[Mux.scala 101:16]
  wire [31:0] _rdata_mrom_T_22 = _rsize_T_1 ? _rdata_sram_T_5 : _rdata_mrom_T_21; // @[Mux.scala 101:16]
  wire [31:0] rdata_mrom = _rsize_T_4 ? io_axi_r_data : _rdata_mrom_T_22; // @[Mux.scala 101:16]
  wire [31:0] rdata = is_sram ? rdata_sram : rdata_mrom; // @[ysyx_25030077_arbiter.scala 187:18]
  wire [3:0] _io_axi_w_strb_T_2 = _state_T_20 ? 4'hf : 4'h0; // @[ysyx_25030077_arbiter.scala 188:48]
  assign io_IFU_ar_ready = _state_T_9 & io_axi_ar_ready; // @[ysyx_25030077_arbiter.scala 95:25]
  assign io_IFU_r_valid = _state_T_9 & io_axi_r_valid; // @[ysyx_25030077_arbiter.scala 190:24]
  assign io_IFU_r_data = _state_T_9 ? io_axi_r_data : 32'h0; // @[ysyx_25030077_arbiter.scala 192:24]
  assign io_IFU_b_valid = _state_T_20 & io_axi_b_valid; // @[ysyx_25030077_arbiter.scala 197:24]
  assign io_IFU_aw_ready = _state_T_20 & io_axi_aw_ready; // @[ysyx_25030077_arbiter.scala 117:25]
  assign io_IFU_w_ready = _state_T_20 & io_axi_w_ready; // @[ysyx_25030077_arbiter.scala 140:24]
  assign io_LSU_ar_ready = _state_T_14 & io_axi_ar_ready; // @[ysyx_25030077_arbiter.scala 98:25]
  assign io_LSU_r_valid = _state_T_14 & io_axi_r_valid; // @[ysyx_25030077_arbiter.scala 191:24]
  assign io_LSU_r_data = _state_T_14 ? rdata : 32'h0; // @[ysyx_25030077_arbiter.scala 193:24]
  assign io_LSU_b_valid = _state_T_17 & io_axi_b_valid; // @[ysyx_25030077_arbiter.scala 196:24]
  assign io_LSU_aw_ready = _state_T_17 & io_axi_aw_ready; // @[ysyx_25030077_arbiter.scala 116:25]
  assign io_LSU_w_ready = _state_T_17 & io_axi_w_ready; // @[ysyx_25030077_arbiter.scala 139:24]
  assign io_axi_ar_valid = _state_T_14 ? io_LSU_ar_valid : _state_T_9 & io_IFU_ar_valid; // @[ysyx_25030077_arbiter.scala 92:25]
  assign io_axi_ar_addr = _state_T_14 ? io_LSU_ar_addr : _io_axi_ar_addr_T_2; // @[ysyx_25030077_arbiter.scala 93:25]
  assign io_axi_ar_id = 4'h0; // @[ysyx_25030077_arbiter.scala 94:19]
  assign io_axi_ar_len = {{6'd0}, _io_axi_ar_len_T_3}; // @[ysyx_25030077_arbiter.scala 109:17]
  assign io_axi_ar_size = {{1'd0}, _io_axi_ar_size_T_3}; // @[ysyx_25030077_arbiter.scala 108:19]
  assign io_axi_ar_burst = _state_T_9 ? io_IFU_ar_brust : 2'h0; // @[ysyx_25030077_arbiter.scala 110:25]
  assign io_axi_aw_valid = _state_T_17 ? io_LSU_aw_valid : _state_T_20 & io_IFU_aw_valid; // @[ysyx_25030077_arbiter.scala 114:25]
  assign io_axi_aw_addr = _state_T_17 ? io_LSU_aw_addr : _io_axi_aw_addr_T_2; // @[ysyx_25030077_arbiter.scala 115:25]
  assign io_axi_aw_id = 4'h0; // @[ysyx_25030077_arbiter.scala 73:16]
  assign io_axi_aw_len = 8'h0; // @[ysyx_25030077_arbiter.scala 74:17]
  assign io_axi_aw_size = {{1'd0}, _io_axi_aw_size_T_3}; // @[ysyx_25030077_arbiter.scala 123:19]
  assign io_axi_aw_burst = 2'h0; // @[ysyx_25030077_arbiter.scala 75:19]
  assign io_axi_w_valid = _state_T_17 ? io_LSU_w_valid : _state_T_20 & io_IFU_w_valid; // @[ysyx_25030077_arbiter.scala 124:24]
  assign io_axi_w_data = _state_T_17 ? w_data : _io_axi_w_data_T_2; // @[ysyx_25030077_arbiter.scala 138:24]
  assign io_axi_w_strb = _state_T_17 ? strb : _io_axi_w_strb_T_2; // @[ysyx_25030077_arbiter.scala 188:23]
  assign io_axi_w_last = 1'h1; // @[ysyx_25030077_arbiter.scala 76:17]
  assign io_axi_r_ready = _state_T_9 ? io_IFU_r_ready : _state_T_14 & io_LSU_r_ready; // @[ysyx_25030077_arbiter.scala 194:24]
  assign io_axi_b_ready = _state_T_17 ? io_LSU_b_ready : _state_T_20 & io_IFU_b_ready; // @[ysyx_25030077_arbiter.scala 198:24]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_arbiter.scala 78:22]
      state <= 3'h0; // @[ysyx_25030077_arbiter.scala 78:22]
    end else if (_state_T) begin // @[Mux.scala 101:16]
      if (io_LSU_ar_valid & io_axi_ar_ready) begin // @[ysyx_25030077_arbiter.scala 82:31]
        state <= 3'h2;
      end else if (io_LSU_aw_valid & io_axi_aw_ready) begin // @[ysyx_25030077_arbiter.scala 83:35]
        state <= 3'h3;
      end else begin
        state <= _state_T_6;
      end
    end else if (_state_T_9) begin // @[Mux.scala 101:16]
      if (io_IFU_r_ready & io_axi_r_valid & ar_len == r_cnt) begin // @[ysyx_25030077_arbiter.scala 86:31]
        state <= 3'h0;
      end else begin
        state <= 3'h1;
      end
    end else if (_state_T_14) begin // @[Mux.scala 101:16]
      state <= _state_T_16;
    end else begin
      state <= _state_T_24;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 79:22]
      r_cnt <= 2'h0; // @[ysyx_25030077_arbiter.scala 79:22]
    end else if (_state_T_9) begin // @[ysyx_25030077_arbiter.scala 112:16]
      if (_state_T_10) begin // @[ysyx_25030077_arbiter.scala 112:35]
        if (r_cnt != ar_len) begin // @[ysyx_25030077_arbiter.scala 112:73]
          r_cnt <= _r_cnt_T_4;
        end else begin
          r_cnt <= 2'h0;
        end
      end
    end else begin
      r_cnt <= 2'h0;
    end
    if (reset) begin // @[ysyx_25030077_arbiter.scala 80:23]
      ar_len <= 2'h0; // @[ysyx_25030077_arbiter.scala 80:23]
    end else if (_state_T_9) begin // @[ysyx_25030077_arbiter.scala 109:23]
      if (io_IFU_ar_brust == 2'h1) begin // @[ysyx_25030077_arbiter.scala 109:42]
        ar_len <= 2'h3;
      end else begin
        ar_len <= 2'h0;
      end
    end else begin
      ar_len <= 2'h0;
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
  state = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  r_cnt = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  ar_len = _RAND_2[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ysyx_25030077(
  input         clock,
  input         reset,
  input         io_interrupt,
  input         io_master_awready,
  output        io_master_awvalid,
  output [31:0] io_master_awaddr,
  output [3:0]  io_master_awid,
  output [7:0]  io_master_awlen,
  output [2:0]  io_master_awsize,
  output [1:0]  io_master_awburst,
  input         io_master_wready,
  output        io_master_wvalid,
  output [31:0] io_master_wdata,
  output [3:0]  io_master_wstrb,
  output        io_master_wlast,
  output        io_master_bready,
  input         io_master_bvalid,
  input  [3:0]  io_master_bid,
  input  [1:0]  io_master_bresp,
  input         io_master_arready,
  output        io_master_arvalid,
  output [31:0] io_master_araddr,
  output [3:0]  io_master_arid,
  output [7:0]  io_master_arlen,
  output [2:0]  io_master_arsize,
  output [1:0]  io_master_arburst,
  output        io_master_rready,
  input         io_master_rvalid,
  input  [31:0] io_master_rdata,
  input  [3:0]  io_master_rid,
  input         io_master_rlast,
  input  [1:0]  io_master_rresp,
  output        io_master_arlock,
  output [3:0]  io_master_arcache,
  output [2:0]  io_master_arprot,
  output [3:0]  io_master_arqos,
  output        io_master_awlock,
  output [3:0]  io_master_awcache,
  output [2:0]  io_master_awprot,
  output [3:0]  io_master_awqos,
  input         io_slave_arlock,
  input  [3:0]  io_slave_arcache,
  input  [2:0]  io_slave_arprot,
  input  [3:0]  io_slave_arqos,
  input         io_slave_awlock,
  input  [3:0]  io_slave_awcache,
  input  [2:0]  io_slave_awprot,
  input  [3:0]  io_slave_awqos,
  output        io_slave_awready,
  input         io_slave_awvalid,
  input  [31:0] io_slave_awaddr,
  input  [3:0]  io_slave_awid,
  input  [7:0]  io_slave_awlen,
  input  [2:0]  io_slave_awsize,
  input  [1:0]  io_slave_awburst,
  output        io_slave_wready,
  input         io_slave_wvalid,
  input  [31:0] io_slave_wdata,
  input  [3:0]  io_slave_wstrb,
  input         io_slave_wlast,
  input         io_slave_bready,
  output        io_slave_bvalid,
  output [3:0]  io_slave_bid,
  output [1:0]  io_slave_bresp,
  output        io_slave_arready,
  input         io_slave_arvalid,
  input  [31:0] io_slave_araddr,
  input  [3:0]  io_slave_arid,
  input  [7:0]  io_slave_arlen,
  input  [2:0]  io_slave_arsize,
  input  [1:0]  io_slave_arburst,
  input         io_slave_rready,
  output        io_slave_rvalid,
  output [31:0] io_slave_rdata,
  output [3:0]  io_slave_rid,
  output        io_slave_rlast,
  output [1:0]  io_slave_rresp
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
`endif // RANDOMIZE_REG_INIT
  wire  a_ifu_clock; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_reset; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_err1_in; // @[ysyx_25030077.scala 87:21]
  wire [31:0] a_ifu_io_pc; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_out_ready; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_out_valid; // @[ysyx_25030077.scala 87:21]
  wire [31:0] a_ifu_io_out_bits_pc; // @[ysyx_25030077.scala 87:21]
  wire [31:0] a_ifu_io_out_bits_inst; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_out_bits_is_err1; // @[ysyx_25030077.scala 87:21]
  wire [31:0] a_ifu_io_ar_addr; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_ar_valid; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_ar_ready; // @[ysyx_25030077.scala 87:21]
  wire [1:0] a_ifu_io_ar_burst; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_r_valid; // @[ysyx_25030077.scala 87:21]
  wire [31:0] a_ifu_io_r_data; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_r_ready; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_b_valid; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_b_ready; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_aw_valid; // @[ysyx_25030077.scala 87:21]
  wire [31:0] a_ifu_io_aw_addr; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_aw_ready; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_w_valid; // @[ysyx_25030077.scala 87:21]
  wire [31:0] a_ifu_io_w_data; // @[ysyx_25030077.scala 87:21]
  wire  a_ifu_io_w_ready; // @[ysyx_25030077.scala 87:21]
  wire  b_idu_clock; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_reset; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_in_ready; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_in_valid; // @[ysyx_25030077.scala 88:21]
  wire [31:0] b_idu_io_in_bits_pc; // @[ysyx_25030077.scala 88:21]
  wire [31:0] b_idu_io_in_bits_inst; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_in_bits_is_err1; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_out_ready; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_out_valid; // @[ysyx_25030077.scala 88:21]
  wire [3:0] b_idu_io_out_bits_exu_type; // @[ysyx_25030077.scala 88:21]
  wire [3:0] b_idu_io_out_bits_data_type; // @[ysyx_25030077.scala 88:21]
  wire [3:0] b_idu_io_out_bits_pc_next_type; // @[ysyx_25030077.scala 88:21]
  wire [4:0] b_idu_io_out_bits_rd_addr; // @[ysyx_25030077.scala 88:21]
  wire [3:0] b_idu_io_out_bits_LSU_type; // @[ysyx_25030077.scala 88:21]
  wire [31:0] b_idu_io_out_bits_rs1_data; // @[ysyx_25030077.scala 88:21]
  wire [31:0] b_idu_io_out_bits_rs2_data; // @[ysyx_25030077.scala 88:21]
  wire [31:0] b_idu_io_out_bits_imm_data; // @[ysyx_25030077.scala 88:21]
  wire [31:0] b_idu_io_out_bits_pc_data; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_out_bits_is_err1; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_out_bits_is_err2; // @[ysyx_25030077.scala 88:21]
  wire [4:0] b_idu_io_rs1_addr; // @[ysyx_25030077.scala 88:21]
  wire [4:0] b_idu_io_rs2_addr; // @[ysyx_25030077.scala 88:21]
  wire [31:0] b_idu_io_rs1_data; // @[ysyx_25030077.scala 88:21]
  wire [31:0] b_idu_io_rs2_data; // @[ysyx_25030077.scala 88:21]
  wire [4:0] b_idu_io_EXU_rd; // @[ysyx_25030077.scala 88:21]
  wire [4:0] b_idu_io_LSU_rd; // @[ysyx_25030077.scala 88:21]
  wire [4:0] b_idu_io_WBU_rd; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_EXU_state; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_LSU_state; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_WBU_state; // @[ysyx_25030077.scala 88:21]
  wire  b_idu_io_err2_in; // @[ysyx_25030077.scala 88:21]
  wire  g_gpr_clock; // @[ysyx_25030077.scala 89:21]
  wire  g_gpr_reset; // @[ysyx_25030077.scala 89:21]
  wire [4:0] g_gpr_io_rs1_addr; // @[ysyx_25030077.scala 89:21]
  wire [4:0] g_gpr_io_rs2_addr; // @[ysyx_25030077.scala 89:21]
  wire [31:0] g_gpr_io_rdata_rs1; // @[ysyx_25030077.scala 89:21]
  wire [31:0] g_gpr_io_rdata_rs2; // @[ysyx_25030077.scala 89:21]
  wire [4:0] g_gpr_io_rd_addr; // @[ysyx_25030077.scala 89:21]
  wire [31:0] g_gpr_io_rd_data; // @[ysyx_25030077.scala 89:21]
  wire  g_gpr_io_rd_valid; // @[ysyx_25030077.scala 89:21]
  wire  c_exu_clock; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_reset; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_in_ready; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_in_valid; // @[ysyx_25030077.scala 90:21]
  wire [3:0] c_exu_io_in_bits_exu_type; // @[ysyx_25030077.scala 90:21]
  wire [3:0] c_exu_io_in_bits_data_type; // @[ysyx_25030077.scala 90:21]
  wire [3:0] c_exu_io_in_bits_pc_next_type; // @[ysyx_25030077.scala 90:21]
  wire [4:0] c_exu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 90:21]
  wire [3:0] c_exu_io_in_bits_LSU_type; // @[ysyx_25030077.scala 90:21]
  wire [31:0] c_exu_io_in_bits_rs1_data; // @[ysyx_25030077.scala 90:21]
  wire [31:0] c_exu_io_in_bits_rs2_data; // @[ysyx_25030077.scala 90:21]
  wire [31:0] c_exu_io_in_bits_imm_data; // @[ysyx_25030077.scala 90:21]
  wire [31:0] c_exu_io_in_bits_pc_data; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_in_bits_is_err1; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_in_bits_is_err2; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_out_ready; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_out_valid; // @[ysyx_25030077.scala 90:21]
  wire [31:0] c_exu_io_out_bits_result; // @[ysyx_25030077.scala 90:21]
  wire [4:0] c_exu_io_out_bits_rd_addr; // @[ysyx_25030077.scala 90:21]
  wire [3:0] c_exu_io_out_bits_LSU_type; // @[ysyx_25030077.scala 90:21]
  wire [31:0] c_exu_io_out_bits_rs2_data; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_out_bits_is_err1; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_out_bits_is_err2; // @[ysyx_25030077.scala 90:21]
  wire [31:0] c_exu_io_pc_next; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_is_err; // @[ysyx_25030077.scala 90:21]
  wire  c_exu_io_state; // @[ysyx_25030077.scala 90:21]
  wire  d_lsu_clock; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_reset; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_in_ready; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_in_valid; // @[ysyx_25030077.scala 91:21]
  wire [31:0] d_lsu_io_in_bits_result; // @[ysyx_25030077.scala 91:21]
  wire [4:0] d_lsu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 91:21]
  wire [3:0] d_lsu_io_in_bits_LSU_type; // @[ysyx_25030077.scala 91:21]
  wire [31:0] d_lsu_io_in_bits_rs2_data; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_in_bits_is_err1; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_in_bits_is_err2; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_out_ready; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_out_valid; // @[ysyx_25030077.scala 91:21]
  wire [4:0] d_lsu_io_out_bits_rd_addr; // @[ysyx_25030077.scala 91:21]
  wire [31:0] d_lsu_io_out_bits_rd_data; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_out_bits_is_err1; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_out_bits_is_err2; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_state; // @[ysyx_25030077.scala 91:21]
  wire [31:0] d_lsu_io_ar_addr; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_ar_ready; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_ar_valid; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_r_valid; // @[ysyx_25030077.scala 91:21]
  wire [31:0] d_lsu_io_r_data; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_r_ready; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_b_valid; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_b_ready; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_aw_valid; // @[ysyx_25030077.scala 91:21]
  wire [31:0] d_lsu_io_aw_addr; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_aw_ready; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_w_valid; // @[ysyx_25030077.scala 91:21]
  wire [31:0] d_lsu_io_w_data; // @[ysyx_25030077.scala 91:21]
  wire  d_lsu_io_w_ready; // @[ysyx_25030077.scala 91:21]
  wire [3:0] d_lsu_io_rw_type; // @[ysyx_25030077.scala 91:21]
  wire  e_wbu_clock; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_reset; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_io_in_ready; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_io_in_valid; // @[ysyx_25030077.scala 92:21]
  wire [4:0] e_wbu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 92:21]
  wire [31:0] e_wbu_io_in_bits_rd_data; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_io_in_bits_is_err1; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_io_in_bits_is_err2; // @[ysyx_25030077.scala 92:21]
  wire [4:0] e_wbu_io_rd_addr; // @[ysyx_25030077.scala 92:21]
  wire [31:0] e_wbu_io_rd_data; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_io_rd_valid; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_io_out_ready; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_io_out_valid; // @[ysyx_25030077.scala 92:21]
  wire  e_wbu_io_state; // @[ysyx_25030077.scala 92:21]
  wire  f_arbiter_clock; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_reset; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_ar_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_IFU_ar_addr; // @[ysyx_25030077.scala 93:25]
  wire [1:0] f_arbiter_io_IFU_ar_brust; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_ar_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_r_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_r_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_IFU_r_data; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_b_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_b_valid; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_aw_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_IFU_aw_addr; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_aw_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_w_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_IFU_w_data; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_IFU_w_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_ar_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_LSU_ar_addr; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_ar_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_r_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_r_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_LSU_r_data; // @[ysyx_25030077.scala 93:25]
  wire [3:0] f_arbiter_io_LSU_rw_type; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_b_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_b_valid; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_aw_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_LSU_aw_addr; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_aw_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_w_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_LSU_w_data; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_LSU_w_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_ar_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_axi_ar_addr; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_ar_ready; // @[ysyx_25030077.scala 93:25]
  wire [3:0] f_arbiter_io_axi_ar_id; // @[ysyx_25030077.scala 93:25]
  wire [7:0] f_arbiter_io_axi_ar_len; // @[ysyx_25030077.scala 93:25]
  wire [2:0] f_arbiter_io_axi_ar_size; // @[ysyx_25030077.scala 93:25]
  wire [1:0] f_arbiter_io_axi_ar_burst; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_aw_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_axi_aw_addr; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_aw_ready; // @[ysyx_25030077.scala 93:25]
  wire [3:0] f_arbiter_io_axi_aw_id; // @[ysyx_25030077.scala 93:25]
  wire [7:0] f_arbiter_io_axi_aw_len; // @[ysyx_25030077.scala 93:25]
  wire [2:0] f_arbiter_io_axi_aw_size; // @[ysyx_25030077.scala 93:25]
  wire [1:0] f_arbiter_io_axi_aw_burst; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_w_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_axi_w_data; // @[ysyx_25030077.scala 93:25]
  wire [3:0] f_arbiter_io_axi_w_strb; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_w_ready; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_w_last; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_r_valid; // @[ysyx_25030077.scala 93:25]
  wire [31:0] f_arbiter_io_axi_r_data; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_r_ready; // @[ysyx_25030077.scala 93:25]
  wire [1:0] f_arbiter_io_axi_r_resp; // @[ysyx_25030077.scala 93:25]
  wire [3:0] f_arbiter_io_axi_r_id; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_r_last; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_b_valid; // @[ysyx_25030077.scala 93:25]
  wire  f_arbiter_io_axi_b_ready; // @[ysyx_25030077.scala 93:25]
  wire [1:0] f_arbiter_io_axi_b_resp; // @[ysyx_25030077.scala 93:25]
  wire [3:0] f_arbiter_io_axi_b_id; // @[ysyx_25030077.scala 93:25]
  wire  _b_idu_io_in_bits_T = a_ifu_io_out_valid & b_idu_io_in_ready; // @[ChiselHelpers.scala.scala 27:58]
  reg [31:0] b_idu_io_in_bits_r_pc; // @[Reg.scala 16:16]
  reg [31:0] b_idu_io_in_bits_r_inst; // @[Reg.scala 16:16]
  reg  b_idu_io_in_bits_r_is_err1; // @[Reg.scala 16:16]
  wire  _c_exu_io_in_bits_T = b_idu_io_out_valid & c_exu_io_in_ready; // @[ChiselHelpers.scala.scala 27:58]
  reg [3:0] c_exu_io_in_bits_r_exu_type; // @[Reg.scala 16:16]
  reg [3:0] c_exu_io_in_bits_r_data_type; // @[Reg.scala 16:16]
  reg [3:0] c_exu_io_in_bits_r_pc_next_type; // @[Reg.scala 16:16]
  reg [4:0] c_exu_io_in_bits_r_rd_addr; // @[Reg.scala 16:16]
  reg [3:0] c_exu_io_in_bits_r_LSU_type; // @[Reg.scala 16:16]
  reg [31:0] c_exu_io_in_bits_r_rs1_data; // @[Reg.scala 16:16]
  reg [31:0] c_exu_io_in_bits_r_rs2_data; // @[Reg.scala 16:16]
  reg [31:0] c_exu_io_in_bits_r_imm_data; // @[Reg.scala 16:16]
  reg [31:0] c_exu_io_in_bits_r_pc_data; // @[Reg.scala 16:16]
  reg  c_exu_io_in_bits_r_is_err1; // @[Reg.scala 16:16]
  reg  c_exu_io_in_bits_r_is_err2; // @[Reg.scala 16:16]
  wire  _d_lsu_io_in_bits_T = c_exu_io_out_valid & d_lsu_io_in_ready; // @[ChiselHelpers.scala.scala 27:58]
  reg [31:0] d_lsu_io_in_bits_r_result; // @[Reg.scala 16:16]
  reg [4:0] d_lsu_io_in_bits_r_rd_addr; // @[Reg.scala 16:16]
  reg [3:0] d_lsu_io_in_bits_r_LSU_type; // @[Reg.scala 16:16]
  reg [31:0] d_lsu_io_in_bits_r_rs2_data; // @[Reg.scala 16:16]
  reg  d_lsu_io_in_bits_r_is_err1; // @[Reg.scala 16:16]
  reg  d_lsu_io_in_bits_r_is_err2; // @[Reg.scala 16:16]
  wire  _e_wbu_io_in_bits_T = d_lsu_io_out_valid & e_wbu_io_in_ready; // @[ChiselHelpers.scala.scala 27:58]
  reg [4:0] e_wbu_io_in_bits_r_rd_addr; // @[Reg.scala 16:16]
  reg [31:0] e_wbu_io_in_bits_r_rd_data; // @[Reg.scala 16:16]
  reg  e_wbu_io_in_bits_r_is_err1; // @[Reg.scala 16:16]
  reg  e_wbu_io_in_bits_r_is_err2; // @[Reg.scala 16:16]
  wire  _b_idu_io_EXU_rd_T = c_exu_io_in_bits_is_err1 | c_exu_io_in_bits_is_err2; // @[ysyx_25030077.scala 128:54]
  reg  err1_reg; // @[ysyx_25030077.scala 223:25]
  reg  err2_reg; // @[ysyx_25030077.scala 224:25]
  reg [31:0] pc_fix_reg; // @[ysyx_25030077.scala 225:27]
  wire  _err1_reg_T_1 = a_ifu_io_out_ready & a_ifu_io_out_valid; // @[ysyx_25030077.scala 228:55]
  wire  _err1_reg_T_3 = ~err1_reg; // @[ysyx_25030077.scala 229:15]
  wire  _err1_reg_T_4 = c_exu_io_is_err; // @[ysyx_25030077.scala 229:34]
  wire  _err2_reg_T_3 = ~err2_reg; // @[ysyx_25030077.scala 234:15]
  reg [31:0] pc; // @[ysyx_25030077.scala 239:19]
  wire [31:0] _pc_T_2 = pc + 32'h4; // @[ysyx_25030077.scala 240:84]
  ysyx_25030077_IFU a_ifu ( // @[ysyx_25030077.scala 87:21]
    .clock(a_ifu_clock),
    .reset(a_ifu_reset),
    .io_err1_in(a_ifu_io_err1_in),
    .io_pc(a_ifu_io_pc),
    .io_out_ready(a_ifu_io_out_ready),
    .io_out_valid(a_ifu_io_out_valid),
    .io_out_bits_pc(a_ifu_io_out_bits_pc),
    .io_out_bits_inst(a_ifu_io_out_bits_inst),
    .io_out_bits_is_err1(a_ifu_io_out_bits_is_err1),
    .io_ar_addr(a_ifu_io_ar_addr),
    .io_ar_valid(a_ifu_io_ar_valid),
    .io_ar_ready(a_ifu_io_ar_ready),
    .io_ar_burst(a_ifu_io_ar_burst),
    .io_r_valid(a_ifu_io_r_valid),
    .io_r_data(a_ifu_io_r_data),
    .io_r_ready(a_ifu_io_r_ready),
    .io_b_valid(a_ifu_io_b_valid),
    .io_b_ready(a_ifu_io_b_ready),
    .io_aw_valid(a_ifu_io_aw_valid),
    .io_aw_addr(a_ifu_io_aw_addr),
    .io_aw_ready(a_ifu_io_aw_ready),
    .io_w_valid(a_ifu_io_w_valid),
    .io_w_data(a_ifu_io_w_data),
    .io_w_ready(a_ifu_io_w_ready)
  );
  ysyx_25030077_IDU b_idu ( // @[ysyx_25030077.scala 88:21]
    .clock(b_idu_clock),
    .reset(b_idu_reset),
    .io_in_ready(b_idu_io_in_ready),
    .io_in_valid(b_idu_io_in_valid),
    .io_in_bits_pc(b_idu_io_in_bits_pc),
    .io_in_bits_inst(b_idu_io_in_bits_inst),
    .io_in_bits_is_err1(b_idu_io_in_bits_is_err1),
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
    .io_out_bits_is_err1(b_idu_io_out_bits_is_err1),
    .io_out_bits_is_err2(b_idu_io_out_bits_is_err2),
    .io_rs1_addr(b_idu_io_rs1_addr),
    .io_rs2_addr(b_idu_io_rs2_addr),
    .io_rs1_data(b_idu_io_rs1_data),
    .io_rs2_data(b_idu_io_rs2_data),
    .io_EXU_rd(b_idu_io_EXU_rd),
    .io_LSU_rd(b_idu_io_LSU_rd),
    .io_WBU_rd(b_idu_io_WBU_rd),
    .io_EXU_state(b_idu_io_EXU_state),
    .io_LSU_state(b_idu_io_LSU_state),
    .io_WBU_state(b_idu_io_WBU_state),
    .io_err2_in(b_idu_io_err2_in)
  );
  ysyx_25030077_gpr g_gpr ( // @[ysyx_25030077.scala 89:21]
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
  ysyx_25030077_EXU c_exu ( // @[ysyx_25030077.scala 90:21]
    .clock(c_exu_clock),
    .reset(c_exu_reset),
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
    .io_in_bits_is_err1(c_exu_io_in_bits_is_err1),
    .io_in_bits_is_err2(c_exu_io_in_bits_is_err2),
    .io_out_ready(c_exu_io_out_ready),
    .io_out_valid(c_exu_io_out_valid),
    .io_out_bits_result(c_exu_io_out_bits_result),
    .io_out_bits_rd_addr(c_exu_io_out_bits_rd_addr),
    .io_out_bits_LSU_type(c_exu_io_out_bits_LSU_type),
    .io_out_bits_rs2_data(c_exu_io_out_bits_rs2_data),
    .io_out_bits_is_err1(c_exu_io_out_bits_is_err1),
    .io_out_bits_is_err2(c_exu_io_out_bits_is_err2),
    .io_pc_next(c_exu_io_pc_next),
    .io_is_err(c_exu_io_is_err),
    .io_state(c_exu_io_state)
  );
  ysyx_25030077_LSU d_lsu ( // @[ysyx_25030077.scala 91:21]
    .clock(d_lsu_clock),
    .reset(d_lsu_reset),
    .io_in_ready(d_lsu_io_in_ready),
    .io_in_valid(d_lsu_io_in_valid),
    .io_in_bits_result(d_lsu_io_in_bits_result),
    .io_in_bits_rd_addr(d_lsu_io_in_bits_rd_addr),
    .io_in_bits_LSU_type(d_lsu_io_in_bits_LSU_type),
    .io_in_bits_rs2_data(d_lsu_io_in_bits_rs2_data),
    .io_in_bits_is_err1(d_lsu_io_in_bits_is_err1),
    .io_in_bits_is_err2(d_lsu_io_in_bits_is_err2),
    .io_out_ready(d_lsu_io_out_ready),
    .io_out_valid(d_lsu_io_out_valid),
    .io_out_bits_rd_addr(d_lsu_io_out_bits_rd_addr),
    .io_out_bits_rd_data(d_lsu_io_out_bits_rd_data),
    .io_out_bits_is_err1(d_lsu_io_out_bits_is_err1),
    .io_out_bits_is_err2(d_lsu_io_out_bits_is_err2),
    .io_state(d_lsu_io_state),
    .io_ar_addr(d_lsu_io_ar_addr),
    .io_ar_ready(d_lsu_io_ar_ready),
    .io_ar_valid(d_lsu_io_ar_valid),
    .io_r_valid(d_lsu_io_r_valid),
    .io_r_data(d_lsu_io_r_data),
    .io_r_ready(d_lsu_io_r_ready),
    .io_b_valid(d_lsu_io_b_valid),
    .io_b_ready(d_lsu_io_b_ready),
    .io_aw_valid(d_lsu_io_aw_valid),
    .io_aw_addr(d_lsu_io_aw_addr),
    .io_aw_ready(d_lsu_io_aw_ready),
    .io_w_valid(d_lsu_io_w_valid),
    .io_w_data(d_lsu_io_w_data),
    .io_w_ready(d_lsu_io_w_ready),
    .io_rw_type(d_lsu_io_rw_type)
  );
  ysyx_25030077_WBU e_wbu ( // @[ysyx_25030077.scala 92:21]
    .clock(e_wbu_clock),
    .reset(e_wbu_reset),
    .io_in_ready(e_wbu_io_in_ready),
    .io_in_valid(e_wbu_io_in_valid),
    .io_in_bits_rd_addr(e_wbu_io_in_bits_rd_addr),
    .io_in_bits_rd_data(e_wbu_io_in_bits_rd_data),
    .io_in_bits_is_err1(e_wbu_io_in_bits_is_err1),
    .io_in_bits_is_err2(e_wbu_io_in_bits_is_err2),
    .io_rd_addr(e_wbu_io_rd_addr),
    .io_rd_data(e_wbu_io_rd_data),
    .io_rd_valid(e_wbu_io_rd_valid),
    .io_out_ready(e_wbu_io_out_ready),
    .io_out_valid(e_wbu_io_out_valid),
    .io_state(e_wbu_io_state)
  );
  ysyx_25030077_arbiter f_arbiter ( // @[ysyx_25030077.scala 93:25]
    .clock(f_arbiter_clock),
    .reset(f_arbiter_reset),
    .io_IFU_ar_valid(f_arbiter_io_IFU_ar_valid),
    .io_IFU_ar_addr(f_arbiter_io_IFU_ar_addr),
    .io_IFU_ar_brust(f_arbiter_io_IFU_ar_brust),
    .io_IFU_ar_ready(f_arbiter_io_IFU_ar_ready),
    .io_IFU_r_ready(f_arbiter_io_IFU_r_ready),
    .io_IFU_r_valid(f_arbiter_io_IFU_r_valid),
    .io_IFU_r_data(f_arbiter_io_IFU_r_data),
    .io_IFU_b_ready(f_arbiter_io_IFU_b_ready),
    .io_IFU_b_valid(f_arbiter_io_IFU_b_valid),
    .io_IFU_aw_valid(f_arbiter_io_IFU_aw_valid),
    .io_IFU_aw_addr(f_arbiter_io_IFU_aw_addr),
    .io_IFU_aw_ready(f_arbiter_io_IFU_aw_ready),
    .io_IFU_w_valid(f_arbiter_io_IFU_w_valid),
    .io_IFU_w_data(f_arbiter_io_IFU_w_data),
    .io_IFU_w_ready(f_arbiter_io_IFU_w_ready),
    .io_LSU_ar_valid(f_arbiter_io_LSU_ar_valid),
    .io_LSU_ar_addr(f_arbiter_io_LSU_ar_addr),
    .io_LSU_ar_ready(f_arbiter_io_LSU_ar_ready),
    .io_LSU_r_ready(f_arbiter_io_LSU_r_ready),
    .io_LSU_r_valid(f_arbiter_io_LSU_r_valid),
    .io_LSU_r_data(f_arbiter_io_LSU_r_data),
    .io_LSU_rw_type(f_arbiter_io_LSU_rw_type),
    .io_LSU_b_ready(f_arbiter_io_LSU_b_ready),
    .io_LSU_b_valid(f_arbiter_io_LSU_b_valid),
    .io_LSU_aw_valid(f_arbiter_io_LSU_aw_valid),
    .io_LSU_aw_addr(f_arbiter_io_LSU_aw_addr),
    .io_LSU_aw_ready(f_arbiter_io_LSU_aw_ready),
    .io_LSU_w_valid(f_arbiter_io_LSU_w_valid),
    .io_LSU_w_data(f_arbiter_io_LSU_w_data),
    .io_LSU_w_ready(f_arbiter_io_LSU_w_ready),
    .io_axi_ar_valid(f_arbiter_io_axi_ar_valid),
    .io_axi_ar_addr(f_arbiter_io_axi_ar_addr),
    .io_axi_ar_ready(f_arbiter_io_axi_ar_ready),
    .io_axi_ar_id(f_arbiter_io_axi_ar_id),
    .io_axi_ar_len(f_arbiter_io_axi_ar_len),
    .io_axi_ar_size(f_arbiter_io_axi_ar_size),
    .io_axi_ar_burst(f_arbiter_io_axi_ar_burst),
    .io_axi_aw_valid(f_arbiter_io_axi_aw_valid),
    .io_axi_aw_addr(f_arbiter_io_axi_aw_addr),
    .io_axi_aw_ready(f_arbiter_io_axi_aw_ready),
    .io_axi_aw_id(f_arbiter_io_axi_aw_id),
    .io_axi_aw_len(f_arbiter_io_axi_aw_len),
    .io_axi_aw_size(f_arbiter_io_axi_aw_size),
    .io_axi_aw_burst(f_arbiter_io_axi_aw_burst),
    .io_axi_w_valid(f_arbiter_io_axi_w_valid),
    .io_axi_w_data(f_arbiter_io_axi_w_data),
    .io_axi_w_strb(f_arbiter_io_axi_w_strb),
    .io_axi_w_ready(f_arbiter_io_axi_w_ready),
    .io_axi_w_last(f_arbiter_io_axi_w_last),
    .io_axi_r_valid(f_arbiter_io_axi_r_valid),
    .io_axi_r_data(f_arbiter_io_axi_r_data),
    .io_axi_r_ready(f_arbiter_io_axi_r_ready),
    .io_axi_r_resp(f_arbiter_io_axi_r_resp),
    .io_axi_r_id(f_arbiter_io_axi_r_id),
    .io_axi_r_last(f_arbiter_io_axi_r_last),
    .io_axi_b_valid(f_arbiter_io_axi_b_valid),
    .io_axi_b_ready(f_arbiter_io_axi_b_ready),
    .io_axi_b_resp(f_arbiter_io_axi_b_resp),
    .io_axi_b_id(f_arbiter_io_axi_b_id)
  );
  assign io_master_awvalid = f_arbiter_io_axi_aw_valid; // @[ysyx_25030077.scala 184:21]
  assign io_master_awaddr = f_arbiter_io_axi_aw_addr; // @[ysyx_25030077.scala 185:20]
  assign io_master_awid = f_arbiter_io_axi_aw_id; // @[ysyx_25030077.scala 186:18]
  assign io_master_awlen = f_arbiter_io_axi_aw_len; // @[ysyx_25030077.scala 187:19]
  assign io_master_awsize = f_arbiter_io_axi_aw_size; // @[ysyx_25030077.scala 188:20]
  assign io_master_awburst = f_arbiter_io_axi_aw_burst; // @[ysyx_25030077.scala 189:21]
  assign io_master_wvalid = f_arbiter_io_axi_w_valid; // @[ysyx_25030077.scala 190:20]
  assign io_master_wdata = f_arbiter_io_axi_w_data; // @[ysyx_25030077.scala 191:19]
  assign io_master_wstrb = f_arbiter_io_axi_w_strb; // @[ysyx_25030077.scala 192:19]
  assign io_master_wlast = f_arbiter_io_axi_w_last; // @[ysyx_25030077.scala 193:19]
  assign io_master_bready = f_arbiter_io_axi_b_ready; // @[ysyx_25030077.scala 194:20]
  assign io_master_arvalid = f_arbiter_io_axi_ar_valid; // @[ysyx_25030077.scala 195:21]
  assign io_master_araddr = f_arbiter_io_axi_ar_addr; // @[ysyx_25030077.scala 196:20]
  assign io_master_arid = f_arbiter_io_axi_ar_id; // @[ysyx_25030077.scala 197:18]
  assign io_master_arlen = f_arbiter_io_axi_ar_len; // @[ysyx_25030077.scala 198:19]
  assign io_master_arsize = f_arbiter_io_axi_ar_size; // @[ysyx_25030077.scala 199:20]
  assign io_master_arburst = f_arbiter_io_axi_ar_burst; // @[ysyx_25030077.scala 200:21]
  assign io_master_rready = f_arbiter_io_axi_r_ready; // @[ysyx_25030077.scala 201:20]
  assign io_master_arlock = 1'h0; // @[ysyx_25030077.scala 203:20]
  assign io_master_arcache = 4'h0; // @[ysyx_25030077.scala 204:21]
  assign io_master_arprot = 3'h0; // @[ysyx_25030077.scala 205:20]
  assign io_master_arqos = 4'h0; // @[ysyx_25030077.scala 206:19]
  assign io_master_awlock = 1'h0; // @[ysyx_25030077.scala 207:20]
  assign io_master_awcache = 4'h0; // @[ysyx_25030077.scala 208:21]
  assign io_master_awprot = 3'h0; // @[ysyx_25030077.scala 209:20]
  assign io_master_awqos = 4'h0; // @[ysyx_25030077.scala 210:19]
  assign io_slave_awready = 1'h0; // @[ysyx_25030077.scala 211:20]
  assign io_slave_wready = 1'h0; // @[ysyx_25030077.scala 212:19]
  assign io_slave_bvalid = 1'h0; // @[ysyx_25030077.scala 213:19]
  assign io_slave_bid = 4'h0; // @[ysyx_25030077.scala 214:16]
  assign io_slave_bresp = 2'h0; // @[ysyx_25030077.scala 215:18]
  assign io_slave_arready = 1'h0; // @[ysyx_25030077.scala 216:20]
  assign io_slave_rvalid = 1'h0; // @[ysyx_25030077.scala 217:19]
  assign io_slave_rdata = 32'h0; // @[ysyx_25030077.scala 218:18]
  assign io_slave_rid = 4'h0; // @[ysyx_25030077.scala 219:16]
  assign io_slave_rlast = 1'h0; // @[ysyx_25030077.scala 220:18]
  assign io_slave_rresp = 2'h0; // @[ysyx_25030077.scala 221:18]
  assign a_ifu_clock = clock;
  assign a_ifu_reset = reset;
  assign a_ifu_io_err1_in = err1_reg; // @[ysyx_25030077.scala 242:20]
  assign a_ifu_io_pc = pc; // @[ysyx_25030077.scala 241:15]
  assign a_ifu_io_out_ready = b_idu_io_in_ready; // @[ChiselHelpers.scala.scala 23:19]
  assign a_ifu_io_ar_ready = f_arbiter_io_IFU_ar_ready; // @[ysyx_25030077.scala 119:21]
  assign a_ifu_io_r_valid = f_arbiter_io_IFU_r_valid; // @[ysyx_25030077.scala 120:21]
  assign a_ifu_io_r_data = f_arbiter_io_IFU_r_data; // @[ysyx_25030077.scala 121:21]
  assign a_ifu_io_b_valid = f_arbiter_io_IFU_b_valid; // @[ysyx_25030077.scala 122:21]
  assign a_ifu_io_aw_ready = f_arbiter_io_IFU_aw_ready; // @[ysyx_25030077.scala 123:21]
  assign a_ifu_io_w_ready = f_arbiter_io_IFU_w_ready; // @[ysyx_25030077.scala 124:21]
  assign b_idu_clock = clock;
  assign b_idu_reset = reset;
  assign b_idu_io_in_valid = a_ifu_io_out_valid; // @[ChiselHelpers.scala.scala 25:18]
  assign b_idu_io_in_bits_pc = b_idu_io_in_bits_r_pc; // @[ChiselHelpers.scala.scala 27:17]
  assign b_idu_io_in_bits_inst = b_idu_io_in_bits_r_inst; // @[ChiselHelpers.scala.scala 27:17]
  assign b_idu_io_in_bits_is_err1 = b_idu_io_in_bits_r_is_err1; // @[ChiselHelpers.scala.scala 27:17]
  assign b_idu_io_out_ready = c_exu_io_in_ready; // @[ChiselHelpers.scala.scala 23:19]
  assign b_idu_io_rs1_data = g_gpr_io_rdata_rs1; // @[ysyx_25030077.scala 126:21]
  assign b_idu_io_rs2_data = g_gpr_io_rdata_rs2; // @[ysyx_25030077.scala 127:21]
  assign b_idu_io_EXU_rd = c_exu_io_in_bits_is_err1 | c_exu_io_in_bits_is_err2 ? 5'h0 : c_exu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 128:27]
  assign b_idu_io_LSU_rd = _b_idu_io_EXU_rd_T ? 5'h0 : d_lsu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 129:27]
  assign b_idu_io_WBU_rd = _b_idu_io_EXU_rd_T ? 5'h0 : e_wbu_io_in_bits_rd_addr; // @[ysyx_25030077.scala 130:27]
  assign b_idu_io_EXU_state = c_exu_io_state; // @[ysyx_25030077.scala 133:22]
  assign b_idu_io_LSU_state = d_lsu_io_state; // @[ysyx_25030077.scala 134:22]
  assign b_idu_io_WBU_state = e_wbu_io_state; // @[ysyx_25030077.scala 135:22]
  assign b_idu_io_err2_in = err2_reg; // @[ysyx_25030077.scala 243:20]
  assign g_gpr_clock = clock;
  assign g_gpr_reset = reset;
  assign g_gpr_io_rs1_addr = b_idu_io_rs1_addr; // @[ysyx_25030077.scala 144:21]
  assign g_gpr_io_rs2_addr = b_idu_io_rs2_addr; // @[ysyx_25030077.scala 145:21]
  assign g_gpr_io_rd_addr = e_wbu_io_rd_addr; // @[ysyx_25030077.scala 147:21]
  assign g_gpr_io_rd_data = e_wbu_io_rd_data; // @[ysyx_25030077.scala 148:21]
  assign g_gpr_io_rd_valid = e_wbu_io_rd_valid; // @[ysyx_25030077.scala 149:21]
  assign c_exu_clock = clock;
  assign c_exu_reset = reset;
  assign c_exu_io_in_valid = b_idu_io_out_valid; // @[ChiselHelpers.scala.scala 25:18]
  assign c_exu_io_in_bits_exu_type = c_exu_io_in_bits_r_exu_type; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_data_type = c_exu_io_in_bits_r_data_type; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_pc_next_type = c_exu_io_in_bits_r_pc_next_type; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_rd_addr = c_exu_io_in_bits_r_rd_addr; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_LSU_type = c_exu_io_in_bits_r_LSU_type; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_rs1_data = c_exu_io_in_bits_r_rs1_data; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_rs2_data = c_exu_io_in_bits_r_rs2_data; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_imm_data = c_exu_io_in_bits_r_imm_data; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_pc_data = c_exu_io_in_bits_r_pc_data; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_is_err1 = c_exu_io_in_bits_r_is_err1; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_in_bits_is_err2 = c_exu_io_in_bits_r_is_err2; // @[ChiselHelpers.scala.scala 27:17]
  assign c_exu_io_out_ready = d_lsu_io_in_ready; // @[ChiselHelpers.scala.scala 23:19]
  assign d_lsu_clock = clock;
  assign d_lsu_reset = reset;
  assign d_lsu_io_in_valid = c_exu_io_out_valid; // @[ChiselHelpers.scala.scala 25:18]
  assign d_lsu_io_in_bits_result = d_lsu_io_in_bits_r_result; // @[ChiselHelpers.scala.scala 27:17]
  assign d_lsu_io_in_bits_rd_addr = d_lsu_io_in_bits_r_rd_addr; // @[ChiselHelpers.scala.scala 27:17]
  assign d_lsu_io_in_bits_LSU_type = d_lsu_io_in_bits_r_LSU_type; // @[ChiselHelpers.scala.scala 27:17]
  assign d_lsu_io_in_bits_rs2_data = d_lsu_io_in_bits_r_rs2_data; // @[ChiselHelpers.scala.scala 27:17]
  assign d_lsu_io_in_bits_is_err1 = d_lsu_io_in_bits_r_is_err1; // @[ChiselHelpers.scala.scala 27:17]
  assign d_lsu_io_in_bits_is_err2 = d_lsu_io_in_bits_r_is_err2; // @[ChiselHelpers.scala.scala 27:17]
  assign d_lsu_io_out_ready = e_wbu_io_in_ready; // @[ChiselHelpers.scala.scala 23:19]
  assign d_lsu_io_ar_ready = f_arbiter_io_LSU_ar_ready; // @[ysyx_25030077.scala 137:21]
  assign d_lsu_io_r_valid = f_arbiter_io_LSU_r_valid; // @[ysyx_25030077.scala 138:21]
  assign d_lsu_io_r_data = f_arbiter_io_LSU_r_data; // @[ysyx_25030077.scala 139:21]
  assign d_lsu_io_b_valid = f_arbiter_io_LSU_b_valid; // @[ysyx_25030077.scala 140:21]
  assign d_lsu_io_aw_ready = f_arbiter_io_LSU_aw_ready; // @[ysyx_25030077.scala 141:21]
  assign d_lsu_io_w_ready = f_arbiter_io_LSU_w_ready; // @[ysyx_25030077.scala 142:21]
  assign e_wbu_clock = clock;
  assign e_wbu_reset = reset;
  assign e_wbu_io_in_valid = d_lsu_io_out_valid; // @[ChiselHelpers.scala.scala 25:18]
  assign e_wbu_io_in_bits_rd_addr = e_wbu_io_in_bits_r_rd_addr; // @[ChiselHelpers.scala.scala 27:17]
  assign e_wbu_io_in_bits_rd_data = e_wbu_io_in_bits_r_rd_data; // @[ChiselHelpers.scala.scala 27:17]
  assign e_wbu_io_in_bits_is_err1 = e_wbu_io_in_bits_r_is_err1; // @[ChiselHelpers.scala.scala 27:17]
  assign e_wbu_io_in_bits_is_err2 = e_wbu_io_in_bits_r_is_err2; // @[ChiselHelpers.scala.scala 27:17]
  assign e_wbu_io_out_ready = 1'h1; // @[ysyx_25030077.scala 151:22]
  assign f_arbiter_clock = clock;
  assign f_arbiter_reset = reset;
  assign f_arbiter_io_IFU_ar_valid = a_ifu_io_ar_valid; // @[ysyx_25030077.scala 154:28]
  assign f_arbiter_io_IFU_ar_addr = a_ifu_io_ar_addr; // @[ysyx_25030077.scala 153:28]
  assign f_arbiter_io_IFU_ar_brust = a_ifu_io_ar_burst; // @[ysyx_25030077.scala 155:28]
  assign f_arbiter_io_IFU_r_ready = a_ifu_io_r_ready; // @[ysyx_25030077.scala 158:28]
  assign f_arbiter_io_IFU_b_ready = a_ifu_io_b_ready; // @[ysyx_25030077.scala 170:28]
  assign f_arbiter_io_IFU_aw_valid = a_ifu_io_aw_valid; // @[ysyx_25030077.scala 163:28]
  assign f_arbiter_io_IFU_aw_addr = a_ifu_io_aw_addr; // @[ysyx_25030077.scala 162:28]
  assign f_arbiter_io_IFU_w_valid = a_ifu_io_w_valid; // @[ysyx_25030077.scala 167:28]
  assign f_arbiter_io_IFU_w_data = a_ifu_io_w_data; // @[ysyx_25030077.scala 166:28]
  assign f_arbiter_io_LSU_ar_valid = d_lsu_io_ar_valid; // @[ysyx_25030077.scala 157:28]
  assign f_arbiter_io_LSU_ar_addr = d_lsu_io_ar_addr; // @[ysyx_25030077.scala 156:28]
  assign f_arbiter_io_LSU_r_ready = d_lsu_io_r_ready; // @[ysyx_25030077.scala 159:28]
  assign f_arbiter_io_LSU_rw_type = d_lsu_io_rw_type; // @[ysyx_25030077.scala 168:28]
  assign f_arbiter_io_LSU_b_ready = d_lsu_io_b_ready; // @[ysyx_25030077.scala 169:28]
  assign f_arbiter_io_LSU_aw_valid = d_lsu_io_aw_valid; // @[ysyx_25030077.scala 161:28]
  assign f_arbiter_io_LSU_aw_addr = d_lsu_io_aw_addr; // @[ysyx_25030077.scala 160:28]
  assign f_arbiter_io_LSU_w_valid = d_lsu_io_w_valid; // @[ysyx_25030077.scala 165:28]
  assign f_arbiter_io_LSU_w_data = d_lsu_io_w_data; // @[ysyx_25030077.scala 164:28]
  assign f_arbiter_io_axi_ar_ready = io_master_arready; // @[ysyx_25030077.scala 172:29]
  assign f_arbiter_io_axi_aw_ready = io_master_awready; // @[ysyx_25030077.scala 173:29]
  assign f_arbiter_io_axi_w_ready = io_master_wready; // @[ysyx_25030077.scala 174:28]
  assign f_arbiter_io_axi_r_valid = io_master_rvalid; // @[ysyx_25030077.scala 175:28]
  assign f_arbiter_io_axi_r_data = io_master_rdata; // @[ysyx_25030077.scala 176:27]
  assign f_arbiter_io_axi_r_resp = io_master_rresp; // @[ysyx_25030077.scala 177:27]
  assign f_arbiter_io_axi_r_id = io_master_rid; // @[ysyx_25030077.scala 178:25]
  assign f_arbiter_io_axi_r_last = io_master_rlast; // @[ysyx_25030077.scala 179:27]
  assign f_arbiter_io_axi_b_valid = io_master_bvalid; // @[ysyx_25030077.scala 180:28]
  assign f_arbiter_io_axi_b_resp = io_master_bresp; // @[ysyx_25030077.scala 181:27]
  assign f_arbiter_io_axi_b_id = io_master_bid; // @[ysyx_25030077.scala 182:25]
  always @(posedge clock) begin
    if (_b_idu_io_in_bits_T) begin // @[Reg.scala 17:18]
      b_idu_io_in_bits_r_pc <= a_ifu_io_out_bits_pc; // @[Reg.scala 17:22]
    end
    if (_b_idu_io_in_bits_T) begin // @[Reg.scala 17:18]
      b_idu_io_in_bits_r_inst <= a_ifu_io_out_bits_inst; // @[Reg.scala 17:22]
    end
    if (_b_idu_io_in_bits_T) begin // @[Reg.scala 17:18]
      b_idu_io_in_bits_r_is_err1 <= a_ifu_io_out_bits_is_err1; // @[Reg.scala 17:22]
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
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_is_err1 <= b_idu_io_out_bits_is_err1; // @[Reg.scala 17:22]
    end
    if (_c_exu_io_in_bits_T) begin // @[Reg.scala 17:18]
      c_exu_io_in_bits_r_is_err2 <= b_idu_io_out_bits_is_err2; // @[Reg.scala 17:22]
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
    if (_d_lsu_io_in_bits_T) begin // @[Reg.scala 17:18]
      d_lsu_io_in_bits_r_is_err1 <= c_exu_io_out_bits_is_err1; // @[Reg.scala 17:22]
    end
    if (_d_lsu_io_in_bits_T) begin // @[Reg.scala 17:18]
      d_lsu_io_in_bits_r_is_err2 <= c_exu_io_out_bits_is_err2; // @[Reg.scala 17:22]
    end
    if (_e_wbu_io_in_bits_T) begin // @[Reg.scala 17:18]
      e_wbu_io_in_bits_r_rd_addr <= d_lsu_io_out_bits_rd_addr; // @[Reg.scala 17:22]
    end
    if (_e_wbu_io_in_bits_T) begin // @[Reg.scala 17:18]
      e_wbu_io_in_bits_r_rd_data <= d_lsu_io_out_bits_rd_data; // @[Reg.scala 17:22]
    end
    if (_e_wbu_io_in_bits_T) begin // @[Reg.scala 17:18]
      e_wbu_io_in_bits_r_is_err1 <= d_lsu_io_out_bits_is_err1; // @[Reg.scala 17:22]
    end
    if (_e_wbu_io_in_bits_T) begin // @[Reg.scala 17:18]
      e_wbu_io_in_bits_r_is_err2 <= d_lsu_io_out_bits_is_err2; // @[Reg.scala 17:22]
    end
    if (reset) begin // @[ysyx_25030077.scala 223:25]
      err1_reg <= 1'h0; // @[ysyx_25030077.scala 223:25]
    end else if (err1_reg) begin // @[Mux.scala 101:16]
      if (a_ifu_io_out_ready & a_ifu_io_out_valid) begin // @[ysyx_25030077.scala 228:34]
        err1_reg <= 1'h0;
      end else begin
        err1_reg <= 1'h1;
      end
    end else begin
      err1_reg <= _err1_reg_T_3 & _err1_reg_T_4;
    end
    if (reset) begin // @[ysyx_25030077.scala 224:25]
      err2_reg <= 1'h0; // @[ysyx_25030077.scala 224:25]
    end else if (err2_reg) begin // @[Mux.scala 101:16]
      if (b_idu_io_out_ready & b_idu_io_out_valid) begin // @[ysyx_25030077.scala 233:34]
        err2_reg <= 1'h0;
      end else begin
        err2_reg <= 1'h1;
      end
    end else begin
      err2_reg <= _err2_reg_T_3 & _err1_reg_T_4;
    end
    if (reset) begin // @[ysyx_25030077.scala 225:27]
      pc_fix_reg <= 32'h0; // @[ysyx_25030077.scala 225:27]
    end else if (c_exu_io_is_err) begin // @[ysyx_25030077.scala 237:20]
      pc_fix_reg <= c_exu_io_pc_next;
    end
    if (reset) begin // @[ysyx_25030077.scala 239:19]
      pc <= 32'h30000000; // @[ysyx_25030077.scala 239:19]
    end else if (_err1_reg_T_1) begin // @[ysyx_25030077.scala 240:12]
      if (err1_reg) begin // @[ysyx_25030077.scala 240:58]
        pc <= pc_fix_reg;
      end else begin
        pc <= _pc_T_2;
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
  b_idu_io_in_bits_r_pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  b_idu_io_in_bits_r_inst = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  b_idu_io_in_bits_r_is_err1 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  c_exu_io_in_bits_r_exu_type = _RAND_3[3:0];
  _RAND_4 = {1{`RANDOM}};
  c_exu_io_in_bits_r_data_type = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  c_exu_io_in_bits_r_pc_next_type = _RAND_5[3:0];
  _RAND_6 = {1{`RANDOM}};
  c_exu_io_in_bits_r_rd_addr = _RAND_6[4:0];
  _RAND_7 = {1{`RANDOM}};
  c_exu_io_in_bits_r_LSU_type = _RAND_7[3:0];
  _RAND_8 = {1{`RANDOM}};
  c_exu_io_in_bits_r_rs1_data = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  c_exu_io_in_bits_r_rs2_data = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  c_exu_io_in_bits_r_imm_data = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  c_exu_io_in_bits_r_pc_data = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  c_exu_io_in_bits_r_is_err1 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  c_exu_io_in_bits_r_is_err2 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_result = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_rd_addr = _RAND_15[4:0];
  _RAND_16 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_LSU_type = _RAND_16[3:0];
  _RAND_17 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_rs2_data = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_is_err1 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  d_lsu_io_in_bits_r_is_err2 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  e_wbu_io_in_bits_r_rd_addr = _RAND_20[4:0];
  _RAND_21 = {1{`RANDOM}};
  e_wbu_io_in_bits_r_rd_data = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  e_wbu_io_in_bits_r_is_err1 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  e_wbu_io_in_bits_r_is_err2 = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  err1_reg = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  err2_reg = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  pc_fix_reg = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  pc = _RAND_27[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
