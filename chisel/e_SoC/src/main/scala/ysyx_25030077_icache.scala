import chisel3._
import chisel3.util._
import chisel3.util.random.LFSR
import ChiselHelpers._

class ysyx_25030077_icache extends Module {
  val io = IO(new Bundle {
    val ifu_valid = Input(Bool())
    val pc        = Input(UInt(32.W))
    val icache_valid = Output(Bool())
    val icache_data = Output(UInt(32.W))
    
    val ar_valid = Output(Bool())
    val ar_addr = Output(UInt(32.W))
    val ar_ready = Input(Bool())

    val aw_valid = Output(Bool())
    val aw_addr = Output(UInt(32.W))
    val aw_ready = Input(Bool()) 

    val w_valid = Output(Bool())
    val w_data = Output(UInt(32.W))
    val w_ready = Input(Bool())

    val r_valid = Input(Bool())
    val r_data = Input(UInt(32.W))

    val icache_ready = Input(Bool())   
    val ifu_ready = Output(Bool())
  })
    
    ChiselHelpers.dontTouchBundleRecursive(io)   
    val state_reg = RegInit(0.U(3.W))
    val canAccept = true.B
    val rdata_reg = RegInit(0.U(32.W))
    val ar_valid_reg = RegInit(false.B)
    val ar_addr_reg  = RegInit(0.U(32.W))
    val index = Cat(io.pc(5,2), 0.U(2.W)) + 0x0f001600.U(32.W)
    val is_tag = ((io.r_data(26,1) === io.pc(31,6)) && (io.r_data(0,0) === 1.U))
    val tag_addr = Cat(io.pc(5,2), 0.U(2.W)) + 0x0f001800.U(32.W)

    io.ifu_ready    := canAccept   
    
    state_reg := MuxCase(0.U, Seq(
        (state_reg === 0.U) -> Mux((io.ifu_valid && canAccept), 1.U, 0.U),
        (state_reg === 1.U) -> Mux((io.r_valid   && canAccept),  Mux(is_tag, 2.U, 3.U), 1.U),
        (state_reg === 2.U) -> Mux((io.r_valid   && canAccept),  6.U, 2.U),
        (state_reg === 6.U) -> 0.U,
        (state_reg === 3.U) -> Mux((io.r_valid   && canAccept),  4.U, 3.U),
        (state_reg === 4.U) -> Mux((io.aw_ready),  5.U, 4.U),
        (state_reg === 5.U) -> Mux((io.w_ready) ,  0.U, 5.U),
    ))

    ar_valid_reg := MuxCase(false.B, Seq(
        (state_reg === 0.U) -> Mux((io.ifu_valid && canAccept), 1.U, 0.U),
        (state_reg === 1.U) -> Mux(ar_valid_reg, Mux(io.ar_ready, 0.U, 1.U), Mux((io.r_valid && canAccept), 1.U, 0.U)),
        (state_reg === 2.U) -> Mux((ar_valid_reg && io.ar_ready), 0.U, ar_valid_reg),
        (state_reg === 3.U) -> Mux((ar_valid_reg && io.ar_ready), 0.U, ar_valid_reg)
    ))  
    io.ar_valid := ar_valid_reg
    
    ar_addr_reg  := MuxCase(0.U, Seq(
        (state_reg === 0.U) -> Mux((io.ifu_valid && canAccept), index, 0.U),
        (state_reg === 1.U) -> Mux((io.r_valid && canAccept), Mux(is_tag, tag_addr, io.pc), ar_addr_reg),   
        (state_reg === 2.U) -> ar_addr_reg,
        (state_reg === 3.U) -> ar_addr_reg
    ))  
    io.ar_addr  := ar_addr_reg
    rdata_reg :=  Mux(((state_reg === 3.U || state_reg === 2.U) && io.r_valid), io.r_data, rdata_reg)  

    io.icache_valid := ((state_reg === 6.U) || (state_reg === 5.U && io.w_ready))
    io.icache_data  := rdata_reg

    io.aw_valid := ((state_reg === 4.U) || (state_reg === 5.U))
    io.aw_addr  := MuxCase(0.U, Seq(
                     (state_reg === 4.U) -> index,
                     (state_reg === 5.U) -> tag_addr
              ))
    io.w_valid := ((state_reg === 4.U) || (state_reg === 5.U))
    io.w_data  := MuxCase(0.U, Seq(
                     (state_reg === 4.U) -> Cat(0.U(5.W), io.pc(31,6), 1.U(1.W)),
                     (state_reg === 5.U) -> rdata_reg
              ))
}

