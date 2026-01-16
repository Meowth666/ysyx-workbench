import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_WBU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new LSU_WBU))
    val rd_addr = Output(UInt(5.W))
    val rd_data = Output(UInt(32.W))
    val rd_valid = Output(Bool())
    val out  = Decoupled(new END)
  })
  ChiselHelpers.dontTouchBundleRecursive(io)
  io.in.ready := true.B
  io.rd_addr := io.in.bits.rd_addr
  io.rd_data := io.in.bits.rd_data
  io.rd_valid := io.in.valid
  io.out.valid := true.B
}

