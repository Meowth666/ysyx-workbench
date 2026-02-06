import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_IFU extends Module {
  val io = IO(new Bundle {
    val err1_in = Input(Bool())
    val pc = Input(UInt(32.W))
    val out = Decoupled(new IFU_IDU)
    val ar_addr  = Output(UInt(32.W))
    val ar_valid = Output(Bool())
    val ar_ready = Input(Bool())
    val r_valid = Input(Bool())
    val r_data  = Input(UInt(32.W))
    val r_ready = Output(Bool())
  })
  ChiselHelpers.dontTouchBundleRecursive(io)

  io.ar_addr  := io.pc
  io.r_ready  := true.B
  
  val ar_valid_reg  = RegInit(true.B)
  val valid_out_reg = RegInit(false.B)

  io.ar_valid := ar_valid_reg;

  ar_valid_reg := MuxCase(true.B, Seq(
    ar_valid_reg -> Mux(io.ar_ready, false.B, true.B),
    (ar_valid_reg === false.B) -> Mux((valid_out_reg && io.out.ready), true.B, false.B)
  ))

  valid_out_reg := MuxCase(false.B, Seq(
    valid_out_reg -> Mux(io.out.ready, false.B, true.B),
    (valid_out_reg === false.B) -> Mux(io.r_valid, true.B, false.B)
  ))
  val out_data = RegInit(0.U(32.W))
  out_data := Mux(io.r_valid, io.r_data, out_data)
  io.out.valid := valid_out_reg
  io.out.bits.pc   := io.pc
  io.out.bits.inst := out_data
  io.out.bits.is_err1 := io.err1_in
}
