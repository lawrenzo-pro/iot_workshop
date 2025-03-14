#include <stdio.h>
#include "pico/stdlib.h"

#define BTN 16
#define LED_1 14
#define LED_2 15

void button_callback(uint pin,uint32_t event){
    //you shouldn't sleep in an interrupt service routine
    //if you need sleeping use the function busy_wait_ms()
}

int main()
{
    stdio_init_all();
    gpio_init(LED_1);
    gpio_init(LED_2);
    gpio_set_dir(LED_1, GPIO_OUT);
    gpio_set_dir(LED_2, GPIO_OUT);
    while (true) {
        //we'll keep the cpu busy doing something_else
        gpio_put(LED_2,1);
        sleep_ms(500);
        gpio_put(LED_2,0);
        sleep_ms(500);
    }
}
