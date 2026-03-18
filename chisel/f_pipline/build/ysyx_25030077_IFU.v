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
