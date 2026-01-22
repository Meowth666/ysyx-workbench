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
    val state = Output(Bool())
  })
  ChiselHelpers.dontTouchBundleRecursive(io)
  io.in.ready := true.B
  io.rd_addr := io.in.bits.rd_addr
  io.rd_data := io.in.bits.rd_data
  val valid_out_reg = RegInit(false.B)
  valid_out_reg := MuxCase(false.B, Seq(
    valid_out_reg -> Mux(io.out.ready, false.B, true.B),
    (valid_out_reg === false.B) -> Mux(io.in.valid, true.B, false.B)
  ))
  io.rd_valid := valid_out_reg && (~io.in.bits.is_err1) && (~io.in.bits.is_err2)
  io.out.valid := true.B
  val is_err_in = ~(io.in.bits.is_err1 || io.in.bits.is_err2)
  val state_reg = RegInit(false.B)
  state_reg := MuxCase(false.B, Seq(
    state_reg -> Mux(io.out.valid && io.out.ready, false.B, true.B),
    (state_reg === false.B) -> Mux(io.in.valid && io.in.ready, true.B, false.B)
  ))
  io.state := state_reg && is_err_in
}

