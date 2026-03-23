#include <stdio.h>
#include <stdint.h>

#define TABLE_SIZE 16

typedef struct {
  uint32_t tag;
  int valid;
} BTBEntry;

BTBEntry table[TABLE_SIZE];
uint8_t bht[TABLE_SIZE];  // 2-bit predictor

int get_index(uint32_t pc) {
  return (pc >> 2) % TABLE_SIZE;
}

int main() {
  FILE *fp = fopen("btrace.txt", "r");
  if (!fp) {
    perror("fopen btrace.txt");
    return 1;
  }

  // 初始化
  for (int i = 0; i < TABLE_SIZE; i++) {
    table[i].valid = 0;
    bht[i] = 2;  // 初始为 weak not taken (01)
  }

  int b_type;
  uint32_t pc_now, pc_target, pc_next;

  int total = 0;

  int correct_btb = 0;
  int correct_nt  = 0;
  int correct_at  = 0;
  int correct_2bit = 0;  // 新增

  while (fscanf(fp, "%d %x %x %x", &b_type, &pc_now, &pc_target, &pc_next) == 4) {

    int idx = get_index(pc_now);
    int hit = table[idx].valid && (table[idx].tag == pc_now);

    uint32_t pred_btb;
    uint32_t pred_nt;
    uint32_t pred_at;
    uint32_t pred_2bit;

    // ===== 实际是否跳转 =====
    int actual_taken = (pc_next != pc_now + 4);

    // ===== 策略1：BTB + backward taken =====
    if (hit && b_type != 1) {
      if (pc_target < pc_now)
        pred_btb = pc_target;
      else
        pred_btb = pc_now + 4;
    } else {
      pred_btb = pc_now + 4;
    }

    // ===== 策略2：始终不跳 =====
    pred_nt = pc_now + 4;

    // ===== 策略3：命中就跳 =====
    if (hit && b_type != 1) {
      pred_at = pc_target;
    } else {
      pred_at = pc_now + 4;
    }

    // ===== 策略4：2-bit predictor =====
    if (hit && b_type != 1) {
      if (bht[idx] >= 2) {
        pred_2bit = pc_target;  // predict taken
      } else {
        pred_2bit = pc_now + 4; // predict not taken
      }
    } else {
      pred_2bit = pc_now + 4;
    }

    // ===== 计分 =====
    if (pred_btb == pc_next) correct_btb++;
    if (pred_nt  == pc_next) correct_nt++;
    if (pred_at  == pc_next) correct_at++;
    if (pred_2bit == pc_next) correct_2bit++;

    total++;

    // ===== 更新 2-bit predictor =====
    if(b_type != 1){
      if(hit){
        if (actual_taken) {
          if (bht[idx] < 3) bht[idx]++;
        } else {
          if (bht[idx] > 0) bht[idx]--;
        }
      }
      else{
          // ===== 更新 BTB =====
          table[idx].tag = pc_now;
          table[idx].valid = 1;
          bht[idx] = 2;
      }
    }
  }

  fclose(fp);

  printf("Total: %d\n", total);

  printf("\n[BTB + backward taken]\n");
  printf("Accuracy: %.2f%%\n", (double)correct_btb / total * 100);

  printf("\n[Always Not Taken]\n");
  printf("Accuracy: %.2f%%\n", (double)correct_nt / total * 100);

  printf("\n[Always Taken (on hit)]\n");
  printf("Accuracy: %.2f%%\n", (double)correct_at / total * 100);

  printf("\n[2-bit Predictor]\n");
  printf("Accuracy: %.2f%%\n", (double)correct_2bit / total * 100);

  return 0;
}