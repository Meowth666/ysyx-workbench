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
	if(pmem == NULL){exit(0);}
}


