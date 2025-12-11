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
    val index = io.pc(4,2)
    val j = RegInit(0.U(3.W))
    val k = RegInit(0.U(3.W))
    val temp = RegInit(0.U(3.W))
    val is_full = RegInit(false.B)
    val serach_addr = 0x0f001600.U(32.W) + Cat(index, 0.U(4.W)) + Cat((j + 1.U), 0.U(2.W))
    val is_tag = ((io.r_data(27,1) === io.pc(31,5)) && (io.r_data(0,0) === 1.U))
    val is_notvalid = (io.r_data(0,0) === 0.U)
    val tag_addr = 0x0f001680.U(32.W) + Cat(index, 0.U(4.W)) + Cat(j(1,0), 0.U(2.W))
    val inst_addr = io.pc + Cat(k(1,0), 0.U(2.W))
    

    io.ifu_ready    := canAccept   
    
    state_reg := MuxCase(0.U, Seq(
        (state_reg === 0.U) -> Mux((io.ifu_valid && canAccept), 1.U, 0.U),
        (state_reg === 1.U) -> Mux((io.r_valid   && canAccept),  Mux(is_tag, 2.U, Mux((j === 3.U || is_notvalid), 3.U, 1.U)), 1.U),
        (state_reg === 2.U) -> Mux((io.r_valid   && canAccept),  6.U, 2.U),
        (state_reg === 6.U) -> 0.U,
        (state_reg === 3.U) -> Mux((io.r_valid   && canAccept),  4.U, 3.U),
        (state_reg === 4.U) -> Mux((io.aw_ready),  5.U, 4.U),
        (state_reg === 5.U) -> Mux((io.w_ready) ,  Mux(k === 4.U, 0.U, 3.U), 5.U),
    ))

    j := MuxCase(j, Seq(
        (state_reg === 0.U) -> 0.U,
        (state_reg === 1.U) -> Mux((io.r_valid && canAccept), j + 1.U, j)
    ))

    k := MuxCase(k, Seq(
        (state_reg === 0.U) -> 0.U,
        (state_reg === 4.U) -> Mux(io.w_ready, k + 1.U, k)
    ))
    val temp1 = temp + 1.U;
    temp := Mux(state_reg === 5.U && io.w_ready && k === 4.U && is_full, Cat(0.U, temp1(1,0)), temp)
    ar_valid_reg := MuxCase(false.B, Seq(
        (state_reg === 0.U) -> Mux((io.ifu_valid && canAccept), 1.U, 0.U),
        (state_reg === 1.U) -> Mux(ar_valid_reg, Mux(io.ar_ready, 0.U, 1.U), Mux((io.r_valid && canAccept), 1.U, 0.U)),
        (state_reg === 2.U) -> Mux((ar_valid_reg && io.ar_ready), 0.U, ar_valid_reg),
        (state_reg === 3.U) -> Mux((ar_valid_reg && io.ar_ready), 0.U, ar_valid_reg),
        (state_reg === 5.U) -> Mux(k =/= 4.U && io.w_ready, 1.U, ar_valid_reg),
    ))  
    io.ar_valid := ar_valid_reg
    
    ar_addr_reg  := MuxCase(0.U, Seq(
        (state_reg === 0.U) -> Mux((io.ifu_valid && canAccept), 0x0f001600.U(32.W) + Cat(index, 0.U(4.W)), 0.U),
        (state_reg === 1.U) -> Mux((io.r_valid && canAccept), Mux(is_tag, tag_addr, Mux((j === 3.U || is_notvalid), io.pc, serach_addr)), ar_addr_reg),   
        (state_reg === 2.U) -> ar_addr_reg,
        (state_reg === 5.U) -> inst_addr
    ))  

    is_full := MuxCase(is_full, Seq(
        (state_reg === 1.U) -> Mux((io.r_valid && canAccept), Mux((j === 3.U && (~is_notvalid)), true.B, false.B), is_full)
    ))
    io.ar_addr  := ar_addr_reg
    rdata_reg :=  Mux((((state_reg === 3.U && k === 0.U) || state_reg === 2.U) && io.r_valid), io.r_data, rdata_reg)  
    val rdata_w = RegInit(0.U(32.W))
    rdata_w :=  Mux((state_reg === 3.U && io.r_valid), io.r_data, rdata_w)
    io.icache_valid := ((state_reg === 6.U) || (state_reg === 5.U && io.w_ready && k === 4.U))
    io.icache_data  := rdata_reg

    io.aw_valid := ((state_reg === 4.U) || (state_reg === 5.U))
    val w_index = index + k
    val w_index1 = index + k - 1.U
    io.aw_addr  := MuxCase(0.U, Seq(
                     (state_reg === 4.U) -> Mux(is_full, 0x0f001600.U(32.W) + Cat(w_index(2,0), 0.U(4.W)) + Cat(temp, 0.U(2.W)), 0x0f001600.U(32.W) + Cat(w_index(2,0), 0.U(4.W)) + Cat(j - 1.U, 0.U(2.W))),
                     (state_reg === 5.U) -> Mux(is_full, 0x0f001680.U(32.W) + Cat(w_index1(2,0), 0.U(4.W)) + Cat(temp, 0.U(2.W)), 0x0f001680.U(32.W) + Cat(w_index1(2,0), 0.U(4.W)) + Cat(j - 1.U, 0.U(2.W)))
              ))
    io.w_valid := ((state_reg === 4.U) || (state_reg === 5.U))
    io.w_data  := MuxCase(0.U, Seq(
                     (state_reg === 4.U) -> Cat(0.U(4.W), inst_addr(31,5), 1.U(1.W)),
                     (state_reg === 5.U) -> rdata_w
              ))
}

