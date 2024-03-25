/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <bsp/esp-bsp.h>

#include <esp_err.h>
#include <esp_log.h>

#include <lvgl.h>

static const char *TAG = "APP-GUI";

static void app_build_gui(lv_obj_t *src)
{
    // ESP_LOGD(TAG, "Building app GUI");

    // assert(display);

    // ESP_LOGD(TAG, "Getting display active screen");
    // lv_obj_t *scr = lv_disp_get_scr_act(display);
    // assert(scr);
    // lv_obj_clean(scr);
    // ESP_LOGD(TAG, "Creating label");
    // lv_obj_t *label = lv_label_create(scr);
    // lv_label_set_long_mode(label, LV_LABEL_LONG_SCROLL_CIRCULAR); /* Circular scroll */
    // lv_label_set_text(label, "Hello Espressif, Hello LVGL.");
    // lv_obj_set_width(label, 120);
    // lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 0);
}

void app_start_gui()
{
    // ESP_LOGD(TAG, "Starting display.");
    // lv_disp_t *display = bsp_display_start();
    // assert(display);

    // bsp_display_lock(0); lv_scr
    // lv_obj_t *scr = lv_disp_get_scr_act(NULL);
    // app_build_gui(scr);

    // bsp_display_unlock();
    // bsp_display_backlight_on();
}
