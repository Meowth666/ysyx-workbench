import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_IDU extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new IFU_IDU))
    val out = Decoupled(new IDU_EXU)
    val rs1_addr = Output(UInt(5.W))
    val rs2_addr = Output(UInt(5.W))
    val rs1_data = Input(UInt(32.W))
    val rs2_data = Input(UInt(32.W))
    val EXU_rd   = Input(UInt(5.W))
    val LSU_rd   = Input(UInt(5.W)) 
    val WBU_rd   = Input(UInt(5.W)) 
    val EXU_state = Input(Bool())
    val LSU_state = Input(Bool())
    val WBU_state = Input(Bool())
    val err2_in = Input(Bool()) 
  })
  ChiselHelpers.dontTouchBundleRecursive(io)

  val isaddi = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0000010011".U
  val isxori = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1000010011".U
  val isori  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1100010011".U
  val isandi = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1110010011".U
  val issrai = Cat(io.in.bits.inst(31,26), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0100001010010011".U
  val issrli = Cat(io.in.bits.inst(31,26), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0000001010010011".U
  val isslli = Cat(io.in.bits.inst(31,26), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0000000010010011".U
  val issltiu = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0110010011".U
  val isslti  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0100010011".U

  val islui  = io.in.bits.inst(6,0) === "b0110111".U

  val isadd  = Cat(io.in.bits.inst(31,25), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b00000000000110011".U
  val isxor  = Cat(io.in.bits.inst(31,25), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b00000001000110011".U
  val isor   = Cat(io.in.bits.inst(31,25), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b00000001100110011".U
  val isand  = Cat(io.in.bits.inst(31,25), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b00000001110110011".U
  val issub  = Cat(io.in.bits.inst(31,25), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b01000000000110011".U
  val issra  = Cat(io.in.bits.inst(31,26), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0100001010110011".U
  val issrl  = Cat(io.in.bits.inst(31,26), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0000001010110011".U
  val isslt   = Cat(io.in.bits.inst(31,25), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b00000000100110011".U
  val issltu  = Cat(io.in.bits.inst(31,25), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b00000000110110011".U
  val issll = Cat(io.in.bits.inst(31,25), io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b00000000010110011".U

  val isauipc  = io.in.bits.inst(6,0) === "b0010111".U
  val isjal  = io.in.bits.inst(6,0) === "b1101111".U
  val isjalr  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0001100111".U

  val isbeq  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0001100011".U
  val isbne  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0011100011".U
  val isbge = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1011100011".U
  val isblt = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1001100011".U
  val isbltu= Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1101100011".U
  val isbgeu= Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1111100011".U

  val issw  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0100100011".U
  val issb  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0000100011".U
  val issh  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0010100011".U

  val islbu = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1000000011".U
  val islb  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0000000011".U
  val islw  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0100000011".U
  val islh  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0010000011".U
  val islhu = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b1010000011".U

  val iscsrrs  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0101110011".U
  val iscsrrw  = Cat(io.in.bits.inst(14,12), io.in.bits.inst(6,0)) === "b0011110011".U
  val isecall   = io.in.bits.inst === "b00000000000000000000000001110011".U
  val ismret    = io.in.bits.inst === "b00110000001000000000000001110011".U
  val isebreak  = io.in.bits.inst === "b00000000000100000000000001110011".U

  val inst_type = MuxCase(0.U(4.W), Seq(
    (isaddi || isxori || isori || isandi || isslti || issltiu)  -> 1.U(4.W), //addi,xori,ori,andi,slti,sltiu
    (islui)  -> 2.U(4.W), //lui
    (isadd || isxor || isor || isand || isslt || issltu || issll || issra || issub || issrl)  -> 3.U(4.W), //add,sub,xor,or,and,sll,srl,sra,slt,sltu
    (isauipc)  -> 4.U(4.W), //auipc
    (isjal)  -> 5.U(4.W), //jal
    (isjalr)  -> 6.U(4.W), //jalr
    (isbeq || isbne || isblt || isbge || isbltu || isbgeu)  -> 7.U(4.W), //beq,bne,blt,bge,bltu,bgeu
    (issw || issb || issh)  -> 8.U(4.W), //sw,sh,sb
    (islw || islb || islh || islbu || islhu)  -> 9.U(4.W), //lb,lbu,lh,lhu,lw
    (issrai || isslli || issrli)  -> 10.U(4.W), //slli,srli,srai
    (iscsrrs || iscsrrw) -> 11.U(4.W)
  ))
  val imm = MuxCase(0.U(32.W), Seq(
    (inst_type === 1.U(4.W)) -> Cat(Fill(20, io.in.bits.inst(31)), io.in.bits.inst(31,20)), // I 型
    (inst_type === 2.U(4.W)) -> Cat(io.in.bits.inst(31,12), Fill(12, 0.U)),               // U 型
    (inst_type === 4.U(4.W)) -> Cat(io.in.bits.inst(31,12), Fill(12, 0.U)),               // U 型
    (inst_type === 5.U(4.W)) -> Cat(Fill(11, io.in.bits.inst(31)), io.in.bits.inst(31), io.in.bits.inst(19,12), io.in.bits.inst(20), io.in.bits.inst(30,21), 0.U), // J 型
    (inst_type === 6.U(4.W)) -> Cat(Fill(20, io.in.bits.inst(31)), io.in.bits.inst(31,20)), // I 型
    (inst_type === 7.U(4.W)) -> Cat(Fill(19, io.in.bits.inst(31)), io.in.bits.inst(31), io.in.bits.inst(7), io.in.bits.inst(30,25), io.in.bits.inst(11,8), 0.U), // B 型
    (inst_type === 8.U(4.W)) -> Cat(Fill(20, io.in.bits.inst(31)), io.in.bits.inst(31,25), io.in.bits.inst(11,7)), // S 型
    (inst_type === 9.U(4.W)) -> Cat(Fill(20, io.in.bits.inst(31)), io.in.bits.inst(31,20)), // I 型
    (inst_type ===10.U(4.W)) -> io.in.bits.inst(25,20), // I 型
    (inst_type ===11.U(4.W)) -> Cat(Fill(20, 0.U), io.in.bits.inst(31,20))
  ))

  io.out.bits.exu_type := MuxCase(0.U(4.W), Seq(
    (isxori || isxor)  -> 1.U(4.W),
    (isori  || isor)   -> 2.U(4.W),
    (isandi || isand)  -> 3.U(4.W),
    (isslli || issll)  -> 4.U(4.W),
    (issrli || issrl)  -> 5.U(4.W),
    (issrai || issra)  -> 6.U(4.W),
    (isslti || isslt)  -> 7.U(4.W),
    (issltiu|| issltu) -> 8.U(4.W),
    (issub)            -> 9.U(4.W),
    (iscsrrs|| iscsrrw)-> 10.U(4.W)
  ))

  io.out.bits.LSU_type := MuxCase(0.U(4.W), Seq(
    issw  -> 1.U(4.W),
    issh  -> 2.U(4.W),
    issb  -> 3.U(4.W),
    islb  -> 4.U(4.W),
    islbu -> 5.U(4.W),
    islh  -> 6.U(4.W),
    islhu -> 7.U(4.W),
    islw  -> 8.U(4.W)
  ))

  io.out.bits.csr_type := MuxCase(0.U(4.W), Seq(
    iscsrrs  -> 1.U(4.W),
    iscsrrw  -> 2.U(4.W)
  ))

  io.out.bits.ecall_mret := MuxCase(0.U(4.W), Seq(
    isecall  -> 1.U(4.W),
    ismret   -> 2.U(4.W)
  ))

  io.out.bits.rd_addr := MuxCase(io.in.bits.inst(11,7), Seq(
    (inst_type === 7.U(4.W) || inst_type === 8.U(4.W))  -> 0.U, //add,sub,xor,or,and,sll,srl,sra,slt,sltu,beq,bne,blt,bge,bltu,bgeu,sw,sh,sb,lb,lbu,lh,lhu,lw
  ))

  io.rs1_addr := MuxCase(io.in.bits.inst(19,15), Seq(
    (inst_type === 2.U(4.W) || inst_type === 4.U(4.W) || inst_type === 5.U(4.W)) -> 0.U, //add,sub,xor,or,and,sll,srl,sra,slt,sltu,beq,bne,blt,bge,bltu,bgeu,sw,sh,sb,lb,lbu,lh,lhu,lw
  ))

  io.rs2_addr := MuxCase(0.U, Seq(
    (inst_type === 3.U(4.W) || inst_type === 7.U(4.W) || inst_type === 8.U(4.W)) -> io.in.bits.inst(24,20), //add,sub,xor,or,and,sll,srl,sra,slt,sltu,beq,bne,blt,bge,bltu,bgeu,sw,sh,sb,lb,lbu,lh,lhu,lw
  )) 
  
  io.out.bits.imm_data := imm
  io.out.bits.rs1_data := io.rs1_data
  io.out.bits.rs2_data := io.rs2_data
  io.out.bits.data_type := inst_type
  io.out.bits.pc_data  := io.in.bits.pc
  io.out.bits.is_err1 := io.in.bits.is_err1
  
  val isRAW1 = (io.EXU_state === true.B) && (io.in.bits.is_err1 === false.B) && ((io.rs1_addr =/= 0.U && (io.rs1_addr === io.EXU_rd)) || (io.rs2_addr =/= 0.U && (io.rs2_addr === io.EXU_rd)))
  val isRAW2 = (io.LSU_state === true.B) && (io.in.bits.is_err1 === false.B) && ((io.rs1_addr =/= 0.U && (io.rs1_addr === io.LSU_rd)) || (io.rs2_addr =/= 0.U && (io.rs2_addr === io.LSU_rd)))
  val isRAW3 = (io.WBU_state === true.B) && (io.in.bits.is_err1 === false.B) && ((io.rs1_addr =/= 0.U && (io.rs1_addr === io.WBU_rd)) || (io.rs2_addr =/= 0.U && (io.rs2_addr === io.WBU_rd)))
  val valid_out_reg = RegInit(false.B)
  val ready_in_reg = RegInit(true.B)
  ready_in_reg := MuxCase(false.B, Seq(
    ready_in_reg -> Mux(io.in.valid, false.B, true.B),
    (ready_in_reg === false.B) -> Mux((valid_out_reg && io.out.ready) && ((isRAW1 || isRAW2 || isRAW3) === false.B), true.B, false.B)
  ))
  val valid_in_reg = RegInit(false.B)
  valid_in_reg := MuxCase(false.B, Seq(
    valid_in_reg -> Mux((isRAW1 || isRAW2 || isRAW3) === false.B, false.B, true.B),
    (valid_in_reg === false.B) -> Mux(io.in.valid && ready_in_reg, true.B, false.B)
  ))
  valid_out_reg := MuxCase(false.B, Seq(
    valid_out_reg -> Mux(io.out.ready, false.B, true.B),
    (valid_out_reg === false.B) -> Mux(valid_in_reg && ((isRAW1 || isRAW2 || isRAW3) === false.B), true.B, false.B)
  ))
  io.out.bits.pc_next_type := MuxCase(0.U, Seq(
    isjal  -> 1.U(4.W),
    isjalr -> 2.U(4.W),
    isbeq  -> 3.U(4.W),
    isbne  -> 4.U(4.W),
    isblt  -> 5.U(4.W),
    isbge  -> 6.U(4.W),
    isbltu -> 7.U(4.W),
    isbgeu -> 8.U(4.W),
    isecall-> 9.U(4.W),
    ismret ->10.U(4.W)
  ))
  io.out.valid := valid_out_reg
  // ready 反压
  io.in.ready := ready_in_reg
  io.out.bits.is_err2 := io.err2_in
}

