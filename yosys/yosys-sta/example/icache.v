module ysyx_25030077_icache(
  input         clock,
  input         reset,
  input         io_ifu_valid,
  input  [31:0] io_pc,
  output        io_icache_valid,
  output [31:0] io_icache_data,
  output        io_ar_valid,
  output [31:0] io_ar_addr,
  input         io_ar_ready,
  output [1:0]  io_ar_burst,
  output [7:0]  io_ar_len,
  output        io_aw_valid,
  output [31:0] io_aw_addr,
  input         io_aw_ready,
  output        io_w_valid,
  output [31:0] io_w_data,
  input         io_w_ready,
  input         io_r_valid,
  input  [31:0] io_r_data,
  input         io_icache_ready,
  output        io_ifu_ready
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
  reg [2:0] state_reg; // @[ysyx_25030077_icache.scala 35:28]
  reg [31:0] rdata_reg; // @[ysyx_25030077_icache.scala 37:28]
  reg  ar_valid_reg; // @[ysyx_25030077_icache.scala 38:31]
  reg [31:0] ar_addr_reg; // @[ysyx_25030077_icache.scala 39:31]
  wire [2:0] index = io_pc[4:2]; // @[ysyx_25030077_icache.scala 40:22]
  reg [2:0] j; // @[ysyx_25030077_icache.scala 41:20]
  reg [2:0] k; // @[ysyx_25030077_icache.scala 42:20]
  reg [2:0] temp; // @[ysyx_25030077_icache.scala 43:23]
  reg  is_full; // @[ysyx_25030077_icache.scala 44:26]
  wire [6:0] _serach_addr_T = {index,4'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_0 = {{25'd0}, _serach_addr_T}; // @[ysyx_25030077_icache.scala 45:42]
  wire [31:0] _serach_addr_T_2 = 32'hf001600 + _GEN_0; // @[ysyx_25030077_icache.scala 45:42]
  wire [2:0] _serach_addr_T_4 = j + 3'h1; // @[ysyx_25030077_icache.scala 45:74]
  wire [4:0] _serach_addr_T_5 = {_serach_addr_T_4,2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_1 = {{27'd0}, _serach_addr_T_5}; // @[ysyx_25030077_icache.scala 45:65]
  wire [31:0] serach_addr = _serach_addr_T_2 + _GEN_1; // @[ysyx_25030077_icache.scala 45:65]
  wire  is_tag = io_r_data[27:1] == io_pc[31:5] & io_r_data[0]; // @[ysyx_25030077_icache.scala 46:53]
  wire  is_notvalid = ~io_r_data[0]; // @[ysyx_25030077_icache.scala 47:39]
  wire [31:0] _tag_addr_T_2 = 32'hf001680 + _GEN_0; // @[ysyx_25030077_icache.scala 48:39]
  wire [3:0] _tag_addr_T_4 = {j[1:0],2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_3 = {{28'd0}, _tag_addr_T_4}; // @[ysyx_25030077_icache.scala 48:62]
  wire [31:0] tag_addr = _tag_addr_T_2 + _GEN_3; // @[ysyx_25030077_icache.scala 48:62]
  wire [3:0] _inst_addr_T_1 = {k[1:0],2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_4 = {{28'd0}, _inst_addr_T_1}; // @[ysyx_25030077_icache.scala 49:27]
  wire [31:0] inst_addr = io_pc + _GEN_4; // @[ysyx_25030077_icache.scala 49:27]
  reg [31:0] data0; // @[ysyx_25030077_icache.scala 51:24]
  reg [31:0] data1; // @[ysyx_25030077_icache.scala 52:24]
  reg [31:0] data2; // @[ysyx_25030077_icache.scala 53:24]
  reg [31:0] data3; // @[ysyx_25030077_icache.scala 54:24]
  wire  _state_reg_T = state_reg == 3'h0; // @[ysyx_25030077_icache.scala 59:20]
  wire  _state_reg_T_3 = io_pc[31:28] == 4'ha; // @[ysyx_25030077_icache.scala 59:83]
  wire  _state_reg_T_6 = state_reg == 3'h1; // @[ysyx_25030077_icache.scala 60:20]
  wire  _state_reg_T_8 = j == 3'h3; // @[ysyx_25030077_icache.scala 60:90]
  wire  _state_reg_T_9 = j == 3'h3 | is_notvalid; // @[ysyx_25030077_icache.scala 60:98]
  wire [1:0] _state_reg_T_10 = j == 3'h3 | is_notvalid ? 2'h3 : 2'h1; // @[ysyx_25030077_icache.scala 60:86]
  wire [1:0] _state_reg_T_11 = is_tag ? 2'h2 : _state_reg_T_10; // @[ysyx_25030077_icache.scala 60:69]
  wire [1:0] _state_reg_T_12 = io_r_valid ? _state_reg_T_11 : 2'h1; // @[ysyx_25030077_icache.scala 60:35]
  wire  _state_reg_T_13 = state_reg == 3'h2; // @[ysyx_25030077_icache.scala 61:20]
  wire [2:0] _state_reg_T_15 = io_r_valid ? 3'h6 : 3'h2; // @[ysyx_25030077_icache.scala 61:35]
  wire  _state_reg_T_16 = state_reg == 3'h6; // @[ysyx_25030077_icache.scala 62:20]
  wire  _state_reg_T_17 = state_reg == 3'h3; // @[ysyx_25030077_icache.scala 63:20]
  wire  _state_reg_T_19 = k == 3'h3; // @[ysyx_25030077_icache.scala 63:72]
  wire [2:0] _state_reg_T_20 = k == 3'h3 ? 3'h4 : 3'h3; // @[ysyx_25030077_icache.scala 63:69]
  wire [2:0] _state_reg_T_21 = io_r_valid ? _state_reg_T_20 : 3'h3; // @[ysyx_25030077_icache.scala 63:35]
  wire  _state_reg_T_22 = state_reg == 3'h4; // @[ysyx_25030077_icache.scala 64:20]
  wire  _state_reg_T_23 = io_w_ready & io_w_valid; // @[ysyx_25030077_icache.scala 64:48]
  wire [2:0] _state_reg_T_24 = io_w_ready & io_w_valid ? 3'h5 : 3'h4; // @[ysyx_25030077_icache.scala 64:35]
  wire  _state_reg_T_25 = state_reg == 3'h5; // @[ysyx_25030077_icache.scala 65:20]
  wire  _state_reg_T_27 = k == 3'h4; // @[ysyx_25030077_icache.scala 65:72]
  wire [2:0] _state_reg_T_28 = k == 3'h4 ? 3'h0 : 3'h4; // @[ysyx_25030077_icache.scala 65:69]
  wire [2:0] _state_reg_T_29 = _state_reg_T_23 ? _state_reg_T_28 : 3'h5; // @[ysyx_25030077_icache.scala 65:35]
  wire  _state_reg_T_30 = state_reg == 3'h7; // @[ysyx_25030077_icache.scala 66:20]
  wire [2:0] _state_reg_T_32 = io_r_valid ? 3'h6 : 3'h7; // @[ysyx_25030077_icache.scala 66:35]
  wire [2:0] _state_reg_T_33 = _state_reg_T_30 ? _state_reg_T_32 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_34 = _state_reg_T_25 ? _state_reg_T_29 : _state_reg_T_33; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_35 = _state_reg_T_22 ? _state_reg_T_24 : _state_reg_T_34; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_36 = _state_reg_T_17 ? _state_reg_T_21 : _state_reg_T_35; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_37 = _state_reg_T_16 ? 3'h0 : _state_reg_T_36; // @[Mux.scala 101:16]
  wire [2:0] _k_T_5 = k + 3'h1; // @[ysyx_25030077_icache.scala 76:85]
  wire [2:0] _k_T_6 = _state_reg_T_19 ? 3'h0 : _k_T_5; // @[ysyx_25030077_icache.scala 76:66]
  wire [2:0] _k_T_12 = _state_reg_T_23 ? _k_T_5 : k; // @[ysyx_25030077_icache.scala 77:35]
  wire  _data0_T_1 = _state_reg_T_17 & io_r_valid; // @[ysyx_25030077_icache.scala 80:37]
  wire  _data0_T_2 = k == 3'h0; // @[ysyx_25030077_icache.scala 80:56]
  wire  _data1_T_2 = k == 3'h1; // @[ysyx_25030077_icache.scala 81:56]
  wire  _data2_T_2 = k == 3'h2; // @[ysyx_25030077_icache.scala 82:56]
  wire [2:0] temp1 = temp + 3'h1; // @[ysyx_25030077_icache.scala 85:22]
  wire  _temp_T_1 = _state_reg_T_25 & io_w_ready; // @[ysyx_25030077_icache.scala 86:35]
  wire [2:0] _temp_T_6 = {1'h0,temp1[1:0]}; // @[Cat.scala 31:58]
  wire  _ar_valid_reg_T_4 = io_ar_ready ? 1'h0 : 1'h1; // @[ysyx_25030077_icache.scala 89:53]
  wire  _ar_valid_reg_T_10 = ar_valid_reg & io_ar_ready ? 1'h0 : ar_valid_reg; // @[ysyx_25030077_icache.scala 90:35]
  wire [31:0] _ar_addr_reg_T_13 = _state_reg_T_9 ? io_pc : serach_addr; // @[ysyx_25030077_icache.scala 96:88]
  wire [31:0] _ar_addr_reg_T_14 = is_tag ? tag_addr : _ar_addr_reg_T_13; // @[ysyx_25030077_icache.scala 96:66]
  wire  _io_ar_burst_T_1 = ar_addr_reg[31:28] == 4'ha; // @[ysyx_25030077_icache.scala 99:44]
  wire [2:0] _io_ar_len_T_2 = _io_ar_burst_T_1 ? 3'h3 : 3'h0; // @[ysyx_25030077_icache.scala 100:23]
  wire  _io_aw_valid_T_2 = _state_reg_T_22 | _state_reg_T_25; // @[ysyx_25030077_icache.scala 109:41]
  reg  w_valid_reg; // @[ysyx_25030077_icache.scala 110:30]
  wire  _w_valid_reg_T_3 = io_w_ready ? 1'h0 : 1'h1; // @[ysyx_25030077_icache.scala 112:84]
  wire  _w_valid_reg_T_5 = w_valid_reg ? _w_valid_reg_T_3 : io_aw_ready; // @[ysyx_25030077_icache.scala 112:67]
  wire  _w_valid_reg_T_6 = _io_aw_valid_T_2 & _w_valid_reg_T_5; // @[Mux.scala 101:16]
  reg  aw_valid_reg; // @[ysyx_25030077_icache.scala 114:31]
  wire  _aw_valid_reg_T_4 = io_r_valid & _state_reg_T_19; // @[ysyx_25030077_icache.scala 116:35]
  wire  _aw_valid_reg_T_8 = io_aw_ready ? 1'h0 : 1'h1; // @[ysyx_25030077_icache.scala 117:74]
  wire  _aw_valid_reg_T_10 = aw_valid_reg ? _aw_valid_reg_T_8 : io_w_ready; // @[ysyx_25030077_icache.scala 117:56]
  wire [2:0] w_index = index + k; // @[ysyx_25030077_icache.scala 120:25]
  wire [2:0] w_index1 = w_index - 3'h1; // @[ysyx_25030077_icache.scala 121:30]
  wire [6:0] _io_aw_addr_T_2 = {w_index,4'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_6 = {{25'd0}, _io_aw_addr_T_2}; // @[ysyx_25030077_icache.scala 123:77]
  wire [31:0] _io_aw_addr_T_4 = 32'hf001600 + _GEN_6; // @[ysyx_25030077_icache.scala 123:77]
  wire [4:0] _io_aw_addr_T_5 = {temp,2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_7 = {{27'd0}, _io_aw_addr_T_5}; // @[ysyx_25030077_icache.scala 123:107]
  wire [31:0] _io_aw_addr_T_7 = _io_aw_addr_T_4 + _GEN_7; // @[ysyx_25030077_icache.scala 123:107]
  wire [2:0] _io_aw_addr_T_13 = j - 3'h1; // @[ysyx_25030077_icache.scala 123:187]
  wire [4:0] _io_aw_addr_T_14 = {_io_aw_addr_T_13,2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_9 = {{27'd0}, _io_aw_addr_T_14}; // @[ysyx_25030077_icache.scala 123:179]
  wire [31:0] _io_aw_addr_T_16 = _io_aw_addr_T_4 + _GEN_9; // @[ysyx_25030077_icache.scala 123:179]
  wire [31:0] _io_aw_addr_T_17 = is_full ? _io_aw_addr_T_7 : _io_aw_addr_T_16; // @[ysyx_25030077_icache.scala 123:48]
  wire [6:0] _io_aw_addr_T_20 = {w_index1,4'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_10 = {{25'd0}, _io_aw_addr_T_20}; // @[ysyx_25030077_icache.scala 124:77]
  wire [31:0] _io_aw_addr_T_22 = 32'hf001680 + _GEN_10; // @[ysyx_25030077_icache.scala 124:77]
  wire [31:0] _io_aw_addr_T_25 = _io_aw_addr_T_22 + _GEN_7; // @[ysyx_25030077_icache.scala 124:108]
  wire [31:0] _io_aw_addr_T_34 = _io_aw_addr_T_22 + _GEN_9; // @[ysyx_25030077_icache.scala 124:181]
  wire [31:0] _io_aw_addr_T_35 = is_full ? _io_aw_addr_T_25 : _io_aw_addr_T_34; // @[ysyx_25030077_icache.scala 124:48]
  wire [31:0] _io_aw_addr_T_36 = _state_reg_T_25 ? _io_aw_addr_T_35 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_2 = {4'h0,inst_addr[31:5],1'h1}; // @[Cat.scala 31:58]
  wire [31:0] _io_w_data_T_8 = _state_reg_T_27 ? data3 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_9 = _state_reg_T_19 ? data2 : _io_w_data_T_8; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_10 = _data2_T_2 ? data1 : _io_w_data_T_9; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_11 = _data1_T_2 ? data0 : _io_w_data_T_10; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_12 = _state_reg_T_25 ? _io_w_data_T_11 : 32'h0; // @[Mux.scala 101:16]
  assign io_icache_valid = _state_reg_T_16 | _temp_T_1 & io_w_valid & _state_reg_T_27; // @[ysyx_25030077_icache.scala 106:45]
  assign io_icache_data = rdata_reg; // @[ysyx_25030077_icache.scala 107:21]
  assign io_ar_valid = ar_valid_reg; // @[ysyx_25030077_icache.scala 93:17]
  assign io_ar_addr = ar_addr_reg; // @[ysyx_25030077_icache.scala 104:17]
  assign io_ar_burst = {{1'd0}, ar_addr_reg[31:28] == 4'ha}; // @[ysyx_25030077_icache.scala 99:17]
  assign io_ar_len = {{5'd0}, _io_ar_len_T_2}; // @[ysyx_25030077_icache.scala 100:17]
  assign io_aw_valid = aw_valid_reg; // @[ysyx_25030077_icache.scala 119:17]
  assign io_aw_addr = _state_reg_T_22 ? _io_aw_addr_T_17 : _io_aw_addr_T_36; // @[Mux.scala 101:16]
  assign io_w_valid = w_valid_reg; // @[ysyx_25030077_icache.scala 126:16]
  assign io_w_data = _state_reg_T_22 ? _io_w_data_T_2 : _io_w_data_T_12; // @[Mux.scala 101:16]
  assign io_ifu_ready = 1'h1; // @[ysyx_25030077_icache.scala 56:21]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_icache.scala 35:28]
      state_reg <= 3'h0; // @[ysyx_25030077_icache.scala 35:28]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (io_ifu_valid) begin // @[ysyx_25030077_icache.scala 59:35]
        if (io_pc[31:28] == 4'ha) begin // @[ysyx_25030077_icache.scala 59:68]
          state_reg <= 3'h1;
        end else begin
          state_reg <= 3'h7;
        end
      end else begin
        state_reg <= 3'h0;
      end
    end else if (_state_reg_T_6) begin // @[Mux.scala 101:16]
      state_reg <= {{1'd0}, _state_reg_T_12};
    end else if (_state_reg_T_13) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_15;
    end else begin
      state_reg <= _state_reg_T_37;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 37:28]
      rdata_reg <= 32'h0; // @[ysyx_25030077_icache.scala 37:28]
    end else if ((_state_reg_T_17 & _data0_T_2 | _state_reg_T_13 | _state_reg_T_30) & io_r_valid) begin // @[ysyx_25030077_icache.scala 105:22]
      rdata_reg <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 38:31]
      ar_valid_reg <= 1'h0; // @[ysyx_25030077_icache.scala 38:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      ar_valid_reg <= io_ifu_valid;
    end else if (_state_reg_T_6) begin // @[Mux.scala 101:16]
      if (ar_valid_reg) begin // @[ysyx_25030077_icache.scala 89:35]
        ar_valid_reg <= _ar_valid_reg_T_4;
      end else begin
        ar_valid_reg <= io_r_valid;
      end
    end else if (_state_reg_T_13) begin // @[Mux.scala 101:16]
      ar_valid_reg <= _ar_valid_reg_T_10;
    end else begin
      ar_valid_reg <= _state_reg_T_17 & _ar_valid_reg_T_10;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 39:31]
      ar_addr_reg <= 32'h0; // @[ysyx_25030077_icache.scala 39:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (io_ifu_valid) begin // @[ysyx_25030077_icache.scala 95:35]
        if (_state_reg_T_3) begin // @[ysyx_25030077_icache.scala 95:68]
          ar_addr_reg <= _serach_addr_T_2;
        end else begin
          ar_addr_reg <= io_pc;
        end
      end else begin
        ar_addr_reg <= 32'h0;
      end
    end else if (_state_reg_T_6) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_icache.scala 96:35]
        ar_addr_reg <= _ar_addr_reg_T_14;
      end
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 41:20]
      j <= 3'h0; // @[ysyx_25030077_icache.scala 41:20]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      j <= 3'h0;
    end else if (_state_reg_T_6) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_icache.scala 71:35]
        j <= _serach_addr_T_4;
      end
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 42:20]
      k <= 3'h0; // @[ysyx_25030077_icache.scala 42:20]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      k <= 3'h0;
    end else if (_state_reg_T_17) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_icache.scala 76:35]
        k <= _k_T_6;
      end
    end else if (_state_reg_T_22) begin // @[Mux.scala 101:16]
      k <= _k_T_12;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 43:23]
      temp <= 3'h0; // @[ysyx_25030077_icache.scala 43:23]
    end else if (_state_reg_T_25 & io_w_ready & _state_reg_T_27 & is_full) begin // @[ysyx_25030077_icache.scala 86:16]
      temp <= _temp_T_6;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 44:26]
      is_full <= 1'h0; // @[ysyx_25030077_icache.scala 44:26]
    end else if (_state_reg_T_6) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_icache.scala 102:35]
        is_full <= _state_reg_T_8 & ~is_notvalid;
      end
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 51:24]
      data0 <= 32'h0; // @[ysyx_25030077_icache.scala 51:24]
    end else if (_state_reg_T_17 & io_r_valid & k == 3'h0) begin // @[ysyx_25030077_icache.scala 80:17]
      data0 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 52:24]
      data1 <= 32'h0; // @[ysyx_25030077_icache.scala 52:24]
    end else if (_data0_T_1 & k == 3'h1) begin // @[ysyx_25030077_icache.scala 81:17]
      data1 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 53:24]
      data2 <= 32'h0; // @[ysyx_25030077_icache.scala 53:24]
    end else if (_data0_T_1 & k == 3'h2) begin // @[ysyx_25030077_icache.scala 82:17]
      data2 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 54:24]
      data3 <= 32'h0; // @[ysyx_25030077_icache.scala 54:24]
    end else if (_data0_T_1 & _state_reg_T_19) begin // @[ysyx_25030077_icache.scala 83:17]
      data3 <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 110:30]
      w_valid_reg <= 1'h0; // @[ysyx_25030077_icache.scala 110:30]
    end else begin
      w_valid_reg <= _w_valid_reg_T_6; // @[ysyx_25030077_icache.scala 111:17]
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 114:31]
      aw_valid_reg <= 1'h0; // @[ysyx_25030077_icache.scala 114:31]
    end else if (_state_reg_T_17) begin // @[Mux.scala 101:16]
      aw_valid_reg <= _aw_valid_reg_T_4;
    end else begin
      aw_valid_reg <= _io_aw_valid_T_2 & _aw_valid_reg_T_10;
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
  w_valid_reg = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  aw_valid_reg = _RAND_13[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule