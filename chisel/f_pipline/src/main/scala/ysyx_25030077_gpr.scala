import chisel3._
import chisel3.util._
import ChiselHelpers._

class ysyx_25030077_gpr extends Module {
  val io = IO(new Bundle {
    val rs1_addr = Input(UInt(5.W))
    val rs2_addr = Input(UInt(5.W))
    val rdata_rs1 = Output(UInt(32.W))
    val rdata_rs2 = Output(UInt(32.W))
    val rd_addr  = Input(UInt(5.W))
    val rd_data  = Input(UInt(32.W))
    val rd_valid = Input(Bool())
  })
  dontTouchBundleRecursive(io)
  val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))
  io.rdata_rs1 := regs(io.rs1_addr)
  io.rdata_rs2 := regs(io.rs2_addr)
  when (io.rd_valid && (io.rd_addr =/= 0.U)) {
    regs(io.rd_addr) := io.rd_data
  }
}


