#include <stdio.h>
#include "pico/stdlib.h"

#define BTN 3

void cbk(uint pin,uint32_t event){
    //
}

int main()
{
    stdio_init_all();
    gpio_init(BTN);
    gpio_set_dir(BTN, GPIO_IN);
    gpio_pull_up(BTN);

    gpio_set_irq_enabled_with_callback(BTN, GPIO_IRQ_EDGE_FALL,true, cbk);

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
