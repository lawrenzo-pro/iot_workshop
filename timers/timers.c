#include <stdio.h>
#include "pico/stdlib.h"

bool cbk(struct repeating_timer  *t){
    //
}
bool cbk2(struct repeating_timer *t){

}
int main()
{
    stdio_init_all();
    struct repeating_timer t;
    struct repeating_timer t2;
    add_repeating_timer_ms(300,cbk,NULL,&t);
    add_repeating_timer_ms(500,cbk2,NULL,&t2);
    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
