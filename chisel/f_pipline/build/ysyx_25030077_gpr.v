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
