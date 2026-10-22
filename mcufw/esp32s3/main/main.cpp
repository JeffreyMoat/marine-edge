#include <cstdio>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

extern "C" void app_main(void)
{
    while (true) {
        printf("MarineEdge ESP32-S3 running\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}