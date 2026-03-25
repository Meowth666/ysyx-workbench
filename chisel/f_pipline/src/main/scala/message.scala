import chisel3._
import chisel3.util._
class IFU_IDU extends Bundle {
  val pc   = UInt(32.W) // IFU <-> IDU
  val inst = UInt(32.W)
  val is_err1 = Bool()
}

class IDU_EXU extends Bundle {
  val exu_type = UInt(4.W)
  val data_type = UInt(4.W)
  val pc_next_type = UInt(4.W)
  val rd_addr  = UInt(5.W)
  val LSU_type = UInt(4.W)
  val rs1_data = UInt(32.W)
  val rs2_data = UInt(32.W)
  val imm_data = UInt(32.W)
  val pc_data  = UInt(32.W)
  val csr_type = UInt(2.W)
  val ecall_mret = UInt(2.W)
  val is_err1 = Bool()
  val is_err2 = Bool()
}

class EXU_LSU extends Bundle {
  val result = UInt(32.W) // EXU <-> LSU
  val rd_addr  = UInt(5.W)
  val LSU_type = UInt(4.W)
  val rs2_data = UInt(32.W)
  val is_err1 = Bool()
  val is_err2 = Bool()
}

class LSU_WBU extends Bundle {
  val rd_addr = UInt(5.W) // LSU <-> WBU
  val rd_data = UInt(32.W) // EXU <-> LSU
  val is_err1 = Bool()
  val is_err2 = Bool()
}

class END extends Bundle {

}