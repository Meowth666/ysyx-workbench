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
        val ar_burst = Output(UInt(2.W))
        // val ar_len   = Output(UInt(8.W))

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
    })
    ChiselHelpers.dontTouchBundleRecursive(io)
    io.r_ready := true.B
    io.b_ready := true.B
    val state_reg = RegInit(0.U(3.W))
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
    val data0 = RegInit(0.U(32.W))
    val data1 = RegInit(0.U(32.W))
    val data2 = RegInit(0.U(32.W))
    val data3 = RegInit(0.U(32.W))

    state_reg := MuxCase(0.U, Seq(
        (state_reg === 0.U) -> Mux(io.pc(31, 28) === 0xa.U, 1.U, 7.U),
        (state_reg === 1.U) -> Mux(io.r_valid, Mux(is_tag, 2.U, Mux((j === 3.U || is_notvalid), 3.U, 1.U)), 1.U),
        (state_reg === 2.U) -> Mux(io.r_valid, 6.U, 2.U),
        (state_reg === 6.U) -> Mux(io.out.ready, 0.U, 6.U),
        (state_reg === 3.U) -> Mux(io.r_valid, Mux(k === 3.U, 4.U, 3.U), 3.U),
        (state_reg === 4.U) -> Mux(io.b_valid, 5.U, 4.U),
        (state_reg === 5.U) -> Mux(io.b_valid, Mux(k === 4.U, 6.U, 4.U), 5.U),
        (state_reg === 7.U) -> Mux(io.r_valid, 6.U, 7.U),
    ))

    j := MuxCase(j, Seq(
        (state_reg === 0.U) -> 0.U,
        (state_reg === 1.U) -> Mux(io.r_valid, j + 1.U, j)
    ))
    k := MuxCase(k, Seq(
        (state_reg === 0.U) -> 0.U,
        (state_reg === 3.U) -> Mux(io.r_valid, Mux(k === 3.U, 0.U, k + 1.U), k),
        (state_reg === 4.U) -> Mux(io.b_valid, (k + 1.U), k)
    ))

    data0 := Mux((state_reg === 3.U && io.r_valid && k === 0.U), io.r_data, data0)
    data1 := Mux((state_reg === 3.U && io.r_valid && k === 1.U), io.r_data, data1)
    data2 := Mux((state_reg === 3.U && io.r_valid && k === 2.U), io.r_data, data2)
    data3 := Mux((state_reg === 3.U && io.r_valid && k === 3.U), io.r_data, data3)

    val temp1 = temp + 1.U;
    temp := Mux(state_reg === 5.U && io.w_ready && k === 4.U && is_full, Cat(0.U, temp1(1,0)), temp)

    ar_valid_reg := MuxCase(false.B, Seq(
        (state_reg === 0.U) -> 1.U,
        (state_reg === 1.U) -> Mux(ar_valid_reg, Mux(io.ar_ready, 0.U, 1.U), Mux(io.r_valid, 1.U, 0.U)),
        (state_reg === 2.U || state_reg === 3.U || state_reg === 7.U) -> Mux((ar_valid_reg && io.ar_ready), 0.U, ar_valid_reg)
    ))
    io.ar_valid := ar_valid_reg
    ar_addr_reg  := MuxCase(ar_addr_reg, Seq(
        (state_reg === 0.U) -> Mux(io.pc(31, 28) === 0xa.U, 0x0f001600.U(32.W) + Cat(index, 0.U(4.W)), io.pc),
        (state_reg === 1.U) -> Mux(io.r_valid, Mux(is_tag, tag_addr, Mux((j === 3.U || is_notvalid), io.pc, serach_addr)), ar_addr_reg),   
        (state_reg === 2.U) -> ar_addr_reg,
    ))
    io.ar_addr  := ar_addr_reg
    io.ar_burst := Mux(ar_addr_reg(31, 28) === 0xa.U, 1.U, 0.U)
    // io.ar_len   := Mux(ar_addr_reg(31, 28) === 0xa.U, 4.U, 0.U)
    is_full := MuxCase(is_full, Seq(
        (state_reg === 1.U) -> Mux(io.r_valid, Mux((j === 3.U && (~is_notvalid)), true.B, false.B), is_full)
    ))
    rdata_reg :=  Mux((((state_reg === 3.U && k === 0.U) || state_reg === 2.U || state_reg === 7.U) && io.r_valid), io.r_data, rdata_reg)
    
    val aw_valid_reg = RegInit(false.B)
    aw_valid_reg := MuxCase(false.B, Seq(
        (state_reg === 3.U) -> Mux((io.r_valid && k === 3.U), true.B, false.B),
        (state_reg === 4.U) -> Mux(aw_valid_reg, Mux(io.aw_ready, false.B, true.B), Mux(io.b_valid, true.B, false.B)),
        (state_reg === 5.U) -> Mux(aw_valid_reg, Mux(io.aw_ready, false.B, true.B), Mux((io.b_valid && k =/= 4.U), true.B, false.B))
    ))  
    val w_index = index + k
    val w_index1 = index + k - 1.U
    io.aw_valid := aw_valid_reg
    io.aw_addr := MuxCase(0.U, Seq(
        (state_reg === 4.U) -> Mux(is_full, 0x0f001600.U(32.W) + Cat(w_index(2,0), 0.U(4.W)) + Cat(temp, 0.U(2.W)), 0x0f001600.U(32.W) + Cat(w_index(2,0), 0.U(4.W)) + Cat(j - 1.U, 0.U(2.W))),
        (state_reg === 5.U) -> Mux(is_full, 0x0f001680.U(32.W) + Cat(w_index1(2,0), 0.U(4.W)) + Cat(temp, 0.U(2.W)), 0x0f001680.U(32.W) + Cat(w_index1(2,0), 0.U(4.W)) + Cat(j - 1.U, 0.U(2.W)))
    ))

    val w_valid_reg = RegInit(false.B)
    w_valid_reg := MuxCase(false.B, Seq(
        (state_reg === 3.U) -> Mux((io.r_valid && k === 3.U), true.B, false.B),
        (state_reg === 4.U) -> Mux(w_valid_reg, Mux(io.w_ready, false.B, true.B), Mux(io.b_valid, true.B, false.B)),
        (state_reg === 5.U) -> Mux(w_valid_reg, Mux(io.w_ready, false.B, true.B), Mux((io.b_valid && k =/= 4.U), true.B, false.B))
    ))  
    io.w_valid := w_valid_reg
    io.w_data  := MuxCase(0.U, Seq(
        (state_reg === 4.U) -> Cat(0.U(4.W), inst_addr(31,5), 1.U(1.W)),
        (state_reg === 5.U) -> MuxCase(0.U, Seq(
                                (k === 1.U) -> data0,
                                (k === 2.U) -> data1,
                                (k === 3.U) -> data2,
                                (k === 4.U) -> data3))
    ))
    io.out.valid := (state_reg === 6.U)
    io.out.bits.pc   := io.pc
    io.out.bits.inst := rdata_reg
    io.out.bits.is_err1 := io.err1_in
}
