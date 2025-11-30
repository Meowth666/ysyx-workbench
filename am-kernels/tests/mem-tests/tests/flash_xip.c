#include "trap.h"

#define FLASH_ADDR_START 0x30000000  // 起始地址（示例：8字节对齐，满足所有访问类型）
#define FLASH_SIZE       0xa      //

int main() {
	uint8_t *flash_start = (uint8_t *)FLASH_ADDR_START;
    uint32_t flash_size  = FLASH_SIZE;  // 直接使用指定的大小
    for (uint32_t i = 0; i < flash_size; i++) {
        uint8_t actual   = flash_start[i];
        printf("%d\n", actual);
    }
	return 0;
}
