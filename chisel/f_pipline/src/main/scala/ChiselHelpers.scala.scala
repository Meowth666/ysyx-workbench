import chisel3._
import chisel3.util._
import chisel3.experimental.DataMirror

object ChiselHelpers {
  def dontTouchBundleRecursive(bundle: Bundle): Unit = {
    bundle.elements.foreach { case (_, signal) =>
      signal match {
        case subBundle: Bundle => 
          dontTouchBundleRecursive(subBundle)  // 递归处理子Bundle
        case _ => 
          dontTouch(signal)
      }
    }
  }

  def pipelineConnect[T <: Data, T2 <: Data](
    prevOut: DecoupledIO[T],
    thisIn: DecoupledIO[T],
    thisOut: DecoupledIO[T2]
  ) = {
    // ready 反向传播
    prevOut.ready := thisIn.ready
    // valid 寄存器
    thisIn.valid := prevOut.valid
    // 数据寄存（只有 fire 才更新）
    thisIn.bits := RegEnable(prevOut.bits, prevOut.valid && thisIn.ready)
  }

}