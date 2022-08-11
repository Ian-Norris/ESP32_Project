#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
//#include "testDriver.h"

static char *TAG = "main";

void app_main(void)
{
    ESP_LOGI(TAG, "I'm alive!!!!");
    //ESP_LOGI(TAG, "%i", g_testVar);
}