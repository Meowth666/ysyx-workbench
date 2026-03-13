#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

typedef struct {
    int valid;
    uint64_t tag;
    int lru;  // LRU计数
} cache_line;

typedef struct {
    cache_line *lines;
} cache_set;

typedef struct {
    cache_set *sets;
    int set_num;
    int assoc;
    int block_size; // 单位: word数或字节, 这里按字节计算
} cache;

// 计算2的整数对数（block_size, set_num必须是2的幂）
int log2_int(int x) {
    return __builtin_ctz(x);
}

// 初始化cache
cache *cache_init(int cache_size, int block_size, int assoc) {
    cache *c = malloc(sizeof(cache));

    int line_num = cache_size / block_size;
    c->set_num = line_num / assoc;
    c->assoc = assoc;
    c->block_size = block_size;

    c->sets = malloc(sizeof(cache_set) * c->set_num);
    for (int i = 0; i < c->set_num; i++) {
        c->sets[i].lines = malloc(sizeof(cache_line) * assoc);
        for (int j = 0; j < assoc; j++) {
            c->sets[i].lines[j].valid = 0;
            c->sets[i].lines[j].lru = 0;
        }
    }

    return c;
}

// 访问cache，miss时一次填充整个block
int cache_access_block(cache *c, uint64_t addr) {
    int offset_bits = log2_int(c->block_size);
    int index_bits = log2_int(c->set_num);

    // block基地址（对齐block）
    uint64_t block_base = addr & ~(c->block_size - 1);
    uint64_t index = (block_base >> offset_bits) & ((1 << index_bits) - 1);
    uint64_t tag = block_base >> (offset_bits + index_bits);

    cache_set *set = &c->sets[index];
    int hit = 0;

    // 检查block是否命中
    for (int i = 0; i < c->assoc; i++) {
        if (set->lines[i].valid && set->lines[i].tag == tag) {
            hit = 1;
            // 更新LRU
            set->lines[i].lru = 0;
            for (int j = 0; j < c->assoc; j++)
                if (j != i) set->lines[j].lru++;
            break;
        }
    }

    // miss → 替换LRU line并填充block
    if (!hit) {
        int lru_victim = 0;
        int max_lru = -1;
        for (int i = 0; i < c->assoc; i++) {
            if (set->lines[i].lru > max_lru) {
                max_lru = set->lines[i].lru;
                lru_victim = i;
            }
        }
        set->lines[lru_victim].valid = 1;
        set->lines[lru_victim].tag = tag;
        set->lines[lru_victim].lru = 0;
        for (int j = 0; j < c->assoc; j++)
            if (j != lru_victim) set->lines[j].lru++;
    }

    return hit;
}

// 仿真函数
void simulate(char *filename, int cache_size, int block_size, int assoc) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("file open error");
        exit(1);
    }

    cache *c = cache_init(cache_size, block_size, assoc);
    uint64_t pc;
    long total = 0;
    long hit = 0;

    while (fscanf(fp, "%lx", &pc) == 1) {
        total++;
        if (cache_access_block(c, pc))
            hit++;
    }
    printf("Total: %ld\n", total);
    printf("HIT:   %ld\n", hit);
    printf("Cache Size: %dB, Block Size: %dB, Associativity: %d, Hit Rate: %.4f\n",
           cache_size, block_size, assoc, (double)hit / total);

    fclose(fp);
}

int main() {
    // 测试不同的cache参数
    int cache_sizes[] = {64}; // 单位字节
    int block_sizes[] = {4};  // 单位字节
    int assocs[] = {1, 2, 4, 8};

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 4; k++) {
                simulate("train_soc_itrace.txt",
                         cache_sizes[i],
                         block_sizes[j],
                         assocs[k]);
            }
        }
    }

    return 0;
}