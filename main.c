#define USE_SDL 1
#define USE_WINDOWS 1

#define SDL_MAIN_HANDLED

#include "stdint-gcc.h"
#include <SDL2/SDL.h>
#include "lvgl.h"
#include "lv_conf.h"
#include "lv_sdl_mouse.h"

lv_obj_t * label;

static void btn_event_cb(lv_event_t * e) {
    lv_obj_t * btn = lv_event_get_target(e);
    lv_obj_t * lbl = lv_obj_get_child(btn, 0); // We assume that Label is the first daughter element
    const char * text = lv_label_get_text(lbl);
    printf("Button pressed: %s\n", text);
    fflush(stdout);


    lv_label_set_text(label, text);
}



int main(int argc, char *argv[]) {
    lv_init();

    lv_display_t * disp = lv_sdl_window_create(240, 240);
    lv_display_set_default(disp);

    lv_indev_t * mouse = lv_sdl_mouse_create();
    lv_indev_set_display(mouse, disp);

    printf("Test-------->\n");

    label = lv_label_create(lv_screen_active());
    lv_label_set_text(label, "Hello LVGL 2!");
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 10);

    /* Buttons */
    const lv_color_t colors[3] = {lv_palette_main(LV_PALETTE_RED), lv_palette_main(LV_PALETTE_GREEN), lv_palette_main(LV_PALETTE_BLUE)};
    const char * texts[3] = {"Red", "Green", "Blue"};

    for (int i = 0; i < 3; i++) {
        lv_obj_t * btn = lv_button_create(lv_screen_active());
        lv_obj_set_size(btn, 60, 40);
        lv_obj_set_style_bg_color(btn, colors[i], 0);
        lv_obj_align(btn, LV_ALIGN_CENTER, (i - 1) * 80, 40);

        lv_obj_t * lbl = lv_label_create(btn);
        lv_label_set_text(lbl, texts[i]);
        lv_obj_center(lbl);

        lv_obj_add_event_cb(btn, btn_event_cb, LV_EVENT_CLICKED, NULL);
    }


    while (1) {
        lv_timer_handler();
        SDL_Delay(5);
    }

    return 0;
}
