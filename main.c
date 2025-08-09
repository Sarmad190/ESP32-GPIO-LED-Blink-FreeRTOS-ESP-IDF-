#include<stdio.h>
#include"freertos/FreeRTOS.h"
#include"freertos/task.h"
#include"driver/gpio.h"


#define led_pin GPIO_NUM_2
#define led_on 1
#define led_off 0

void app_main (void){
    
    gpio_set_direction(led_pin,GPIO_MODE_OUTPUT);
    while(1){

        gpio_set_level(led_pin,led_on);
        vTaskDelay(pdMS_TO_TICKS(200));
        gpio_set_level(led_pin,led_off);
         vTaskDelay(pdMS_TO_TICKS(500));
    

    }
}