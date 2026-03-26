import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_LSU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new EXU_LSU))
    val out = Decoupled(new LSU_WBU)
    val state = Output(Bool())
    val ar_addr  = Output(UInt(32.W))
    val ar_ready = Input(Bool())
    val ar_valid = Output(Bool())
    val r_valid = Input(Bool())
    val r_data  = Input(UInt(32.W))
    val r_ready = Output(Bool())
    val b_valid = Input(Bool())
    val b_ready = Output(Bool())
    val aw_valid = Output(Bool())
    val aw_addr  = Output(UInt(32.W))
    val aw_ready = Input(Bool())
    val w_valid  = Output(Bool())
    val w_data   = Output(UInt(32.W))
    val w_ready  = Input(Bool())
    val rw_type = Output(UInt(4.W))
  })
  ChiselHelpers.dontTouchBundleRecursive(io)
  io.out.bits.is_err1 := io.in.bits.is_err1
  io.out.bits.is_err2 := io.in.bits.is_err2

  io.r_ready := true.B
  io.b_ready := true.B
  val valid_out_reg = RegInit(false.B)
  val lsu_state = RegInit(0.U(2.W))
  val ready_in_reg = RegInit(true.B)
  val data_out_reg = RegInit(0.U(32.W))
  val addr_out_reg = RegInit(0.U(5.W))
  val valid_in_dly = RegInit(false.B)
  valid_in_dly := io.in.valid && ready_in_reg
  val is_err_in = ~(io.in.bits.is_err1 || io.in.bits.is_err2)
  val clint_reg = RegInit(0.U(64.W))
  val is_clint1 = (io.in.bits.result === "h02000000".U(32.W) && io.in.bits.LSU_type === 8.U(4.W))
  val is_clint2 = (io.in.bits.result === "h02000004".U(32.W) && io.in.bits.LSU_type === 8.U(4.W))
  clint_reg := clint_reg + 5.U
  data_out_reg := MuxCase(data_out_reg, Seq(
                    (lsu_state === 1.U) -> Mux(is_err_in,  MuxCase(io.in.bits.result, Seq(
                                                (is_clint1 === 1.U) -> clint_reg(31, 0),
                                                (is_clint2 === 1.U) -> clint_reg(63, 32)
                                              )), 0.U),
                    (lsu_state === 2.U) -> Mux(io.b_valid, 0.U, data_out_reg),
                    (lsu_state === 3.U) -> Mux(io.r_valid, io.r_data, data_out_reg)
  ))

  addr_out_reg := MuxCase(addr_out_reg, Seq(
                    (lsu_state === 1.U) -> Mux(is_err_in,  io.in.bits.rd_addr, 0.U),
                    (lsu_state === 2.U) -> Mux(io.b_valid, 0.U, addr_out_reg),
                    (lsu_state === 3.U) -> Mux(io.r_valid, io.in.bits.rd_addr, addr_out_reg)
  ))
  io.out.bits.rd_addr := addr_out_reg
  io.out.bits.rd_data := data_out_reg
  valid_out_reg := MuxCase(false.B, Seq(
    valid_out_reg -> Mux(io.out.ready, false.B, true.B),
    (valid_out_reg === false.B) -> MuxCase(false.B, Seq(
                                    (lsu_state === 1.U) -> true.B,
                                    (lsu_state === 2.U) -> Mux(io.b_valid, true.B, false.B),
                                    (lsu_state === 3.U) -> Mux(io.r_valid, true.B, false.B)
                                  ))
  ))
  
  ready_in_reg := MuxCase(false.B, Seq(
    ready_in_reg -> Mux(io.in.valid, false.B, true.B),
    (ready_in_reg === false.B) -> Mux(valid_out_reg && io.out.ready, true.B, false.B)
  ))
  lsu_state := MuxCase(lsu_state, Seq(
    (lsu_state === 0.U) -> Mux(valid_in_dly, MuxCase(3.U(2.W), Seq(
      ((io.in.bits.LSU_type === 0.U(4.W)) || (~is_err_in) || (io.in.bits.result(31, 24) === "h02".U(8.W))) -> 1.U(2.W),
       (io.in.bits.LSU_type === 1.U(4.W)) -> 2.U(2.W),
       (io.in.bits.LSU_type === 2.U(4.W)) -> 2.U(2.W),
       (io.in.bits.LSU_type === 3.U(4.W)) -> 2.U(2.W)
    )), lsu_state),
    (lsu_state === 1.U) -> 0.U(2.W),
    (lsu_state === 2.U) -> Mux(io.b_valid, 0.U, lsu_state),
    (lsu_state === 3.U) -> Mux(io.r_valid, 0.U, lsu_state)
  ))
  io.in.ready  := ready_in_reg
  io.out.valid := valid_out_reg
  val state_reg = RegInit(false.B)
  state_reg := MuxCase(false.B, Seq(
    state_reg -> Mux(valid_out_reg && io.out.ready, false.B, true.B),
    (state_reg === false.B) -> Mux(io.in.valid && ready_in_reg, true.B, false.B)
  ))
  io.state := state_reg && is_err_in

  val ar_valid_reg = RegInit(false.B)
  val aw_valid_reg = RegInit(false.B)
  val w_valid_reg  = RegInit(false.B)
  val state_dly = RegInit(0.U(2.W))
  state_dly := lsu_state
  ar_valid_reg := MuxCase(false.B, Seq(
    ar_valid_reg -> Mux(io.ar_ready, false.B, true.B),
    (ar_valid_reg === false.B) -> Mux((lsu_state === 3.U) && (state_dly === 0.U), true.B, false.B)
  ))
  aw_valid_reg := MuxCase(false.B, Seq(
    aw_valid_reg -> Mux(io.aw_ready, false.B, true.B),
    (aw_valid_reg === false.B) -> Mux((lsu_state === 2.U) && (state_dly === 0.U), true.B, false.B)
  ))
  w_valid_reg := MuxCase(false.B, Seq(
    w_valid_reg -> Mux(io.w_ready, false.B, true.B),
    (w_valid_reg === false.B) -> Mux((lsu_state === 2.U) && (state_dly === 0.U), true.B, false.B)
  ))
  io.rw_type := io.in.bits.LSU_type
  io.ar_valid := ar_valid_reg
  io.aw_valid := aw_valid_reg
  io.w_valid  := w_valid_reg
  io.ar_addr  := io.in.bits.result
  io.aw_addr  := io.in.bits.result
  io.w_data   := io.in.bits.rs2_data
}

