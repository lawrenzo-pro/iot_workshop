#include <stdio.h>
#include "pico/stdlib.h"
#define LED 14
#define LED_2 15;


int main()
{
    stdio_init_all();
    
    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
