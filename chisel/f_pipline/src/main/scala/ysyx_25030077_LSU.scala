import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_LSU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new EXU_LSU))
    val out = Decoupled(new LSU_WBU)
  })
  ChiselHelpers.dontTouchBundleRecursive(io)
  io.in.ready := true.B
  io.out.bits.rd_addr := io.in.bits.rd_addr
  io.out.bits.rd_data := (io.in.bits.rs2_data) // In real implementation, memory operations would be handled here
  io.out.valid := io.in.valid
}

