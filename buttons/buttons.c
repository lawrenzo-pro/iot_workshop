#include <stdio.h>
#include "pico/stdlib.h"

#define BUTTON_PIN 16
#define LED_1 14
#define LED_2 15
int main()
{
    stdio_init_all();
    gpio_init(LED_1);
    gpio_init(LED_2);
    gpio_set_dir(LED_1, GPIO_OUT);
    gpio_set_dir(LED_2, GPIO_OUT);
    //Button initialization
    
    bool state = false;
    while (true) {
        /*
        we'll read the button here
        */
        gpio_put(LED_1, state);
        gpio_put(LED_2,1);
        sleep_ms(500);
        gpio_put(LED_2,0);
        sleep_ms(500);
    }
}
