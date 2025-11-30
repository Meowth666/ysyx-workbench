#include "trap.h"

#define FLASH_ADDR_START 0x30000000  // 起始地址（示例：8字节对齐，满足所有访问类型）
#define FLASH_SIZE       0xa      //

int main() {
	uint32_t *flash_32start = (uint32_t *)FLASH_ADDR_START;
    uint32_t flash_size  = FLASH_SIZE;  // 直接使用指定的大小
    for (uint32_t i = 0; i < flash_size; i++) {
        uint32_t actual   = flash_32start[i];
        printf("%d\n", actual);
    }
	return 0;
}
