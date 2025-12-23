#include "trap.h"
extern char _sdram_start;
extern char _sdram_end;
// uint32_t array[20] = {0xff010113, 0x00112623, 0x00812423, 0x01010413, 0x100007b7, 0x04100713, 0x00e78023, 0x100007b7, 0x04300713, 0x00e78023, 0x100007b7, 0x04d00713, 0x00e78023, 0x0000006f};
int main() {
    uint8_t *sdram_start = (uint8_t*)&_sdram_start;
    uint8_t *sdram_end   = (uint8_t*)&_sdram_end;
    uint32_t sdram_size  = sdram_end - sdram_start;  // 直接使用指定的大小

    // 32bit写入和读取校验
    uint32_t *sdram_32start = (uint32_t*)&_sdram_start;
    uint32_t sdram_32count = sdram_size / 4;
    for (uint32_t i = 0; i < sdram_32count; i++) {
        sdram_32start[i] = (uint32_t)(i & 0xffffffff);
    }
    for (uint32_t i = 0; i < sdram_32count; i++) {
        uint32_t expected = (uint32_t)(i & 0xffffffff);
        uint32_t actual   = sdram_32start[i];  // 编译器生成sh/lhu指令
        check(actual == expected);
    }

    // // 8bit写入和读取校验
    // for (uint32_t i = 0; i < sdram_size; i++) {
    //     sdram_start[i] = (uint8_t)(i & 0xff);
    // }
    // for (uint32_t i = 0; i < sdram_size; i++) {
    //     uint8_t expected = (uint8_t)(i & 0xff);
    //     uint8_t actual   = sdram_start[i];
    //     // printf("%d %d\n", actual, expected);
    //     check(actual == expected);
    // }

    // // 16bit写入和读取校验
    // uint16_t *sdram_16start = (uint16_t*)&_sdram_start;
    // uint32_t sdram_16count = sdram_size / 2;  // 每个16位数据占2字节
    // // 写入
    // for (uint32_t i = 0; i < sdram_16count; i++) {
    //     sdram_16start[i] = (uint16_t)(i & 0xffff);
    // }
    // // 读取校验
    // for (uint32_t i = 0; i < sdram_16count; i++) {
    //     uint16_t expected = (uint16_t)(i & 0xffff);
    //     uint16_t actual   = sdram_16start[i];  // 编译器生成sh/lhu指令
    //     // printf("%d %d\n", actual, expected);
    //     check(actual == expected);
    // }

    // 64bit写入和读取校验
    // uint64_t *sdram_64start = (uint64_t*)&_sdram_start;
    // uint32_t sdram_64count = sdram_size / 8;
    // for (uint32_t i = 0; i < sdram_64count; i++) {
    //     sdram_64start[i] = (uint64_t)(i & 0xffffffffffffffff);
    // }
    // for (uint32_t i = 0; i < sdram_64count; i++) {
    //     uint64_t expected = (uint64_t)(i & 0xffffffffffffffff);
    //     uint64_t actual   = sdram_64start[i];
    //     check(actual == expected);
    // }
	return 0;
}
