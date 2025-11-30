#include "trap.h"

// SPI寄存器定义（适配ysyxSoC，slave7对应bitrev模块）
#define SPI_BASE  0x10001000L
#define SPI_TX0    0x0  
#define SPI_TX1    0x4 
#define SPI_RX0    0x0 
// #define SPI_RX1    0x4
#define SPI_CTRL  0x10    // 控制寄存器：bit8=GO_BUSY（写1启动，读1=忙）
#define SPI_DIV   0x14    // 分频寄存器：SCLK = 系统时钟/(div+1)
#define SPI_SS    0x18    // 片选寄存器（多bit，bit7=slave7，低电平有效）
#define SYS_CLK_MHZ 50     // 系统时钟50MHz
#define TARGET_SCLK_MHZ 10 // 目标SCLK=10MHz

#define SLAVE_FLASH 0    
#define FLASH_READ_CMD 0x03// 仅支持03h读命令
#define GO_BUSY_BIT  8    // GO_BUSY位是第8位（bit8）
#define GO_BUSY_MASK (1 << GO_BUSY_BIT)  // 0x100
#define TARGET_ADDR 0x8// 要读取的flash地址

int main() {
    // 定义SPI寄存器指针（volatile确保不被编译器优化）
    volatile uint32_t *spi_tx0   = (volatile uint32_t *)(SPI_BASE + SPI_TX0);
    volatile uint32_t *spi_tx1   = (volatile uint32_t *)(SPI_BASE + SPI_TX1);
    volatile uint32_t *spi_rx0   = (volatile uint32_t *)(SPI_BASE + SPI_RX0);
    // volatile uint32_t *spi_rx1   = (volatile uint32_t *)(SPI_BASE + SPI_RX1);
    volatile uint32_t *spi_ctrl  = (volatile uint32_t *)(SPI_BASE + SPI_CTRL);
    volatile uint32_t *spi_div   = (volatile uint32_t *)(SPI_BASE + SPI_DIV);
    volatile uint32_t *spi_ss    = (volatile uint32_t *)(SPI_BASE + SPI_SS);
    
    *spi_ctrl = 0x00;  // 初始化为0
    *spi_ctrl |= (0 << 10);
    *spi_ctrl |= (0 << 9); 
    *spi_ctrl |= (0 << 11); 
    *spi_ctrl |= (1 << 6);  // 数据长度=64位
    *spi_ss |= (1 << SLAVE_FLASH);  // 等价于 *spi_ss &= 0x7F（bit7=0，bit0~6=1）
    *spi_div = (SYS_CLK_MHZ / TARGET_SCLK_MHZ) - 1;  // 50/10 -1 =4
    printf("CTRL=%d, DIV=%d\n", *spi_ctrl, *spi_div);
    *spi_tx1 = ((FLASH_READ_CMD << 24) | (TARGET_ADDR & 0xFFFFFF));  // 0x03123456
    *spi_tx0 = 0x0;  // 发送命令和地址后，接收数据为空
    *spi_ctrl |= GO_BUSY_MASK;  // 写1启动，硬件自动置位bit8为1（BUSY状态）
    while ((*spi_ctrl & GO_BUSY_MASK) != 0);
    uint32_t flash_data = 0;
    flash_data |= (*spi_rx0 & 0xFF) << 24;
    flash_data |= (*spi_rx0 & 0xFF00) << 8;
    flash_data |= (*spi_rx0 & 0xFF0000) >> 8;
    flash_data |= (*spi_rx0 & 0xFF000000) >> 24;
    *spi_ss &= ~(1 << SLAVE_FLASH);
    printf("FLASH RECIVE :%d %d\n", *spi_rx0, flash_data);
    return 0;
}