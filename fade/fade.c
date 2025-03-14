#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"

#define LED_1 14
#define LED_2 15

int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
