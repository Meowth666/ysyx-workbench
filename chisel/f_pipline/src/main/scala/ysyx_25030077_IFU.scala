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
    })
    ChiselHelpers.dontTouchBundleRecursive(io)
    val sram_tag  = RegInit(VecInit(Seq.fill(16)(0.U(22.W))))
    val sram_inst = RegInit(VecInit(Seq.fill(16)(0.U(32.W))))
    val sdram_data = RegInit(VecInit(Seq.fill(4)(0.U(32.W))))
    val sram_valid =  RegInit(VecInit(Seq.fill(16)(0.U(1.W))))
    val tag = io.pc(27, 6)
    val index = io.pc(5, 4)
    val offset = io.pc(3, 2)
    val j = RegInit(0.U(2.W))
    val k = RegInit(0.U(2.W))
    val q = RegInit(0.U(2.W))
    val rdata_reg = RegInit(0.U(32.W))
    val ar_valid_reg = RegInit(false.B)
    val ar_addr_reg  = RegInit(0.U(32.W))
    io.r_ready := true.B
    val state_reg = RegInit("b00001".U(5.W))
    val is_hit = ((sram_tag(Cat(index, offset)) === tag) && (sram_valid(Cat(index, offset)) === "b1".U))
    state_reg := MuxCase("b00001".U(5.W), Seq(
        (state_reg === "b00001".U(5.W)) -> Mux(io.pc(31, 28) === 0xa.U, Mux(is_hit, "b10000".U(5.W), "b00010".U(5.W)), "b01000".U(5.W)),
        (state_reg === "b00010".U(5.W)) -> Mux(io.r_valid, Mux(k === 3.U, "b00100".U(5.W), "b00010".U(5.W)), "b00010".U(5.W)),
        (state_reg === "b00100".U(5.W)) -> Mux(q === 3.U, "b10000".U(5.W), "b00100".U(5.W)),
        (state_reg === "b01000".U(5.W)) -> Mux(io.r_valid, "b10000".U(5.W), "b01000".U(5.W)),
        (state_reg === "b10000".U(5.W)) -> Mux(io.out.ready,"b00001".U(5.W), "b10000".U(5.W))
    ))
    val write_reg = RegInit("b001".U(3.W))
    write_reg := MuxCase("b001".U(3.W), Seq(
        (write_reg === "b001".U(3.W)) -> Mux(state_reg === "b00010".U(5.W) , "b010".U(3.W), "b001".U(3.W)),
        (write_reg === "b010".U(3.W)) -> Mux(j === 3.U, "b100".U(3.W), "b010".U(3.W)),
        (write_reg === "b100".U(3.W)) -> Mux(q === 3.U, "b001".U(3.W), "b100".U(3.W)),
    ))
    k := MuxCase(k, Seq(
        (state_reg === "b00001".U(5.W)) -> 0.U,
        (state_reg === "b00010".U(5.W)) -> Mux(io.r_valid, Mux(k === 3.U, 0.U, k + 1.U), k)
    ))
    j := MuxCase(j, Seq(
        (write_reg === "b001".U(3.W)) -> 0.U,
        (write_reg === "b010".U(3.W)) -> Mux(j === 3.U, 0.U, j + 1.U)
    ))
    q := MuxCase(q, Seq(
        (state_reg === "b00001".U(5.W)) -> 0.U,
        (state_reg === "b00100".U(5.W)) -> Mux(q === 3.U, 0.U, q + 1.U)
    ))
    sdram_data(0) := Mux((state_reg === "b00010".U(5.W) && io.r_valid && k === 0.U), io.r_data, sdram_data(0))
    sdram_data(1) := Mux((state_reg === "b00010".U(5.W) && io.r_valid && k === 1.U), io.r_data, sdram_data(1))
    sdram_data(2) := Mux((state_reg === "b00010".U(5.W) && io.r_valid && k === 2.U), io.r_data, sdram_data(2))
    sdram_data(3) := Mux((state_reg === "b00010".U(5.W) && io.r_valid && k === 3.U), io.r_data, sdram_data(3))

    sram_tag(Cat(index, "b00".U(2.W))) := Mux((write_reg === "b010".U(3.W) && j === 0.U), tag, sram_tag(Cat(index, "b00".U(2.W))))
    sram_tag(Cat(index, "b01".U(2.W))) := Mux((write_reg === "b010".U(3.W) && j === 1.U), tag, sram_tag(Cat(index, "b01".U(2.W))))
    sram_tag(Cat(index, "b10".U(2.W))) := Mux((write_reg === "b010".U(3.W) && j === 2.U), tag, sram_tag(Cat(index, "b10".U(2.W))))
    sram_tag(Cat(index, "b11".U(2.W))) := Mux((write_reg === "b010".U(3.W) && j === 3.U), tag, sram_tag(Cat(index, "b11".U(2.W)))) 

    sram_valid(Cat(index, "b00".U(2.W))) := Mux((write_reg === "b010".U(3.W) && j === 0.U), "b1".U, sram_valid(Cat(index, "b00".U(2.W))))
    sram_valid(Cat(index, "b01".U(2.W))) := Mux((write_reg === "b010".U(3.W) && j === 1.U), "b1".U, sram_valid(Cat(index, "b01".U(2.W))))
    sram_valid(Cat(index, "b10".U(2.W))) := Mux((write_reg === "b010".U(3.W) && j === 2.U), "b1".U, sram_valid(Cat(index, "b10".U(2.W))))
    sram_valid(Cat(index, "b11".U(2.W))) := Mux((write_reg === "b010".U(3.W) && j === 3.U), "b1".U, sram_valid(Cat(index, "b11".U(2.W)))) 

    sram_inst(Cat(index, "b00".U(2.W))) := Mux((state_reg === "b00100".U(5.W) && q === 0.U), sdram_data(0), sram_inst(Cat(index, "b00".U(2.W))))
    sram_inst(Cat(index, "b01".U(2.W))) := Mux((state_reg === "b00100".U(5.W) && q === 1.U), sdram_data(1), sram_inst(Cat(index, "b01".U(2.W))))
    sram_inst(Cat(index, "b10".U(2.W))) := Mux((state_reg === "b00100".U(5.W) && q === 2.U), sdram_data(2), sram_inst(Cat(index, "b10".U(2.W))))
    sram_inst(Cat(index, "b11".U(2.W))) := Mux((state_reg === "b00100".U(5.W) && q === 3.U), sdram_data(3), sram_inst(Cat(index, "b11".U(2.W)))) 

    ar_valid_reg := MuxCase(false.B, Seq(
        (state_reg === "b00001".U(5.W)) -> Mux((io.pc(31, 28) === 0xa.U) && (is_hit), 0.U, 1.U),
        (state_reg === "b01000".U(5.W) || state_reg === "b00010".U(5.W)) -> Mux((ar_valid_reg && io.ar_ready), 0.U, ar_valid_reg)
    ))
    io.ar_valid := ar_valid_reg

    ar_addr_reg := MuxCase(ar_addr_reg, Seq(
        (state_reg === "b00001".U(5.W)) -> Mux((io.pc(31, 28) === 0x3.U), io.pc, Cat(io.pc(31, 4), "b0000".U(4.W)))
    ))
    io.ar_addr  := ar_addr_reg
    io.ar_burst := Mux(ar_addr_reg(31, 28) === 0xa.U, 1.U, 0.U)
    io.out.valid := (state_reg === "b10000".U(5.W))
    io.out.bits.pc   := io.pc
    io.out.bits.is_err1 := io.err1_in

    rdata_reg :=  MuxCase(rdata_reg, Seq(
        (state_reg === "b00001".U(5.W)) -> Mux((io.pc(31, 28) === 0xa.U) && (is_hit), sram_inst(Cat(index, offset)), rdata_reg),
        (state_reg === "b01000".U(5.W)) -> Mux(io.r_valid, io.r_data, rdata_reg),
        (state_reg === "b00010".U(5.W)) -> Mux(io.r_valid && k === offset, io.r_data, rdata_reg)
    ))
    io.out.bits.inst := rdata_reg
    
}
