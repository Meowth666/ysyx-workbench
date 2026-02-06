circuit ysyx_25030077_IFU :
  module ysyx_25030077_IFU :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip err1_in : UInt<1>, flip pc : UInt<32>, out : { flip ready : UInt<1>, valid : UInt<1>, bits : { pc : UInt<32>, inst : UInt<32>, is_err1 : UInt<1>}}, ar_addr : UInt<32>, ar_valid : UInt<1>, flip ar_ready : UInt<1>, flip r_valid : UInt<1>, flip r_data : UInt<32>, r_ready : UInt<1>}

    io.ar_addr <= io.pc @[ysyx_25030077_IFU.scala 18:15]
    io.r_ready <= UInt<1>("h1") @[ysyx_25030077_IFU.scala 19:15]
    reg ar_valid_reg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h1")) @[ysyx_25030077_IFU.scala 21:30]
    reg valid_out_reg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[ysyx_25030077_IFU.scala 22:30]
    io.ar_valid <= ar_valid_reg @[ysyx_25030077_IFU.scala 24:15]
    node _ar_valid_reg_T = mux(io.ar_ready, UInt<1>("h0"), UInt<1>("h1")) @[ysyx_25030077_IFU.scala 27:24]
    node _ar_valid_reg_T_1 = eq(ar_valid_reg, UInt<1>("h0")) @[ysyx_25030077_IFU.scala 28:19]
    node _ar_valid_reg_T_2 = and(valid_out_reg, io.out.ready) @[ysyx_25030077_IFU.scala 28:54]
    node _ar_valid_reg_T_3 = mux(_ar_valid_reg_T_2, UInt<1>("h1"), UInt<1>("h0")) @[ysyx_25030077_IFU.scala 28:38]
    node _ar_valid_reg_T_4 = mux(_ar_valid_reg_T_1, _ar_valid_reg_T_3, UInt<1>("h1")) @[Mux.scala 101:16]
    node _ar_valid_reg_T_5 = mux(ar_valid_reg, _ar_valid_reg_T, _ar_valid_reg_T_4) @[Mux.scala 101:16]
    ar_valid_reg <= _ar_valid_reg_T_5 @[ysyx_25030077_IFU.scala 26:16]
    node _valid_out_reg_T = mux(io.out.ready, UInt<1>("h0"), UInt<1>("h1")) @[ysyx_25030077_IFU.scala 32:25]
    node _valid_out_reg_T_1 = eq(valid_out_reg, UInt<1>("h0")) @[ysyx_25030077_IFU.scala 33:20]
    node _valid_out_reg_T_2 = mux(io.r_valid, UInt<1>("h1"), UInt<1>("h0")) @[ysyx_25030077_IFU.scala 33:39]
    node _valid_out_reg_T_3 = mux(_valid_out_reg_T_1, _valid_out_reg_T_2, UInt<1>("h0")) @[Mux.scala 101:16]
    node _valid_out_reg_T_4 = mux(valid_out_reg, _valid_out_reg_T, _valid_out_reg_T_3) @[Mux.scala 101:16]
    valid_out_reg <= _valid_out_reg_T_4 @[ysyx_25030077_IFU.scala 31:17]
    reg out_data : UInt<32>, clock with :
      reset => (reset, UInt<32>("h0")) @[ysyx_25030077_IFU.scala 35:25]
    node _out_data_T = mux(io.r_valid, io.r_data, out_data) @[ysyx_25030077_IFU.scala 36:18]
    out_data <= _out_data_T @[ysyx_25030077_IFU.scala 36:12]
    io.out.valid <= valid_out_reg @[ysyx_25030077_IFU.scala 37:16]
    io.out.bits.pc <= io.pc @[ysyx_25030077_IFU.scala 38:20]
    io.out.bits.inst <= out_data @[ysyx_25030077_IFU.scala 39:20]
    io.out.bits.is_err1 <= io.err1_in @[ysyx_25030077_IFU.scala 40:23]

