import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077 extends Module {
  val io = IO(new Bundle {})

  val a_ifu = Module(new ysyx_25030077_IFU)
  val b_idu = Module(new ysyx_25030077_IDU)
  val g_gpr = Module(new ysyx_25030077_gpr)
  val c_exu = Module(new ysyx_25030077_EXU)
  val d_lsu = Module(new ysyx_25030077_LSU)
  val e_wbu = Module(new ysyx_25030077_WBU)

  // IFU → IDU 之间插一个流水级
  ChiselHelpers.pipelineConnect(
    prevOut = a_ifu.io.out,
    thisIn  = b_idu.io.in,
    thisOut = b_idu.io.out
  )

  ChiselHelpers.pipelineConnect(
    prevOut = b_idu.io.out,
    thisIn  = c_exu.io.in,
    thisOut = c_exu.io.out
  )

  ChiselHelpers.pipelineConnect(
    prevOut = c_exu.io.out,
    thisIn  = d_lsu.io.in,
    thisOut = d_lsu.io.out
  )

  ChiselHelpers.pipelineConnect(
    prevOut = d_lsu.io.out,
    thisIn  = e_wbu.io.in,
    thisOut = e_wbu.io.out
  )
  
  b_idu.io.rs1_data := g_gpr.io.rdata_rs1
  b_idu.io.rs2_data := g_gpr.io.rdata_rs2
  b_idu.io.EXU_rd   := Mux((c_exu.io.in.bits.is_err1 || c_exu.io.in.bits.is_err2), 0.U, c_exu.io.out.bits.rd_addr)
  b_idu.io.LSU_rd   := Mux((c_exu.io.in.bits.is_err1 || c_exu.io.in.bits.is_err2), 0.U, d_lsu.io.out.bits.rd_addr)
  b_idu.io.WBU_rd   := Mux((c_exu.io.in.bits.is_err1 || c_exu.io.in.bits.is_err2), 0.U, e_wbu.io.rd_addr)
  // b_idu.io.gpr_rd   := g_gpr.io.gpr_addr
  // b_idu.io.gpr_valid := g_gpr.io.gpr_valid
  b_idu.io.EXU_state := c_exu.io.state
  b_idu.io.LSU_state := d_lsu.io.state
  b_idu.io.WBU_state := e_wbu.io.state

  g_gpr.io.rs1_addr := b_idu.io.rs1_addr
  g_gpr.io.rs2_addr := b_idu.io.rs2_addr
  
  g_gpr.io.rd_addr  := e_wbu.io.rd_addr
  g_gpr.io.rd_data  := e_wbu.io.rd_data
  g_gpr.io.rd_valid := e_wbu.io.rd_valid

  e_wbu.io.out.ready := true.B

  val err1_reg = RegInit(false.B)
  val err2_reg = RegInit(false.B)
  val pc_fix_reg = RegInit(0.U(32.W))

  err1_reg := MuxCase(false.B, Seq(
    (err1_reg ===  true.B) -> Mux((a_ifu.io.out.ready && a_ifu.io.out.valid), false.B, true.B),
    (err1_reg === false.B) -> Mux(c_exu.io.is_err, true.B, false.B)
  ))

  err2_reg := MuxCase(false.B, Seq(
    (err2_reg ===  true.B) -> Mux((b_idu.io.out.ready && b_idu.io.out.valid), false.B, true.B),
    (err2_reg === false.B) -> Mux(c_exu.io.is_err, true.B, false.B)
  ))

  pc_fix_reg := Mux(c_exu.io.is_err, c_exu.io.pc_next, pc_fix_reg)

  val pc = RegInit("h80000000".U(32.W))
  pc := Mux(a_ifu.io.out.ready && a_ifu.io.out.valid, Mux(err1_reg, pc_fix_reg, pc + 4.U), pc)
  a_ifu.io.pc := pc
  a_ifu.io.err1_in := err1_reg
  b_idu.io.err2_in := err2_reg
}
