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
  reg [2:0] state_reg; // @[ysyx_25030077_icache.scala 33:28]
  reg [31:0] rdata_reg; // @[ysyx_25030077_icache.scala 35:28]
  reg  ar_valid_reg; // @[ysyx_25030077_icache.scala 36:31]
  reg [31:0] ar_addr_reg; // @[ysyx_25030077_icache.scala 37:31]
  wire [5:0] _index_T_1 = {io_pc[5:2],2'h0}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_0 = {{26'd0}, _index_T_1}; // @[ysyx_25030077_icache.scala 38:43]
  wire [31:0] index = _GEN_0 + 32'hf001600; // @[ysyx_25030077_icache.scala 38:43]
  wire  is_tag = io_r_data[26:1] == io_pc[31:6] & io_r_data[0]; // @[ysyx_25030077_icache.scala 39:53]
  wire [31:0] tag_addr = _GEN_0 + 32'hf001800; // @[ysyx_25030077_icache.scala 40:46]
  wire  _state_reg_T = state_reg == 3'h0; // @[ysyx_25030077_icache.scala 45:20]
  wire  _state_reg_T_3 = state_reg == 3'h1; // @[ysyx_25030077_icache.scala 46:20]
  wire [1:0] _state_reg_T_5 = is_tag ? 2'h2 : 2'h3; // @[ysyx_25030077_icache.scala 46:69]
  wire [1:0] _state_reg_T_6 = io_r_valid ? _state_reg_T_5 : 2'h1; // @[ysyx_25030077_icache.scala 46:35]
  wire  _state_reg_T_7 = state_reg == 3'h2; // @[ysyx_25030077_icache.scala 47:20]
  wire [2:0] _state_reg_T_9 = io_r_valid ? 3'h6 : 3'h2; // @[ysyx_25030077_icache.scala 47:35]
  wire  _state_reg_T_10 = state_reg == 3'h6; // @[ysyx_25030077_icache.scala 48:20]
  wire  _state_reg_T_11 = state_reg == 3'h3; // @[ysyx_25030077_icache.scala 49:20]
  wire [2:0] _state_reg_T_13 = io_r_valid ? 3'h4 : 3'h3; // @[ysyx_25030077_icache.scala 49:35]
  wire  _state_reg_T_14 = state_reg == 3'h4; // @[ysyx_25030077_icache.scala 50:20]
  wire [2:0] _state_reg_T_15 = io_aw_ready ? 3'h5 : 3'h4; // @[ysyx_25030077_icache.scala 50:35]
  wire  _state_reg_T_16 = state_reg == 3'h5; // @[ysyx_25030077_icache.scala 51:20]
  wire [2:0] _state_reg_T_17 = io_w_ready ? 3'h0 : 3'h5; // @[ysyx_25030077_icache.scala 51:35]
  wire [2:0] _state_reg_T_18 = _state_reg_T_16 ? _state_reg_T_17 : 3'h0; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_19 = _state_reg_T_14 ? _state_reg_T_15 : _state_reg_T_18; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_20 = _state_reg_T_11 ? _state_reg_T_13 : _state_reg_T_19; // @[Mux.scala 101:16]
  wire [2:0] _state_reg_T_21 = _state_reg_T_10 ? 3'h0 : _state_reg_T_20; // @[Mux.scala 101:16]
  wire  _ar_valid_reg_T_4 = io_ar_ready ? 1'h0 : 1'h1; // @[ysyx_25030077_icache.scala 56:53]
  wire  _ar_valid_reg_T_10 = ar_valid_reg & io_ar_ready ? 1'h0 : ar_valid_reg; // @[ysyx_25030077_icache.scala 57:35]
  wire [31:0] _ar_addr_reg_T_5 = is_tag ? tag_addr : io_pc; // @[ysyx_25030077_icache.scala 64:66]
  wire [31:0] _ar_addr_reg_T_9 = _state_reg_T_11 ? ar_addr_reg : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_aw_addr_T_2 = _state_reg_T_16 ? tag_addr : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_w_data_T_2 = {5'h0,io_pc[31:6],1'h1}; // @[Cat.scala 31:58]
  wire [31:0] _io_w_data_T_4 = _state_reg_T_16 ? rdata_reg : 32'h0; // @[Mux.scala 101:16]
  assign io_icache_valid = _state_reg_T_10 | _state_reg_T_16 & io_w_ready; // @[ysyx_25030077_icache.scala 71:45]
  assign io_icache_data = rdata_reg; // @[ysyx_25030077_icache.scala 72:21]
  assign io_ar_valid = ar_valid_reg; // @[ysyx_25030077_icache.scala 60:17]
  assign io_ar_addr = ar_addr_reg; // @[ysyx_25030077_icache.scala 68:17]
  assign io_aw_valid = _state_reg_T_14 | _state_reg_T_16; // @[ysyx_25030077_icache.scala 74:41]
  assign io_aw_addr = _state_reg_T_14 ? index : _io_aw_addr_T_2; // @[Mux.scala 101:16]
  assign io_w_valid = _state_reg_T_14 | _state_reg_T_16; // @[ysyx_25030077_icache.scala 79:40]
  assign io_w_data = _state_reg_T_14 ? _io_w_data_T_2 : _io_w_data_T_4; // @[Mux.scala 101:16]
  assign io_ifu_ready = 1'h1; // @[ysyx_25030077_icache.scala 42:21]
  always @(posedge clock) begin
    if (reset) begin // @[ysyx_25030077_icache.scala 33:28]
      state_reg <= 3'h0; // @[ysyx_25030077_icache.scala 33:28]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      state_reg <= {{2'd0}, io_ifu_valid};
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      state_reg <= {{1'd0}, _state_reg_T_6};
    end else if (_state_reg_T_7) begin // @[Mux.scala 101:16]
      state_reg <= _state_reg_T_9;
    end else begin
      state_reg <= _state_reg_T_21;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 35:28]
      rdata_reg <= 32'h0; // @[ysyx_25030077_icache.scala 35:28]
    end else if ((_state_reg_T_11 | _state_reg_T_7) & io_r_valid) begin // @[ysyx_25030077_icache.scala 69:22]
      rdata_reg <= io_r_data;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 36:31]
      ar_valid_reg <= 1'h0; // @[ysyx_25030077_icache.scala 36:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      ar_valid_reg <= io_ifu_valid;
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      if (ar_valid_reg) begin // @[ysyx_25030077_icache.scala 56:35]
        ar_valid_reg <= _ar_valid_reg_T_4;
      end else begin
        ar_valid_reg <= io_r_valid;
      end
    end else if (_state_reg_T_7) begin // @[Mux.scala 101:16]
      ar_valid_reg <= _ar_valid_reg_T_10;
    end else begin
      ar_valid_reg <= _state_reg_T_11 & _ar_valid_reg_T_10;
    end
    if (reset) begin // @[ysyx_25030077_icache.scala 37:31]
      ar_addr_reg <= 32'h0; // @[ysyx_25030077_icache.scala 37:31]
    end else if (_state_reg_T) begin // @[Mux.scala 101:16]
      if (io_ifu_valid) begin // @[ysyx_25030077_icache.scala 63:35]
        ar_addr_reg <= index;
      end else begin
        ar_addr_reg <= 32'h0;
      end
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      if (io_r_valid) begin // @[ysyx_25030077_icache.scala 64:35]
        ar_addr_reg <= _ar_addr_reg_T_5;
      end
    end else if (!(_state_reg_T_7)) begin // @[Mux.scala 101:16]
      ar_addr_reg <= _ar_addr_reg_T_9;
    end
  end
endmodule