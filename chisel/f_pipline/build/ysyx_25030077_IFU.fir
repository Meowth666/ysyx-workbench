circuit ysyx_25030077_IFU :
  module ysyx_25030077_IFU :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip err1_in : UInt<1>, flip pc : UInt<32>, out : { flip ready : UInt<1>, valid : UInt<1>, bits : { pc : UInt<32>, inst : UInt<32>, is_err1 : UInt<1>}}}

    io.out.valid <= UInt<1>("h1") @[ysyx_25030077_IFU.scala 20:16]
    io.out.bits.pc <= io.pc @[ysyx_25030077_IFU.scala 21:20]
    io.out.bits.inst <= io.pc @[ysyx_25030077_IFU.scala 22:20]
    io.out.bits.is_err1 <= io.err1_in @[ysyx_25030077_IFU.scala 23:23]

