#include <am.h>
#include <klib-macros.h>
#include "ysyx-soc.h"
#include <stdio.h>
extern char _heap_start;
extern char _heap_end;
extern char _erodata;
extern uint32_t _fence_start;
extern char _rodata;
extern char _data;
extern char _edata;
extern char _efsbl_load;
extern char _ssbl_load;
extern char _essbl_load;
extern char _text;
extern char _etext;
extern char _bss_start;
extern char _bss_end;
extern uint8_t _gpio_start[];
void fsbl_load() __attribute__((section(".text.fsbl")));
void ssbl_load(volatile char *src) __attribute__((section(".text.ssbl"), noinline));
int main(const char *args);
// #define HEAP_SIZE 0xfff
// #define HEAP_END  ((uintptr_t)&_heap_start + HEAP_SIZE)
#define UART_BASE 0x10000000L
#define UART_TX   0x0
#define UART_RBR  0x0

Area heap = RANGE(&_heap_start, &_heap_end);

#define UART_LCR     3
#define UART_DLL     0
#define UART_DLM     1
#define UART_LSR     5      // 线路状态寄存器（Line Status Register）
#define LSR_THRE     0x20   // LSR第5位：发送保持寄存器为空（1=空闲）

void uart_set_baud_rate(void) {
    // 1. 使能DLAB
    volatile uint8_t *lcr = (volatile uint8_t *)(UART_BASE + UART_LCR);
    *lcr = 0x80;  // DLAB = 1
    // 2. 配置除数（假设系统时钟1843200Hz，波特率115200 → 除数=1）
    volatile uint8_t *dll = (volatile uint8_t *)(UART_BASE + UART_DLL);
    volatile uint8_t *dlm = (volatile uint8_t *)(UART_BASE + UART_DLM);
    *dll = 0x01;  // 除数低字节
    *dlm = 0x00;  // 除数高字节
    // 3. 禁用DLAB，配置线路为8N1（8数据位、无校验、1停止位）
    *lcr = 0x03;
}

// Area heap = RANGE(&_heap_start, HEAP_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  volatile uint8_t *lsr = (volatile uint8_t *)(UART_BASE + UART_LSR);
    while ((*lsr & LSR_THRE) == 0) {
        // 空循环：等待发送队列空闲
    }
    volatile uint8_t *tx = (volatile uint8_t *)(UART_BASE + UART_TX);
    *tx = (uint8_t)ch;
}

void halt(int code) {
  (void)code; 
  asm volatile("ebreak");
  while (1) { }
}

void id_print(){
  uart_set_baud_rate();
  unsigned int mvendorid, marchid;
  asm volatile("csrr %0, mvendorid" : "=r"(mvendorid));
  asm volatile("csrr %0, marchid" : "=r"(marchid));
  uint8_t *gpio_start = _gpio_start;
  gpio_start[8]  = 0x77;
  gpio_start[9]  = 0x00;
  gpio_start[10] = 0x03;
  gpio_start[11] = 0x25;
  for(int i = 3; i >= 0; i--){
    char ch = (char)((mvendorid >> (i * 8)) & 0xFF);
    putch(ch);
  }
  char id[10];
  for(int i = 7; i >= 0; i--){
    id[i] = marchid % 10 + '0';
    marchid = marchid /10;
  }
  for(int i = 0; i < 8; i++){
    putch(id[i]);
  }
  putch('\n');
}

void fence_init(){
  asm volatile("lui t0, 0x0f001;"
               "addi t0, t0, 0x600;");
               
  volatile uint32_t *dst = &_fence_start;
  for(int i = 0; i < 32; i++){
        *dst++ = ((i & 0xfe0) << 20) |   // imm[11:5]
        (0 << 20)               |   // rs2 = x0
        (5 << 15)              |   // rs1 = s2
        (2 << 12)               |   // funct3 = sw
        ((i & 0x1f) << 7)  |   // imm[4:0]
        0x23;  
  }
  *dst++ = 0x98067; // fence.i
}

void _trm_init() {
  id_print();
  fence_init();
  int ret = main(mainargs);
  halt(ret);
}

void ssbl_load(volatile char *src) {
  asm volatile (
    "nop\n\t"
  );
  volatile char *dst = &_essbl_load;
  while (dst < &_edata)
    *dst++ = *src++;
  uint32_t _bss_len = (uint32_t)(&_bss_end - &_bss_start);
  uint8_t *bss = (uint8_t*)&_bss_start;
  for (uint32_t i = 0; i < _bss_len; i++) {
    bss[i] = 0;  // 逐字节清零
  }
  _trm_init();
}

void fsbl_load() {
  volatile char *src = &_efsbl_load;
  volatile char *dst = &_ssbl_load;
  while (dst < &_essbl_load)
    *dst++ = *src++;
  ssbl_load(src);
}

