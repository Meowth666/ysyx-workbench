import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_IFU extends Module {
  val io = IO(new Bundle {
    val out = Decoupled(new IFU_IDU)
  })
  ChiselHelpers.dontTouchBundleRecursive(io)
  val pc = RegInit("h80000000".U(32.W))

  io.out.valid := true.B
  io.out.bits.pc  := pc
  io.out.bits.inst := pc

  when (io.out.ready) {
    pc := pc + 4.U
  }
}
