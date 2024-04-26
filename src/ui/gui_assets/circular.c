#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CIRCULAR
#define LV_ATTRIBUTE_IMG_CIRCULAR
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CIRCULAR uint8_t circular_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
    /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
    0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00,
    0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00,
    0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00,
    0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00,
    0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
    /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0xf4, 0x41, 0xf4, 0x21, 0xf4, 0x21, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x02, 0xf4, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x02, 0xf4, 0x00, 0x00,
    0x00, 0x00, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x00, 0x00,
    0x21, 0xf4, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xf4,
    0x21, 0xf4, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc,
    0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x21, 0xf4,
    0x41, 0xf4, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x42, 0xf4,
    0x00, 0x00, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x21, 0xf4, 0x00, 0x00,
    0x00, 0x00, 0x82, 0xf4, 0x21, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x02, 0xfc, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xf4, 0x21, 0xf4, 0x41, 0xfc, 0x42, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
    /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x21, 0xf4, 0x41, 0xf4, 0x21, 0xf4, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xf4, 0x02, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xf4, 0x02, 0x00, 0x00,
    0x00, 0x00, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0x00, 0x00,
    0xf4, 0x21, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xf4, 0x41,
    0xf4, 0x21, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41,
    0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xf4, 0x21,
    0xf4, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xf4, 0x42,
    0x00, 0x00, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xf4, 0x21, 0x00, 0x00,
    0x00, 0x00, 0xf4, 0x82, 0xfc, 0x21, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x41, 0xfc, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x42, 0xf4, 0x21, 0xfc, 0x41, 0xf4, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 32
    /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
    0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x08, 0x83, 0xf3, 0xff, 0x09, 0x86, 0xf1, 0xff, 0x0a, 0x85, 0xf3, 0xff, 0x08, 0x83, 0xf3, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
    0x00, 0x00, 0x00, 0xff, 0x10, 0x80, 0xef, 0xff, 0x09, 0x87, 0xf4, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x09, 0x86, 0xf5, 0xff, 0x10, 0x80, 0xef, 0xff, 0x00, 0x00, 0x00, 0xff,
    0x00, 0x00, 0x00, 0xff, 0x09, 0x88, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x09, 0x87, 0xf4, 0xff, 0x00, 0x00, 0x00, 0xff,
    0x08, 0x83, 0xf3, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x08, 0x87, 0xf3, 0xff,
    0x0a, 0x85, 0xf3, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x09, 0x86, 0xf4, 0xff,
    0x09, 0x86, 0xf4, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x85, 0xf3, 0xff,
    0x08, 0x87, 0xf3, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0c, 0x87, 0xf3, 0xff,
    0x00, 0x00, 0x00, 0xff, 0x09, 0x87, 0xf6, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x85, 0xf3, 0xff, 0x00, 0x00, 0x00, 0xff,
    0x00, 0x00, 0x00, 0xff, 0x10, 0x8f, 0xef, 0xff, 0x0a, 0x85, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0a, 0x87, 0xf5, 0xff, 0x0b, 0x86, 0xf4, 0xff, 0x10, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff,
    0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0c, 0x87, 0xf3, 0xff, 0x0a, 0x85, 0xf3, 0xff, 0x09, 0x86, 0xf4, 0xff, 0x0c, 0x87, 0xf3, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
#endif
};

const lv_img_dsc_t circular = {
    .header.cf = LV_IMG_CF_TRUE_COLOR,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 10,
    .header.h = 10,
    .data_size = 100 * LV_COLOR_SIZE / 8,
    .data = circular_map,
};
