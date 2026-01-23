import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_IFU extends Module {
  val io = IO(new Bundle {
    val err1_in = Input(Bool())
    val pc = Input(UInt(32.W))
    val out = Decoupled(new IFU_IDU)
    // val ar_addr  = Output(UInt(32.W))
    // val ar_valid = Output(Bool())
    // val r_valid = Input(Bool())
    // val r_data  = Input(UInt(32.W))
  })
  ChiselHelpers.dontTouchBundleRecursive(io)

  // io.ar_addr  := io.pc
  // io.ar_valid := true.B

  // io.out.valid := io.r_valid
  io.out.valid := true.B
  io.out.bits.pc   := io.pc
  io.out.bits.inst := io.pc//io.r_data
  io.out.bits.is_err1 := io.err1_in
}
