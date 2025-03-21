#include <stdio.h>
#include "pico/stdlib.h"
#define LED 14
#define LED_2 15;


int main()
{
    stdio_init_all(); 
    gpio_init(LED_2); 
    gpio_set_dir(LED_2,GPIO_OUT);
    
    while (true) {
        gpio_put(LED_2,1);
        sleep_ms(500);
        gpio_put(LED_2,0);
        sleep_ms(500);
    }
}
