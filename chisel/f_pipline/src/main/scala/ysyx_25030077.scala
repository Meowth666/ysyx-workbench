import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077 extends Module {
  val io = IO(new Bundle {val interrupt = Input(Bool()) // 外部中断信号
    val master_awready = Input(Bool())
    val master_awvalid = Output(Bool())
    val master_awaddr = Output(UInt(32.W))
    val master_awid = Output(UInt(4.W))
    val master_awlen = Output(UInt(8.W))
    val master_awsize = Output(UInt(3.W))
    val master_awburst = Output(UInt(2.W))
    val master_wready = Input(Bool())
    val master_wvalid = Output(Bool())
    val master_wdata = Output(UInt(32.W))
    val master_wstrb = Output(UInt(4.W))
    val master_wlast = Output(Bool())
    val master_bready = Output(Bool())
    val master_bvalid = Input(Bool())
    val master_bid = Input(UInt(4.W))
    val master_bresp = Input(UInt(2.W))
    val master_arready = Input(Bool())
    val master_arvalid = Output(Bool())
    val master_araddr = Output(UInt(32.W))
    val master_arid = Output(UInt(4.W))
    val master_arlen = Output(UInt(8.W))
    val master_arsize = Output(UInt(3.W))
    val master_arburst = Output(UInt(2.W))
    val master_rready = Output(Bool())
    val master_rvalid = Input(Bool())
    val master_rdata = Input(UInt(32.W))
    val master_rid = Input(UInt(4.W))
    val master_rlast = Input(Bool())
    val master_rresp = Input(UInt(2.W))

    val master_arlock = Output(Bool())
    val master_arcache = Output(UInt(4.W))
    val master_arprot = Output(UInt(3.W))
    val master_arqos = Output(UInt(4.W))

    val master_awlock = Output(Bool())
    val master_awcache = Output(UInt(4.W))
    val master_awprot = Output(UInt(3.W))
    val master_awqos = Output(UInt(4.W))

    val slave_arlock = Input(Bool())
    val slave_arcache = Input(UInt(4.W))
    val slave_arprot = Input(UInt(3.W))
    val slave_arqos = Input(UInt(4.W))

    val slave_awlock = Input(Bool())
    val slave_awcache = Input(UInt(4.W))
    val slave_awprot = Input(UInt(3.W))
    val slave_awqos = Input(UInt(4.W))
    
    val slave_awready = Output(Bool())
    val slave_awvalid = Input(Bool())
    val slave_awaddr = Input(UInt(32.W))
    val slave_awid = Input(UInt(4.W))
    val slave_awlen = Input(UInt(8.W))
    val slave_awsize = Input(UInt(3.W))
    val slave_awburst = Input(UInt(2.W))
    val slave_wready = Output(Bool())
    val slave_wvalid = Input(Bool())
    val slave_wdata = Input(UInt(32.W))
    val slave_wstrb = Input(UInt(4.W))
    val slave_wlast = Input(Bool())
    val slave_bready = Input(Bool())
    val slave_bvalid = Output(Bool())
    val slave_bid = Output(UInt(4.W))
    val slave_bresp = Output(UInt(2.W))
    val slave_arready = Output(Bool())
    val slave_arvalid = Input(Bool())
    val slave_araddr = Input(UInt(32.W))
    val slave_arid = Input(UInt(4.W))
    val slave_arlen = Input(UInt(8.W))
    val slave_arsize = Input(UInt(3.W))
    val slave_arburst = Input(UInt(2.W))
    val slave_rready = Input(Bool())
    val slave_rvalid = Output(Bool())
    val slave_rdata = Output(UInt(32.W))
    val slave_rid = Output(UInt(4.W))
    val slave_rlast = Output(Bool())
    val slave_rresp = Output(UInt(2.W))
  })

  val a_ifu = Module(new ysyx_25030077_IFU)
  val b_idu = Module(new ysyx_25030077_IDU)
  val g_gpr = Module(new ysyx_25030077_gpr)
  val c_exu = Module(new ysyx_25030077_EXU)
  val d_lsu = Module(new ysyx_25030077_LSU)
  val e_wbu = Module(new ysyx_25030077_WBU)
  val f_arbiter = Module(new ysyx_25030077_arbiter)

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
  a_ifu.io.ar_ready := f_arbiter.io.IFU_ar_ready
  a_ifu.io.r_valid  := f_arbiter.io.IFU_r_valid
  a_ifu.io.r_data   := f_arbiter.io.IFU_r_data
  
  b_idu.io.rs1_data := g_gpr.io.rdata_rs1
  b_idu.io.rs2_data := g_gpr.io.rdata_rs2
  b_idu.io.EXU_rd   := Mux((c_exu.io.in.bits.is_err1 || c_exu.io.in.bits.is_err2), 0.U, c_exu.io.in.bits.rd_addr)
  b_idu.io.LSU_rd   := Mux((c_exu.io.in.bits.is_err1 || c_exu.io.in.bits.is_err2), 0.U, d_lsu.io.in.bits.rd_addr)
  b_idu.io.WBU_rd   := Mux((c_exu.io.in.bits.is_err1 || c_exu.io.in.bits.is_err2), 0.U, e_wbu.io.in.bits.rd_addr)
  // b_idu.io.gpr_rd   := g_gpr.io.gpr_addr
  // b_idu.io.gpr_valid := g_gpr.io.gpr_valid
  b_idu.io.EXU_state := c_exu.io.state
  b_idu.io.LSU_state := d_lsu.io.state
  b_idu.io.WBU_state := e_wbu.io.state

  d_lsu.io.ar_ready := f_arbiter.io.LSU_ar_ready
  d_lsu.io.r_valid  := f_arbiter.io.LSU_r_valid
  d_lsu.io.r_data   := f_arbiter.io.LSU_r_data
  d_lsu.io.b_valid  := f_arbiter.io.LSU_b_valid
  d_lsu.io.aw_ready := f_arbiter.io.LSU_aw_ready
  d_lsu.io.w_ready  := f_arbiter.io.LSU_w_ready

  g_gpr.io.rs1_addr := b_idu.io.rs1_addr
  g_gpr.io.rs2_addr := b_idu.io.rs2_addr
  
  g_gpr.io.rd_addr  := e_wbu.io.rd_addr
  g_gpr.io.rd_data  := e_wbu.io.rd_data
  g_gpr.io.rd_valid := e_wbu.io.rd_valid

  e_wbu.io.out.ready := true.B

  f_arbiter.io.IFU_ar_addr := a_ifu.io.ar_addr
  f_arbiter.io.IFU_ar_valid := a_ifu.io.ar_valid
  f_arbiter.io.LSU_ar_addr := d_lsu.io.ar_addr
  f_arbiter.io.LSU_ar_valid := d_lsu.io.ar_valid
  f_arbiter.io.IFU_r_ready := a_ifu.io.r_ready
  f_arbiter.io.LSU_r_ready := d_lsu.io.r_ready
  f_arbiter.io.LSU_aw_addr := d_lsu.io.aw_addr
  f_arbiter.io.LSU_aw_valid := d_lsu.io.aw_valid
  f_arbiter.io.LSU_w_data := d_lsu.io.w_data
  f_arbiter.io.LSU_w_valid := d_lsu.io.w_valid
  f_arbiter.io.LSU_rw_type := d_lsu.io.rw_type
  f_arbiter.io.LSU_b_ready := d_lsu.io.b_ready

  f_arbiter.io.axi_ar_ready := io.master_arready
  f_arbiter.io.axi_aw_ready := io.master_awready
  f_arbiter.io.axi_w_ready := io.master_wready
  f_arbiter.io.axi_r_valid := io.master_rvalid
  f_arbiter.io.axi_r_data := io.master_rdata
  f_arbiter.io.axi_r_resp := io.master_rresp
  f_arbiter.io.axi_r_id := io.master_rid
  f_arbiter.io.axi_r_last := io.master_rlast
  f_arbiter.io.axi_b_valid := io.master_bvalid
  f_arbiter.io.axi_b_resp := io.master_bresp
  f_arbiter.io.axi_b_id := io.master_bid

  io.master_awvalid := f_arbiter.io.axi_aw_valid
  io.master_awaddr := f_arbiter.io.axi_aw_addr
  io.master_awid := f_arbiter.io.axi_aw_id
  io.master_awlen := f_arbiter.io.axi_aw_len
  io.master_awsize := f_arbiter.io.axi_aw_size
  io.master_awburst := f_arbiter.io.axi_aw_burst
  io.master_wvalid := f_arbiter.io.axi_w_valid
  io.master_wdata := f_arbiter.io.axi_w_data
  io.master_wstrb := f_arbiter.io.axi_w_strb
  io.master_wlast := f_arbiter.io.axi_w_last
  io.master_bready := f_arbiter.io.axi_b_ready
  io.master_arvalid := f_arbiter.io.axi_ar_valid
  io.master_araddr := f_arbiter.io.axi_ar_addr
  io.master_arid := f_arbiter.io.axi_ar_id
  io.master_arlen := f_arbiter.io.axi_ar_len
  io.master_arsize := f_arbiter.io.axi_ar_size
  io.master_arburst := f_arbiter.io.axi_ar_burst
  io.master_rready := f_arbiter.io.axi_r_ready

  io.master_arlock := false.B
  io.master_arcache := 0.U
  io.master_arprot := 0.U
  io.master_arqos := 0.U
  io.master_awlock := false.B
  io.master_awcache := 0.U
  io.master_awprot := 0.U
  io.master_awqos := 0.U
  io.slave_awready := false.B
  io.slave_wready := false.B
  io.slave_bvalid := false.B
  io.slave_bid := 0.U
  io.slave_bresp := 0.U
  io.slave_arready := false.B
  io.slave_rvalid := false.B
  io.slave_rdata := 0.U
  io.slave_rid := 0.U
  io.slave_rlast := false.B
  io.slave_rresp := 0.U

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

  val pc = RegInit("h30000000".U(32.W))
  pc := Mux(a_ifu.io.out.ready && a_ifu.io.out.valid, Mux(err1_reg, pc_fix_reg, pc + 4.U), pc)
  a_ifu.io.pc := pc
  a_ifu.io.err1_in := err1_reg
  b_idu.io.err2_in := err2_reg
}
