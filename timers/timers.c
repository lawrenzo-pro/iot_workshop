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
   
    while (true) {
        tight_loop_contents();
    }
}
