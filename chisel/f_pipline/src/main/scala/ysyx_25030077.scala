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
  b_idu.io.EXU_rd   := c_exu.io.out.bits.rd_addr
  b_idu.io.LSU_rd   := d_lsu.io.out.bits.rd_addr
  b_idu.io.WBU_rd   := e_wbu.io.rd_addr

  g_gpr.io.rs1_addr := b_idu.io.rs1_addr
  g_gpr.io.rs2_addr := b_idu.io.rs2_addr
  
  g_gpr.io.rd_addr  := e_wbu.io.rd_addr
  g_gpr.io.rd_data  := e_wbu.io.rd_data
  g_gpr.io.rd_valid := e_wbu.io.rd_valid

  e_wbu.io.out.ready := true.B
}
