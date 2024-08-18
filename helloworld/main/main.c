#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

void app_main() {
  ESP_LOGE("LOG", "This is an error");
  while (true) {
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}
