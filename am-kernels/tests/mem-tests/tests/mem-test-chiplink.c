#include "trap.h"
// 错误计数与信息
#define CHIPLINK 0xc0000000

int main() {
    // uint8_t *fb = (uint8_t *)(uintptr_t)(CHIPLINK);
    // for (uint32_t i = 0; i < 10; i++) {
    //     // 写入的数据 = 偏移量（0~0xfff），确保每个字节数据唯一且可预测
    //     fb[i] = (uint8_t)(i & 0xff);  // 取低8位，避免溢出
    // }

    // for (uint32_t i = 0; i < 10; i++) {
    //     uint8_t expected = (uint8_t)(i & 0xff);
    //     uint8_t actual   = fb[i];
    //     // printf("fb[%d] = %x\n", i, fb[i]);
    //     check(actual == expected);
    // }

    uint16_t *fb = (uint16_t *)(uintptr_t)(CHIPLINK);
    for (uint32_t i = 0; i < 10; i++) {
        // 写入的数据 = 偏移量（0~0xfff），确保每个字节数据唯一且可预测
        fb[i] = (uint16_t)(i & 0xffff);  // 取低8位，避免溢出
    }

    for (uint32_t i = 0; i < 10; i++) {
        uint16_t expected = (uint16_t)(i & 0xffff);
        uint16_t actual   = fb[i];
        // printf("fb[%d] = %x\n", i, fb[i]);
        check(actual == expected);
    }

    // uint32_t *fb = (uint32_t *)(uintptr_t)(CHIPLINK);
    // for (uint32_t i = 0; i < 10; i++) {
    //     // 写入的数据 = 偏移量（0~0xfff），确保每个字节数据唯一且可预测
    //     fb[i] = (uint32_t)(i & 0xffffffff);  // 取低8位，避免溢出
    // }

    // for (uint32_t i = 0; i < 10; i++) {
    //     uint32_t expected = (uint32_t)(i & 0xffffffff);
    //     uint32_t actual   = fb[i];
    //     check(actual == expected);
    // }
    return 0;
}