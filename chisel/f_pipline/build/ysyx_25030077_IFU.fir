circuit ysyx_25030077_IFU :
  module ysyx_25030077_IFU :
    input clock : Clock
    input reset : UInt<1>
    output io : { out : { flip ready : UInt<1>, valid : UInt<1>, bits : { pc : UInt<32>, inst : UInt<32>}}}

    reg pc : UInt<32>, clock with :
      reset => (reset, UInt<32>("h80000000")) @[ysyx_25030077_IFU.scala 9:19]
    io.out.valid <= UInt<1>("h1") @[ysyx_25030077_IFU.scala 11:16]
    io.out.bits.pc <= pc @[ysyx_25030077_IFU.scala 12:19]
    io.out.bits.inst <= pc @[ysyx_25030077_IFU.scala 13:20]
    when io.out.ready : @[ysyx_25030077_IFU.scala 15:23]
      node _pc_T = add(pc, UInt<3>("h4")) @[ysyx_25030077_IFU.scala 16:14]
      node _pc_T_1 = tail(_pc_T, 1) @[ysyx_25030077_IFU.scala 16:14]
      pc <= _pc_T_1 @[ysyx_25030077_IFU.scala 16:8]

