import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_EXU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new IDU_EXU))
    val out = Decoupled(new EXU_LSU)
    val pc_next = Output(UInt(32.W))
    val is_err = Output(Bool())
    val state = Output(Bool())
  })
  ChiselHelpers.dontTouchBundleRecursive(io)
  val csr_mepc = RegInit(0.U(32.W))
  val csr_mtvec= RegInit(0.U(32.W))
  val csr_mstatus= RegInit(0.U(32.W))
  val csr_mcause = RegInit(0.U(32.W))
  val csr_mvenproid = RegInit("h79737978".U(32.W))
  val csr_mvarchid  = RegInit(25030077.U(32.W))
  val data1 = MuxCase(io.in.bits.rs1_data, Seq(
    (io.in.bits.data_type === 2.U(4.W)) -> 0.U,
    (io.in.bits.data_type === 4.U(4.W)) -> io.in.bits.pc_data, 
    (io.in.bits.data_type === 5.U(4.W)) -> io.in.bits.pc_data, 
    (io.in.bits.data_type === 6.U(4.W)) -> io.in.bits.pc_data, 
  ))
  val csr_data = MuxCase(0.U, Seq(
    (io.in.bits.imm_data === "h00000341".U(32.W)) -> csr_mepc,
    (io.in.bits.imm_data === "h00000305".U(32.W)) -> csr_mtvec, 
    (io.in.bits.imm_data === "h00000300".U(32.W)) -> csr_mstatus, 
    (io.in.bits.imm_data === "h00000342".U(32.W)) -> csr_mcause, 
    (io.in.bits.imm_data === "h00000F11".U(32.W)) -> csr_mvenproid, 
    (io.in.bits.imm_data === "h00000F12".U(32.W)) -> csr_mvarchid
  ))

  csr_mepc := Mux(io.in.bits.ecall_mret === 1.U(2.W), io.in.bits.pc_data, MuxCase(csr_mepc, Seq(
    (io.in.bits.imm_data === "h00000341".U(32.W) && io.in.bits.csr_type === 1.U(4.W)) -> (csr_mepc  | data1),
    (io.in.bits.imm_data === "h00000341".U(32.W) && io.in.bits.csr_type === 2.U(4.W)) -> data1
  )))
  csr_mtvec := MuxCase(csr_mtvec, Seq(
    (io.in.bits.imm_data === "h00000305".U(32.W) && io.in.bits.csr_type === 1.U(4.W)) -> (csr_mtvec  | data1),
    (io.in.bits.imm_data === "h00000305".U(32.W) && io.in.bits.csr_type === 2.U(4.W)) -> data1
  ))
  csr_mstatus := MuxCase(csr_mstatus, Seq(
    (io.in.bits.imm_data === "h00000300".U(32.W) && io.in.bits.csr_type === 1.U(4.W)) -> (csr_mstatus | data1),
    (io.in.bits.imm_data === "h00000300".U(32.W) && io.in.bits.csr_type === 2.U(4.W)) -> data1
  ))
  csr_mcause := Mux(io.in.bits.ecall_mret === 1.U(2.W), 11.U(32.W), MuxCase(csr_mcause, Seq(
    (io.in.bits.imm_data === "h00000342".U(32.W) && io.in.bits.csr_type === 1.U(4.W)) -> (csr_mcause  | data1),
    (io.in.bits.imm_data === "h00000342".U(32.W) && io.in.bits.csr_type === 2.U(4.W)) -> data1
  )))
  csr_mvenproid := MuxCase(csr_mvenproid, Seq(
    (io.in.bits.imm_data === "h00000f11".U(32.W) && io.in.bits.csr_type === 1.U(4.W)) -> (csr_mvenproid  | data1),
    (io.in.bits.imm_data === "h00000f11".U(32.W) && io.in.bits.csr_type === 2.U(4.W)) -> data1
  ))
  csr_mvarchid := MuxCase(csr_mvarchid, Seq(
    (io.in.bits.imm_data === "h00000f12".U(32.W) && io.in.bits.csr_type === 1.U(4.W)) -> (csr_mvarchid  | data1),
    (io.in.bits.imm_data === "h00000f12".U(32.W) && io.in.bits.csr_type === 2.U(4.W)) -> data1
  ))
  val data2 = MuxCase(io.in.bits.imm_data, Seq(
    (io.in.bits.data_type === 3.U(4.W)) -> io.in.bits.rs2_data,        
    (io.in.bits.data_type === 5.U(4.W)) -> 4.U,
    (io.in.bits.data_type === 6.U(4.W)) -> 4.U,
    (io.in.bits.data_type === 7.U(4.W)) -> io.in.bits.rs2_data
  ))
  val pc_est = io.in.bits.pc_data + 4.U
  val pc_next = MuxCase(pc_est, Seq(
    (io.in.bits.pc_next_type === 1.U(4.W)) -> (io.in.bits.pc_data + io.in.bits.imm_data), // jal
    (io.in.bits.pc_next_type === 2.U(4.W)) -> ((io.in.bits.imm_data + io.in.bits.rs1_data) & Cat(Fill(31, 1.U), 0.U(1.W))), // jalr
    (io.in.bits.pc_next_type === 3.U(4.W)) -> Mux(data1 === data2, io.in.bits.pc_data + io.in.bits.imm_data, pc_est), // beq
    (io.in.bits.pc_next_type === 4.U(4.W)) -> Mux(data1 =/= data2, io.in.bits.pc_data + io.in.bits.imm_data, pc_est), // bne
    (io.in.bits.pc_next_type === 5.U(4.W)) -> Mux(data1.asSInt < data2.asSInt, io.in.bits.pc_data + io.in.bits.imm_data, pc_est), // blt
    (io.in.bits.pc_next_type === 6.U(4.W)) -> Mux(data1.asSInt >= data2.asSInt, io.in.bits.pc_data + io.in.bits.imm_data, pc_est), // bge
    (io.in.bits.pc_next_type === 7.U(4.W)) -> Mux(data1 < data2, io.in.bits.pc_data + io.in.bits.imm_data, pc_est), // bltu
    (io.in.bits.pc_next_type === 8.U(4.W)) -> Mux(data1 >= data2, io.in.bits.pc_data + io.in.bits.imm_data, pc_est), // bgeu
    (io.in.bits.pc_next_type === 9.U(4.W)) -> csr_mtvec,
    (io.in.bits.pc_next_type ===10.U(4.W)) -> csr_mepc
  ))
  val out33 = MuxCase((data1 +& data2), Seq(
    (io.in.bits.exu_type === 1.U(4.W)) -> Cat(0.U(1.W), (data1 ^ data2)),
    (io.in.bits.exu_type === 2.U(4.W)) -> Cat(0.U(1.W), (data1 | data2)), 
    (io.in.bits.exu_type === 3.U(4.W)) -> Cat(0.U(1.W), (data1 & data2)), 
    (io.in.bits.exu_type === 4.U(4.W)) -> Cat(0.U(1.W), (data1 << data2(4,0))), 
    (io.in.bits.exu_type === 5.U(4.W)) -> Cat(0.U(1.W), (data1 >> data2(4,0))),
    (io.in.bits.exu_type === 6.U(4.W)) -> Cat(0.U(1.W), (data1.asSInt >> data2(4,0)).asSInt), 
    (io.in.bits.exu_type === 7.U(4.W)) -> Cat(0.U(32.W),(data1.asSInt < data2.asSInt)), 
    (io.in.bits.exu_type === 8.U(4.W)) -> Cat(0.U(32.W), (data1 < data2)), 
    (io.in.bits.exu_type === 9.U(4.W)) -> (data1 -& data2),
    (io.in.bits.exu_type ===10.U(4.W)) -> Cat(0.U(1.W), csr_data)
  ))
  val valid_out_reg = RegInit(false.B)
  valid_out_reg := MuxCase(false.B, Seq(
    valid_out_reg -> Mux(io.out.ready, false.B, true.B),
    (valid_out_reg === false.B) -> Mux(io.in.valid, true.B, false.B)
  ))
  val ready_in_reg = RegInit(true.B)
  ready_in_reg := MuxCase(false.B, Seq(
    ready_in_reg -> Mux(io.in.valid, false.B, true.B),
    (ready_in_reg === false.B) -> Mux(valid_out_reg && io.out.ready, true.B, false.B)
  ))
  io.out.valid := valid_out_reg
  io.in.ready := ready_in_reg
  io.out.bits.result := out33(31,0)
  io.out.bits.rd_addr := io.in.bits.rd_addr
  io.out.bits.LSU_type := io.in.bits.LSU_type
  io.out.bits.rs2_data := io.in.bits.rs2_data
  io.out.bits.is_err1 := io.in.bits.is_err1
  io.out.bits.is_err2 := io.in.bits.is_err2
  val is_err_in = ~(io.in.bits.is_err1 || io.in.bits.is_err2)
  io.pc_next := pc_next
  val is_err0_dly = RegInit(false.B)
  val is_err0 = (pc_est =/= pc_next) && is_err_in
  is_err0_dly := is_err0
  io.is_err := is_err0 && (~is_err0_dly)
  val state_reg = RegInit(false.B)
  state_reg := MuxCase(false.B, Seq(
    state_reg -> Mux(io.out.valid && io.out.ready, false.B, true.B),
    (state_reg === false.B) -> Mux(io.in.valid && io.in.ready, true.B, false.B)
  ))
  io.state := state_reg && is_err_in
}

