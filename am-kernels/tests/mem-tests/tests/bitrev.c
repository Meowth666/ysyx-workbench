#include "trap.h"

// SPI寄存器定义（适配ysyxSoC，slave7对应bitrev模块）
#define SPI_BASE  0x10001000L
#define SPI_TX    0x0     // 发送数据寄存器（32位，对应0x87654321）
#define SPI_CTRL  0x10    // 控制寄存器：bit8=GO_BUSY（写1启动，读1=忙）
#define SPI_DIV   0x14    // 分频寄存器：SCLK = 系统时钟/(div+1)
#define SPI_SS    0x18    // 片选寄存器（多bit，bit7=slave7，低电平有效）

#define SLAVE_BITREV 7    // bitrev模块的slave编号（7）
#define GO_BUSY_BIT  8    // GO_BUSY位是第8位（bit8）
#define GO_BUSY_MASK (1 << GO_BUSY_BIT)  // 0x100

int main() {
    // 定义SPI寄存器指针（volatile确保不被编译器优化）
    volatile uint32_t *spi_tx   = (volatile uint32_t *)(SPI_BASE + SPI_TX);
    volatile uint32_t *spi_ctrl = (volatile uint32_t *)(SPI_BASE + SPI_CTRL);
    volatile uint32_t *spi_div  = (volatile uint32_t *)(SPI_BASE + SPI_DIV);
    volatile uint32_t *spi_ss   = (volatile uint32_t *)(SPI_BASE + SPI_SS);
    
    *spi_ss |= (1 << SLAVE_BITREV);  // 等价于 *spi_ss &= 0x7F（bit7=0，bit0~6=1）
    *spi_ctrl = 0x10;
    *spi_div = 6;
    *spi_tx = 0xc5;

    *spi_ctrl |= GO_BUSY_MASK;  // 写1启动，硬件自动置位bit8为1（BUSY状态）

    while ((*spi_ctrl & GO_BUSY_MASK) != 0);  // 忙则等待
    *spi_ss &= ~(1 << SLAVE_BITREV);
      // 等价于 *spi_ss |= 0x80（bit7=1）

    printf("SPI transfer complete (slave7: bitrev module)\n");
    return 0;
}