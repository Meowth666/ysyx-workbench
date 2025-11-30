#include "trap.h"
extern char _psram_start;
extern char _psram_end;
// uint32_t array[20] = {0xff010113, 0x00112623, 0x00812423, 0x01010413, 0x100007b7, 0x04100713, 0x00e78023, 0x100007b7, 0x04300713, 0x00e78023, 0x100007b7, 0x04d00713, 0x00e78023, 0x0000006f};
int main() {
    uint8_t *psram_start = (uint8_t*)&_psram_start;
    uint8_t *psram_end   = (uint8_t*)&_psram_end;
    uint32_t psram_size  = psram_end - psram_start;  // 直接使用指定的大小
    for (uint32_t i = 0; i < psram_size; i++) {
        psram_start[i] = (uint8_t)(i & 0xff);
    }
    // int temp = 0;
    for (uint32_t i = 0; i < psram_size; i++) {
        uint8_t expected = (uint8_t)(i & 0xff);
        uint8_t actual   = psram_start[i];
        // printf("%d %d\n", actual, expected);
        check(actual == expected);
    }

    uint16_t *psram_16start = (uint16_t*)&_psram_start;
    // 计算最大可测试的16位数据个数（堆大小整除2，避免越界）
    uint32_t psram_16count = psram_size / 2;  // 每个16位数据占2字节

    // 16位写入：写入数据 = 偏移量（0~psram_16count-1）的低16位（可预测）
    for (uint32_t i = 0; i < psram_16count; i++) {
        // 例如：i=0 → 0x0000，i=1→0x0001，i=0x100→0x0100（覆盖16位所有可能值）
        psram_16start[i] = (uint16_t)(i & 0xffff);
    }

    // 16位读取校验
    for (uint32_t i = 0; i < psram_16count; i++) {
        uint16_t expected = (uint16_t)(i & 0xffff);
        uint16_t actual   = psram_16start[i];  // 编译器生成sh/lhu指令
        // printf("%d %d\n", actual, expected);
        check(actual == expected);
    }

    // uint32_t *psram_32start = (uint32_t*)&_psram_start;
    // // // 计算最大可测试的16位数据个数（堆大小整除2，避免越界）
    // uint32_t psram_32count = psram_size / 4;  // 每个16位数据占2字节

    // // 16位写入：写入数据 = 偏移量（0~psram_16count-1）的低16位（可预测）
    // for (uint32_t i = 0; i < psram_32count; i++) {
    //     // 例如：i=0 → 0x0000，i=1→0x0001，i=0x100→0x0100（覆盖16位所有可能值）
    //     psram_32start[i] = (uint32_t)(i & 0xffffffff);
    // }

    // // 16位读取校验
    // for (uint32_t i = 0; i < psram_32count; i++) {
    //     // uint32_t expected = (uint32_t)(12345678 & 0xffffffff);
    //     uint32_t actual   = psram_32start[i];  // 编译器生成sh/lhu指令
    //     printf("%d\n", actual);
    //     // check(actual == expected);
    // }

    // uint64_t *psram_64start = (uint64_t*)&_psram_start;
    // // 计算最大可测试的16位数据个数（堆大小整除2，避免越界）
    // uint32_t psram_64count = psram_size / 8;  // 每个16位数据占2字节

    // // 16位写入：写入数据 = 偏移量（0~psram_16count-1）的低16位（可预测）
    // for (uint32_t i = 0; i < psram_64count; i++) {
    //     // 例如：i=0 → 0x0000，i=1→0x0001，i=0x100→0x0100（覆盖16位所有可能值）
    //     psram_64start[i] = (uint64_t)(i & 0xffffffffffffffff);
    // }

    // // 16位读取校验
    // for (uint32_t i = 0; i < psram_64count; i++) {
    //     // uint16_t expected = (uint16_t)(i & 0xffff);
    //     uint64_t actual   = psram_64start[i];  // 编译器生成sh/lhu指令
    //     printf("%ld\n", actual);
    //     // check(actual == expected);
    // }
	return 0;
}
