#include "trap.h"
extern uint8_t _gpio_start[];
extern uint8_t _gpio_end[];

int main() {
    uint8_t *gpio_start = _gpio_start;
    volatile uint16_t *gpio_16start = (uint16_t*)&_gpio_start;
    while (gpio_16start[2] != 0x3);
    printf("Start!\n");
    for (int i = 0; i < 16; i++) {
        if(i < 8){
            gpio_start[0] = 0;
            gpio_start[0] = (1u << i);
        }   
        else{
            gpio_start[1] = 0;
            gpio_start[1] = (1u << (i - 8));
        }
        for (volatile int j = 0; j < 3000; j++);
    }
    for (int i = 15; i >= 0; i--) {
        if(i < 8){
            gpio_start[0] = (1u << i);
        }   
        else{
            gpio_start[1] = (1u << (i - 8));
        }
        for (volatile int j = 0; j < 3000; j++);
    }
    printf("end!\n");
    return 0;
}
