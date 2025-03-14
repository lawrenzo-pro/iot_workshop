#include <stdio.h>
#include "pico/stdlib.h"

#define BUTTON_PIN 16

int main()
{
    stdio_init_all();
    gpio_init(BUTTON_PIN);
    gpio_set_dir(BUTTON_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_PIN);
    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
