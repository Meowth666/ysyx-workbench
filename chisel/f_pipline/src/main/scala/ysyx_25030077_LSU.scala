import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_LSU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new EXU_LSU))
    val out = Decoupled(new LSU_WBU)
    val state = Output(Bool())
  })
  ChiselHelpers.dontTouchBundleRecursive(io)
  io.in.ready := true.B
  io.out.bits.rd_addr := Mux((io.in.bits.is_err1 || io.in.bits.is_err2),0.U, io.in.bits.rd_addr)
  io.out.bits.rd_data := Mux((io.in.bits.is_err1 || io.in.bits.is_err2),0.U, io.in.bits.rs2_data) // In real implementation, memory operations would be handled here
  io.out.bits.is_err1 := io.in.bits.is_err1
  io.out.bits.is_err2 := io.in.bits.is_err2
  val valid_out_reg = RegInit(false.B)
  valid_out_reg := MuxCase(false.B, Seq(
    valid_out_reg -> Mux(io.out.ready, false.B, true.B),
    (valid_out_reg === false.B) -> Mux(io.in.valid, true.B, false.B)
  ))
  io.out.valid := valid_out_reg
  val is_err_in = ~(io.in.bits.is_err1 || io.in.bits.is_err2)
  val state_reg = RegInit(false.B)
  state_reg := MuxCase(false.B, Seq(
    state_reg -> Mux(io.out.valid && io.out.ready, false.B, true.B),
    (state_reg === false.B) -> Mux(io.in.valid && io.in.ready, true.B, false.B)
  ))
  io.state := state_reg && is_err_in
}

