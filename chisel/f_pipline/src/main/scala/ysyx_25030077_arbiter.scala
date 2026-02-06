import chisel3._
import chisel3.util._
import ChiselHelpers._
class ysyx_25030077_arbiter extends Module {
  val io = IO(new Bundle {
    val IFU_ar_valid = Input(Bool())
    val IFU_ar_addr = Input(UInt(32.W))
    val IFU_ar_ready = Output(Bool())
    val IFU_r_ready  = Input(Bool())
    val IFU_r_valid = Output(Bool())
    val IFU_r_data  = Output(UInt(32.W))

    val LSU_ar_valid = Input(Bool())
    val LSU_ar_addr = Input(UInt(32.W))
    val LSU_ar_ready = Output(Bool())
    val LSU_r_ready  = Input(Bool())
    val LSU_r_valid = Output(Bool())
    val LSU_r_data  = Output(UInt(32.W))
    val LSU_rw_type = Input(UInt(4.W))
    val LSU_b_ready = Input(Bool())
    val LSU_b_valid = Output(Bool())
    val LSU_aw_valid = Input(Bool())
    val LSU_aw_addr = Input(UInt(32.W))
    val LSU_aw_ready = Output(Bool())
    val LSU_w_valid = Input(Bool())
    val LSU_w_data = Input(UInt(32.W))
    val LSU_w_ready = Output(Bool())

    val axi_ar_valid = Output(Bool())
    val axi_ar_addr = Output(UInt(32.W))
    val axi_ar_ready = Input(Bool())
    val axi_ar_id = Output(UInt(4.W))
    val axi_ar_len = Output(UInt(8.W))
    val axi_ar_size = Output(UInt(3.W))
    val axi_ar_burst = Output(UInt(2.W))

    val axi_aw_valid = Output(Bool())
    val axi_aw_addr = Output(UInt(32.W))
    val axi_aw_ready = Input(Bool())
    val axi_aw_id = Output(UInt(4.W))
    val axi_aw_len = Output(UInt(8.W))
    val axi_aw_size = Output(UInt(3.W))
    val axi_aw_burst = Output(UInt(2.W))   

    val axi_w_valid = Output(Bool())
    val axi_w_data = Output(UInt(32.W))
    val axi_w_strb = Output(UInt(4.W))
    val axi_w_ready = Input(Bool())
    val axi_w_last = Output(Bool())

    val axi_r_valid = Input(Bool())
    val axi_r_data = Input(UInt(32.W))
    val axi_r_ready = Output(Bool())
    val axi_r_resp = Input(UInt(2.W))
    val axi_r_id = Input(UInt(4.W))
    val axi_r_last = Input(Bool())

    val axi_b_valid = Input(Bool())
    val axi_b_ready = Output(Bool())
    val axi_b_resp = Input(UInt(2.W))
    val axi_b_id = Input(UInt(4.W))
  })
  ChiselHelpers.dontTouchBundleRecursive(io)
  io.axi_aw_id := 0.U
  io.axi_aw_len := 0.U
  io.axi_aw_burst := 0.U   
  io.axi_w_last := true.B
  io.axi_ar_id := 0.U  

  val state = RegInit(0.U(3.W))
  state := MuxCase(state, Seq(
        (state === 0.U) -> Mux(io.LSU_ar_valid && io.axi_ar_ready, 2.U(3.W),
                               Mux(io.LSU_aw_valid && io.axi_aw_ready, 3.U(3.W), 
                                    Mux(io.IFU_ar_valid && io.axi_ar_ready, 1.U(3.W), 0.U(3.W)))),
        (state === 1.U) -> Mux(io.IFU_r_ready && io.axi_r_valid, 0.U(3.W), 1.U(3.W)),
        (state === 2.U) -> Mux(io.LSU_r_ready && io.axi_r_valid, 0.U(3.W), 2.U(3.W)),
        (state === 3.U) -> Mux(io.LSU_b_ready && io.axi_b_valid, 0.U(3.W), 3.U(3.W))
  ))

  io.axi_ar_valid := Mux(state === 2.U, io.LSU_ar_valid, Mux(state === 1.U, io.IFU_ar_valid, 0.U))
  io.axi_ar_addr  := Mux(state === 2.U, io.LSU_ar_addr , Mux(state === 1.U, io.IFU_ar_addr, 0.U))
  io.IFU_ar_ready := Mux(state === 1.U, io.axi_ar_ready, false.B)
  io.LSU_ar_ready := Mux(state === 2.U, io.axi_ar_ready, false.B)
  io.LSU_aw_ready := Mux(state === 3.U, io.axi_aw_ready, false.B)
  io.LSU_w_ready  := Mux(state === 3.U, io.axi_w_ready , false.B)
  io.axi_ar_len := 0.U
  val rsize = MuxCase(0.U, Seq(
            (io.LSU_rw_type === 4.U) -> 0.U,      
            (io.LSU_rw_type === 5.U) -> 0.U,
            (io.LSU_rw_type === 6.U) -> 1.U,      
            (io.LSU_rw_type === 7.U) -> 1.U,
            (io.LSU_rw_type === 8.U) -> 2.U
        )) 
  io.axi_ar_size  := Mux(state === 2.U, rsize, Mux(state === 1.U, 2.U, 0.U))
  io.axi_ar_burst := 0.U 

  io.axi_aw_valid := Mux(state === 3.U, io.LSU_aw_valid, 0.U)
  io.axi_aw_addr  := Mux(state === 3.U, io.LSU_aw_addr , 0.U)
  io.LSU_aw_ready := Mux(state === 3.U, io.axi_aw_ready, false.B)
  val wsize = MuxCase(0.U, Seq(
                      (io.LSU_rw_type === 1.U) -> 2.U,      
                      (io.LSU_rw_type === 2.U) -> 1.U,
                      (io.LSU_rw_type === 3.U) -> 0.U
  )) 
  io.axi_aw_size  := Mux(state === 3.U, wsize, 0.U)

  io.axi_w_valid := Mux(state === 3.U, io.LSU_w_valid, 0.U)
  val w_data = MuxCase(0.U, Seq(
                            (io.LSU_rw_type === 1.U) -> io.LSU_w_data,      
                            (io.LSU_rw_type === 2.U) -> MuxCase(0.U, Seq(    
                                                      (io.LSU_aw_addr(1) === 0.U) -> Cat(0.U(16.W), io.LSU_w_data(15, 0)),
                                                      (io.LSU_aw_addr(1) === 1.U) -> Cat(io.LSU_w_data(15, 0), 0.U(16.W))
                                                     )),
                            (io.LSU_rw_type === 3.U) -> MuxCase(0.U, Seq(    
                                                      (io.LSU_aw_addr(1, 0) === 0.U) -> Cat(0.U(24.W), io.LSU_w_data(7, 0)),
                                                      (io.LSU_aw_addr(1, 0) === 1.U) -> Cat(0.U(16.W), io.LSU_w_data(7, 0), 0.U(8.W)),
                                                      (io.LSU_aw_addr(1, 0) === 2.U) -> Cat(0.U(8.W), io.LSU_w_data(7, 0), 0.U(16.W)),
                                                      (io.LSU_aw_addr(1, 0) === 3.U) -> Cat(io.LSU_w_data(7, 0), 0.U(24.W))
                                                     ))
                     ))
  io.axi_w_data  := Mux(state === 3.U, w_data , 0.U)
  io.LSU_w_ready := Mux(state === 3.U, io.axi_w_ready, false.B)
  val strb = MuxCase(0.U, Seq(
                    (io.LSU_rw_type === 1.U) -> 15.U,      
                    (io.LSU_rw_type === 2.U) -> MuxCase(0.U, Seq(    
                                               (io.LSU_aw_addr(1) === 0.U) -> 3.U,
                                               (io.LSU_aw_addr(1) === 1.U) -> 12.U
                                             )),
                    (io.LSU_rw_type === 3.U) -> MuxCase(0.U, Seq(    
                                              (io.LSU_aw_addr(1, 0) === 0.U) -> 1.U,
                                              (io.LSU_aw_addr(1, 0) === 1.U) -> 2.U,
                                              (io.LSU_aw_addr(1, 0) === 2.U) -> 4.U,
                                              (io.LSU_aw_addr(1, 0) === 3.U) -> 8.U
                                            ))
            ))
  val is_sram  = ~(io.axi_ar_addr(31,28) === "h3".U(4.W)) 
  val rdata_sram = MuxCase(0.U, Seq(
                              (io.LSU_rw_type === 8.U) -> io.axi_r_data,      
                              (io.LSU_rw_type === 5.U) -> MuxCase(0.U, Seq(    
                                                        (io.axi_ar_addr(1, 0) === 0.U) -> Cat(0.U(24.W), io.axi_r_data(7, 0)),
                                                        (io.axi_ar_addr(1, 0) === 1.U) -> Cat(0.U(24.W), io.axi_r_data(15, 8)),
                                                        (io.axi_ar_addr(1, 0) === 2.U) -> Cat(0.U(24.W), io.axi_r_data(23, 16)),
                                                        (io.axi_ar_addr(1, 0) === 3.U) -> Cat(0.U(24.W), io.axi_r_data(31, 24))
                                                     )),
                              (io.LSU_rw_type === 6.U) -> MuxCase(0.U, Seq(    
                                                        (io.axi_ar_addr(1) === 0.U) -> Cat(Fill(16, io.axi_r_data(15)), io.axi_r_data(15, 0)),
                                                        (io.axi_ar_addr(1) === 1.U) -> Cat(Fill(16, io.axi_r_data(31)), io.axi_r_data(31,16))
                                                     )),
                              (io.LSU_rw_type === 7.U) -> MuxCase(0.U, Seq(    
                                                        (io.axi_ar_addr(1) === 0.U) -> Cat(0.U(16.W), io.axi_r_data(15, 0)),
                                                        (io.axi_ar_addr(1) === 1.U) -> Cat(0.U(16.W), io.axi_r_data(31,16))
                                                     )),
                              (io.LSU_rw_type === 4.U) -> MuxCase(0.U, Seq(    
                                                        (io.axi_ar_addr(1, 0) === 0.U) -> Cat(Fill(24, io.axi_r_data(7)), io.axi_r_data(7, 0)),
                                                        (io.axi_ar_addr(1, 0) === 1.U) -> Cat(Fill(24, io.axi_r_data(15)), io.axi_r_data(15, 8)),
                                                        (io.axi_ar_addr(1, 0) === 2.U) -> Cat(Fill(24, io.axi_r_data(23)), io.axi_r_data(23, 16)),
                                                        (io.axi_ar_addr(1, 0) === 3.U) -> Cat(Fill(24, io.axi_r_data(31)), io.axi_r_data(31, 24))
                                                     ))
                            )
                     )
  val rdata_mrom = MuxCase(0.U, Seq(
                            (io.LSU_rw_type === 8.U) -> io.axi_r_data,      
                            (io.LSU_rw_type === 5.U) -> Cat(0.U(24.W), io.axi_r_data(7, 0)),
                            (io.LSU_rw_type === 6.U) -> Cat(Fill(16, io.axi_r_data(15)), io.axi_r_data(15,0)),
                            (io.LSU_rw_type === 7.U) -> Cat(0.U(16.W), io.axi_r_data(15,0)),
                            (io.LSU_rw_type === 4.U) -> Cat(Fill(24, io.axi_r_data(7)), io.axi_r_data(7, 0))
                          )
                    )
  val rdata = Mux(is_sram, rdata_sram, rdata_mrom)
  io.axi_w_strb := Mux(state === 3.U, strb, 0.U)

  io.IFU_r_valid := Mux(state === 1.U, io.axi_r_valid, false.B)
  io.LSU_r_valid := Mux(state === 2.U, io.axi_r_valid, false.B)
  io.IFU_r_data  := Mux(state === 1.U, io.axi_r_data , 0.U)
  io.LSU_r_data  := Mux(state === 2.U, rdata, 0.U)
  io.axi_r_ready := Mux(state === 1.U, io.IFU_r_ready, Mux(state === 2.U, io.LSU_r_ready, false.B))

  io.LSU_b_valid := Mux(state === 3.U, io.axi_b_valid, false.B)
  io.axi_b_ready := Mux(state === 3.U, io.LSU_b_ready, false.B)
}
