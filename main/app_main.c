/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <sdkconfig.h>

#include <bsp/ttgo-t-display.h>

#include <lvgl.h>

#include <esp_err.h>
#include <esp_log.h>

#include <assert.h>

extern void app_ui(lv_obj_t *scr);

static const char *TAG = "APP-MAIN";

void app_main(void)
{
    ESP_LOGD(TAG, "Starting display.");
    lv_disp_t *disp = bsp_display_start();
    assert(disp);

    ESP_LOGI(TAG, "Display LVGL animation");
    bsp_display_lock(0);
    lv_obj_t *scr = lv_disp_get_scr_act(NULL);
    app_ui(scr);
    bsp_display_unlock();

    bsp_display_backlight_on();
}
