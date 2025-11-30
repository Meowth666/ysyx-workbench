#include "../include/memory.h"
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <time.h>
#include "../include/common.h"

extern "C" {
	#include <sys/time.h>
}

#define PG_ALIGN __attribute((aligned(4096)))
static uint8_t *pmem = NULL;
static uint8_t *img = NULL;

FILE *mtrace_Write;
static uint64_t boot_time = 0;
void init_mem(size_t size){ 
	pmem = (uint8_t *)malloc(size * sizeof(uint8_t));
	//memcpy(pmem , img , sizeof(img));
	if(pmem == NULL){exit(0);}
	//Log("npc physical mrom area [%#x, %#lx]",RESET_VECTOR, RESET_VECTOR + size * sizeof(uint8_t));
}

uint8_t* guest_to_host(uint32_t paddr) { 
    return pmem + (uintptr_t)(paddr - 0x30000000); 
}

static uint64_t get_time_internal() {
	struct timeval now;
	gettimeofday(&now, NULL);
	uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
	return us;
}
uint64_t get_time() {
	if (boot_time == 0) boot_time = get_time_internal();
	uint64_t now = get_time_internal();
	return now - boot_time;
}