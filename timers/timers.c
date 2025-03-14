#include <stdio.h>
#include "pico/stdlib.h"
#define LED_1 14
#define LED_2 15

bool led1_callback(struct repeating_timer  *t){
    //logic goes here
}
bool led2_callback(struct repeating_timer *t){
    //logic goes here
}
int main()
{
    stdio_init_all();
    gpio_init(LED_1);
    gpio_init(LED_2);
    gpio_set_dir(LED_1, GPIO_OUT);
    gpio_set_dir(LED_2, GPIO_OUT);
    while (true) {
        tight_loop_contents();// Essentially a no-operation
    }
}
