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

#ifndef LV_ATTRIBUTE_IMG_WALLETTYPHON
#define LV_ATTRIBUTE_IMG_WALLETTYPHON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_WALLETTYPHON uint8_t walletTyphon_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0xf5, 0x7f, 0x32, 0x72, 0xef, 0x2a, 0x51, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x0e, 0x50, 0x2a, 0x0f, 0xdf, 0x3a, 0x93, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0x9f, 0x3a, 0xb3, 0xfe, 0x32, 0x51, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x0e, 0x10, 0x2a, 0x0f, 0xef, 0x32, 0x72, 0xff, 0x3a, 0xb4, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x43, 0x17, 0x7f, 0x43, 0x16, 0xff, 0x32, 0x51, 0xfe, 0x32, 0x51, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x0e, 0xa0, 0x2a, 0x0f, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0x40, 0x00, 0x00, 0x00, 
  0x3b, 0x16, 0x20, 0x43, 0x37, 0xff, 0x3a, 0xb3, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0xef, 0x6f, 0x29, 0xee, 0xfe, 0x3a, 0x93, 0xff, 0x3a, 0xd4, 0xdf, 0x00, 0x00, 0x00, 
  0x43, 0x17, 0x9f, 0x43, 0x17, 0xff, 0x32, 0x72, 0xff, 0x32, 0x51, 0xfe, 0x2a, 0x51, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0xee, 0x60, 0x29, 0xee, 0xfe, 0x32, 0x51, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0x93, 0x50, 
  0x43, 0x17, 0xcf, 0x43, 0x16, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xff, 0x32, 0x71, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x0e, 0x50, 0x29, 0xee, 0xaf, 0x29, 0xee, 0x9f, 0x29, 0xee, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0xee, 0x90, 0x29, 0xee, 0xff, 0x2a, 0x0f, 0xfe, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0x9f, 
  0x43, 0x17, 0xff, 0x3a, 0xf5, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xff, 0x2a, 0x0f, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x0e, 0x10, 0x22, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0xee, 0x9f, 0x29, 0xee, 0xff, 0x2a, 0x2f, 0xff, 0x29, 0xef, 0xff, 0x29, 0xee, 0xff, 0x29, 0xee, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0xcb, 0x20, 0x21, 0x8c, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x0a, 0x10, 0x29, 0xcd, 0xdf, 0x29, 0xee, 0xff, 0x29, 0xee, 0xff, 0x3a, 0xd4, 0xff, 0x3a, 0xb4, 0xbf, 
  0x43, 0x17, 0xff, 0x43, 0x16, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xff, 0x32, 0x30, 0xff, 0x21, 0x8c, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0xcd, 0x20, 0x29, 0xcd, 0xef, 0x29, 0xcd, 0xff, 0x29, 0xcd, 0x9f, 0x29, 0xcd, 0x20, 0x00, 0x00, 0x00, 0x29, 0xee, 0x30, 0x29, 0xee, 0xbf, 0x32, 0x72, 0xff, 0x42, 0xf6, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0x93, 0xff, 0x2a, 0x30, 0xff, 0x29, 0xcd, 0x9f, 0x21, 0xcd, 0x20, 0x00, 0x00, 0x00, 0x21, 0xcc, 0x30, 0x21, 0xac, 0xbf, 0x21, 0xac, 0xff, 0x21, 0x8c, 0xdf, 0x21, 0x8c, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x0a, 0x10, 0x21, 0x6a, 0xcf, 0x29, 0xee, 0xff, 0x29, 0xee, 0xfe, 0x2a, 0x0f, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xbf, 
  0x43, 0x17, 0xdf, 0x43, 0x17, 0xff, 0x32, 0x72, 0xff, 0x32, 0x51, 0xfe, 0x32, 0x51, 0xff, 0x29, 0xee, 0xff, 0x21, 0x8c, 0xdf, 0x21, 0xac, 0x5f, 0x21, 0xcc, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0xcd, 0xcf, 0x29, 0xcd, 0xff, 0x29, 0xee, 0xff, 0x29, 0xcd, 0xff, 0x29, 0xce, 0xff, 0x29, 0xee, 0xff, 0x29, 0xee, 0xff, 0x3a, 0xb4, 0xff, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xfe, 0x3a, 0xb3, 0xff, 0x3a, 0xb3, 0xff, 0x32, 0x30, 0xff, 0x29, 0xcd, 0xff, 0x29, 0xcd, 0xff, 0x21, 0xad, 0xff, 0x21, 0xac, 0xff, 0x21, 0xac, 0xff, 0x21, 0xac, 0xff, 0x21, 0x8c, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x49, 0x20, 0x19, 0x49, 0x7f, 0x19, 0x49, 0xef, 0x21, 0xac, 0xff, 0x29, 0xee, 0xff, 0x29, 0xee, 0xff, 0x32, 0x50, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0x9f, 
  0x43, 0x17, 0x80, 0x43, 0x17, 0xff, 0x3a, 0xf5, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xff, 0x32, 0x72, 0xfe, 0x29, 0xee, 0xff, 0x21, 0xac, 0xff, 0x21, 0xac, 0xff, 0x21, 0xac, 0xcf, 0x21, 0xac, 0xaf, 0x21, 0xac, 0x80, 0x29, 0xad, 0x80, 0x29, 0xcd, 0x80, 0x29, 0xcd, 0xbf, 0x29, 0xcd, 0xff, 0x29, 0xee, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xfe, 0x32, 0x72, 0xff, 0x32, 0x72, 0xff, 0x3a, 0xf5, 0xff, 0x3a, 0xf6, 0xff, 0x43, 0x16, 0xff, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xfe, 0x3a, 0xb3, 0xff, 0x3a, 0xb3, 0xfe, 0x3a, 0x93, 0xff, 0x32, 0x72, 0xff, 0x32, 0x30, 0xff, 0x32, 0x30, 0xff, 0x32, 0x72, 0xff, 0x32, 0x51, 0xff, 0x21, 0xac, 0xff, 0x21, 0x8c, 0xff, 0x21, 0x8b, 0xaf, 0x21, 0x8b, 0x80, 0x21, 0x6b, 0x7f, 0x21, 0x6a, 0x80, 0x21, 0x6a, 0x9f, 0x21, 0x4a, 0xdf, 0x19, 0x4a, 0xff, 0x19, 0x49, 0xff, 0x21, 0xac, 0xff, 0x2a, 0x0f, 0xfe, 0x2a, 0x0f, 0xff, 0x2a, 0x0f, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0x50, 
  0x3b, 0x16, 0x20, 0x43, 0x37, 0xef, 0x43, 0x37, 0xff, 0x3a, 0xd4, 0xff, 0x32, 0x51, 0xff, 0x32, 0x71, 0xff, 0x32, 0x72, 0xfe, 0x2a, 0x30, 0xff, 0x29, 0xcd, 0xff, 0x21, 0xac, 0xff, 0x21, 0xac, 0xff, 0x21, 0xac, 0xff, 0x21, 0xad, 0xff, 0x29, 0xcd, 0xff, 0x29, 0xcd, 0xff, 0x29, 0xee, 0xff, 0x3a, 0xb3, 0xfe, 0x3a, 0xd5, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xf5, 0xff, 0x3a, 0xf5, 0xff, 0x3a, 0xf6, 0xff, 0x3a, 0xf6, 0xff, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0x93, 0xfe, 0x3a, 0x93, 0xff, 0x32, 0x93, 0xff, 0x32, 0x72, 0xff, 0x32, 0x72, 0xff, 0x32, 0x72, 0xfe, 0x32, 0x31, 0xfe, 0x21, 0xac, 0xff, 0x21, 0x8b, 0xff, 0x21, 0x8b, 0xff, 0x21, 0x6b, 0xff, 0x21, 0x6a, 0xff, 0x21, 0x6a, 0xff, 0x19, 0x4a, 0xff, 0x21, 0x8b, 0xff, 0x29, 0xee, 0xff, 0x2a, 0x0f, 0xff, 0x29, 0xef, 0xfe, 0x2a, 0x0f, 0xfe, 0x3a, 0x93, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xd4, 0xdf, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x43, 0x17, 0x70, 0x43, 0x17, 0xff, 0x43, 0x17, 0xff, 0x3a, 0xd4, 0xff, 0x32, 0x72, 0xff, 0x32, 0x72, 0xff, 0x32, 0x72, 0xfe, 0x32, 0x92, 0xff, 0x32, 0x72, 0xff, 0x32, 0x50, 0xff, 0x2a, 0x0f, 0xff, 0x29, 0xee, 0xff, 0x2a, 0x0f, 0xff, 0x32, 0x30, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xd4, 0xff, 0x3a, 0xd5, 0xfe, 0x3a, 0xd5, 0xff, 0x3a, 0xf5, 0xff, 0x3a, 0xf5, 0xff, 0x42, 0xf6, 0xff, 0x42, 0xf6, 0xff, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0x93, 0xff, 0x32, 0x93, 0xfe, 0x32, 0x92, 0xff, 0x32, 0x92, 0xff, 0x32, 0x72, 0xff, 0x32, 0x72, 0xfe, 0x32, 0x71, 0xff, 0x32, 0x50, 0xff, 0x29, 0xcd, 0xff, 0x21, 0xac, 0xff, 0x21, 0xad, 0xff, 0x29, 0xcd, 0xff, 0x29, 0xee, 0xff, 0x2a, 0x0f, 0xff, 0x2a, 0x0f, 0xfe, 0x2a, 0x0f, 0xff, 0x2a, 0x0f, 0xfe, 0x2a, 0x0f, 0xff, 0x3a, 0x93, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x32, 0x93, 0x50, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0xa0, 0x43, 0x17, 0xff, 0x43, 0x17, 0xff, 0x43, 0x16, 0xff, 0x32, 0x93, 0xff, 0x32, 0x72, 0xfe, 0x32, 0x92, 0xff, 0x32, 0x92, 0xff, 0x32, 0x93, 0xff, 0x3a, 0x93, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xb4, 0xfe, 0x3a, 0xb4, 0xfe, 0x3a, 0xd4, 0xdf, 0x3a, 0xd5, 0xcf, 0x3a, 0xd5, 0xcf, 0x3a, 0xd5, 0xfe, 0x3a, 0xf5, 0xff, 0x3a, 0xf6, 0xff, 0x42, 0xf6, 0xff, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0x93, 0xff, 0x3a, 0x93, 0xff, 0x32, 0x93, 0xfe, 0x32, 0x92, 0xef, 0x32, 0x72, 0xbf, 0x32, 0x72, 0xdf, 0x32, 0x72, 0xef, 0x32, 0x71, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xfe, 0x32, 0x51, 0xfe, 0x32, 0x30, 0xff, 0x32, 0x30, 0xff, 0x2a, 0x30, 0xff, 0x2a, 0x0f, 0xff, 0x2a, 0x0f, 0xff, 0x32, 0x51, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0xa0, 0x43, 0x37, 0xff, 0x43, 0x17, 0xff, 0x43, 0x37, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0x93, 0xff, 0x32, 0x92, 0xff, 0x32, 0x93, 0xfe, 0x3a, 0x93, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xd4, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xd5, 0xcf, 0x3a, 0xf5, 0x70, 0x3a, 0xf5, 0x70, 0x3a, 0xf6, 0xdf, 0x43, 0x16, 0xff, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0x93, 0xff, 0x32, 0x93, 0xbf, 0x32, 0x92, 0x50, 0x32, 0x92, 0x8f, 0x32, 0x72, 0xdf, 0x32, 0x72, 0xff, 0x32, 0x71, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xff, 0x32, 0x50, 0xff, 0x32, 0x30, 0xff, 0x32, 0x30, 0xfe, 0x32, 0x30, 0xff, 0x32, 0x50, 0xff, 0x3a, 0x93, 0xff, 0x3a, 0xd4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0x80, 0x43, 0x17, 0xff, 0x43, 0x17, 0xff, 0x43, 0x17, 0xff, 0x43, 0x37, 0xff, 0x3a, 0xf5, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0x93, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xfe, 0x3a, 0xd4, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xf5, 0xfe, 0x3a, 0xf5, 0xdf, 0x3a, 0xf6, 0x7f, 0x43, 0x16, 0x60, 0x43, 0x16, 0xdf, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xfe, 0x3a, 0xb4, 0xfe, 0x3a, 0xb4, 0xfe, 0x3a, 0xb3, 0xdf, 0x32, 0x93, 0x50, 0x32, 0x93, 0x8f, 0x32, 0x93, 0xfe, 0x32, 0x72, 0xff, 0x32, 0x72, 0xfe, 0x32, 0x72, 0xff, 0x32, 0x71, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xfe, 0x32, 0x51, 0xfe, 0x32, 0x50, 0xff, 0x32, 0x30, 0xff, 0x32, 0x71, 0xff, 0x3a, 0x93, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xef, 0x3a, 0xd4, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0x30, 0x43, 0x17, 0xdf, 0x43, 0x17, 0xff, 0x43, 0x17, 0xff, 0x43, 0x37, 0xff, 0x43, 0x37, 0xff, 0x43, 0x17, 0xff, 0x3a, 0xf5, 0xfe, 0x3a, 0xd4, 0xff, 0x3a, 0xb4, 0xfe, 0x3a, 0xd4, 0xfe, 0x3a, 0xd4, 0xff, 0x3a, 0xd4, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xf5, 0xfe, 0x3a, 0xf5, 0xff, 0x3a, 0xf6, 0xff, 0x43, 0x16, 0xdf, 0x3a, 0xf6, 0x40, 0x43, 0x16, 0xdf, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0x9f, 0x3a, 0xb3, 0x6f, 0x3a, 0xb3, 0xef, 0x3a, 0x93, 0xff, 0x32, 0x93, 0xfe, 0x32, 0x72, 0xfe, 0x32, 0x72, 0xfe, 0x32, 0x72, 0xfe, 0x32, 0x71, 0xff, 0x32, 0x51, 0xff, 0x32, 0x51, 0xff, 0x32, 0x92, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xd4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xbf, 0x3a, 0xd4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0x60, 0x43, 0x17, 0xdf, 0x43, 0x17, 0xff, 0x43, 0x37, 0xff, 0x43, 0x37, 0xff, 0x43, 0x38, 0xff, 0x43, 0x58, 0xff, 0x43, 0x37, 0xff, 0x43, 0x17, 0xff, 0x3a, 0xf5, 0xff, 0x3a, 0xd5, 0xfe, 0x3a, 0xd5, 0xff, 0x3a, 0xf5, 0xfe, 0x3a, 0xf5, 0xff, 0x3a, 0xf6, 0xff, 0x42, 0xf6, 0xff, 0x43, 0x16, 0xee, 0x43, 0x16, 0x30, 0x43, 0x16, 0x9f, 0x3a, 0xb4, 0x7f, 0x3a, 0xb4, 0x7f, 0x3a, 0xb3, 0xff, 0x3a, 0x93, 0xff, 0x3a, 0x93, 0xff, 0x3a, 0x93, 0xff, 0x32, 0x72, 0xff, 0x32, 0x72, 0xff, 0x32, 0x72, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xd5, 0xff, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x42, 0xf6, 0xff, 0x3a, 0xf5, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xd4, 0xff, 0x3a, 0xb3, 0xdf, 0x3a, 0xb4, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x16, 0x20, 0x43, 0x17, 0x40, 0x43, 0x17, 0x60, 0x43, 0x37, 0xdf, 0x43, 0x37, 0xff, 0x43, 0x58, 0xff, 0x43, 0x58, 0xff, 0x43, 0x58, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x43, 0x79, 0xff, 0x43, 0x17, 0xff, 0x3a, 0xf5, 0xfe, 0x3a, 0xf5, 0xff, 0x3a, 0xf6, 0xff, 0x42, 0xf6, 0xff, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xef, 0x43, 0x16, 0x20, 0x3a, 0xb4, 0x50, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0x93, 0xfe, 0x32, 0x93, 0xfe, 0x32, 0x93, 0xfe, 0x3a, 0x93, 0xff, 0x3a, 0xf5, 0xff, 0x43, 0x38, 0xff, 0x43, 0x38, 0xff, 0x43, 0x37, 0xff, 0x43, 0x17, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xf6, 0xff, 0x3a, 0xf5, 0xff, 0x3a, 0xd5, 0xbf, 0x3a, 0xb4, 0x40, 0x3a, 0xb4, 0x40, 0x3a, 0xd4, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0x80, 0x43, 0x17, 0xdf, 0x43, 0x37, 0x60, 0x43, 0x37, 0x70, 0x43, 0x58, 0xaf, 0x43, 0x58, 0xff, 0x43, 0x58, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0x79, 0xff, 0x43, 0x37, 0xff, 0x42, 0xf6, 0xff, 0x42, 0xf6, 0xfe, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xbf, 0x3a, 0xb4, 0xdf, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0xfe, 0x3a, 0x93, 0xfe, 0x3a, 0xb3, 0xff, 0x42, 0xf6, 0xff, 0x43, 0x59, 0xff, 0x43, 0x59, 0xff, 0x43, 0x58, 0xff, 0x43, 0x38, 0xff, 0x43, 0x37, 0xff, 0x43, 0x17, 0xff, 0x43, 0x16, 0xef, 0x42, 0xf5, 0x90, 0x3a, 0xf5, 0x80, 0x3a, 0xd5, 0x8f, 0x3a, 0xd4, 0xef, 0x32, 0x93, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0x80, 0x43, 0x37, 0xff, 0x43, 0x37, 0xff, 0x43, 0x58, 0xaf, 0x43, 0x58, 0x80, 0x43, 0x58, 0x60, 0x43, 0x59, 0xbf, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0x9b, 0xff, 0x4b, 0x9a, 0xff, 0x43, 0x17, 0xff, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xfe, 0x3a, 0xb4, 0xff, 0x3a, 0xb3, 0xff, 0x3a, 0xf5, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x7a, 0xff, 0x4b, 0x79, 0xff, 0x43, 0x59, 0xff, 0x43, 0x58, 0xff, 0x43, 0x38, 0xef, 0x43, 0x37, 0x9f, 0x43, 0x17, 0x50, 0x43, 0x16, 0x80, 0x3a, 0xf6, 0xbf, 0x3a, 0xf5, 0xff, 0x3a, 0xd5, 0xff, 0x3a, 0xd4, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x37, 0x80, 0x43, 0x37, 0xff, 0x43, 0x58, 0xff, 0x43, 0x58, 0xff, 0x43, 0x58, 0xdf, 0x43, 0x79, 0x9f, 0x4b, 0x79, 0x50, 0x4b, 0x79, 0x70, 0x4b, 0x9a, 0xdf, 0x4b, 0x9a, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x43, 0x58, 0xff, 0x43, 0x16, 0xfe, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xff, 0x3a, 0xb4, 0xff, 0x43, 0x37, 0xff, 0x4b, 0x9b, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0x7a, 0xff, 0x4b, 0x79, 0xff, 0x43, 0x59, 0xbf, 0x43, 0x38, 0x70, 0x43, 0x58, 0x50, 0x43, 0x37, 0xaf, 0x43, 0x17, 0xef, 0x43, 0x16, 0xff, 0x3a, 0xf6, 0xff, 0x3a, 0xd5, 0xef, 0x3a, 0x94, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x57, 0x20, 0x43, 0x38, 0xdf, 0x43, 0x58, 0xff, 0x43, 0x58, 0xff, 0x43, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x99, 0x9f, 0x74, 0xbd, 0x60, 0x53, 0xdb, 0x90, 0x4b, 0xbb, 0xdf, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xdb, 0xff, 0x4b, 0x79, 0xff, 0x43, 0x16, 0xff, 0x3a, 0xb4, 0xfe, 0x43, 0x58, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9b, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0x9a, 0xdf, 0x5c, 0x1b, 0x80, 0x74, 0xbd, 0x40, 0x43, 0x58, 0xef, 0x43, 0x38, 0xff, 0x43, 0x37, 0xff, 0x43, 0x17, 0xff, 0x43, 0x16, 0xff, 0x42, 0xf6, 0xbf, 0x3a, 0xd5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x58, 0x80, 0x43, 0x58, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xcf, 0x74, 0xbd, 0xaf, 0x74, 0xbd, 0xff, 0x6c, 0x9d, 0x9f, 0x4b, 0xbb, 0xdf, 0x4b, 0xbb, 0xff, 0x4b, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x43, 0x58, 0xff, 0x43, 0x37, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9b, 0xff, 0x4b, 0x9a, 0xaf, 0x74, 0x9d, 0xcf, 0x74, 0xbd, 0xff, 0x74, 0x9d, 0xa0, 0x43, 0x58, 0xff, 0x43, 0x38, 0xff, 0x43, 0x37, 0xff, 0x43, 0x17, 0xef, 0x43, 0x16, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x58, 0x20, 0x43, 0x59, 0xa0, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x53, 0xdb, 0x9f, 0x74, 0xbd, 0xdf, 0x74, 0xbd, 0xff, 0x74, 0x9d, 0x8f, 0x4b, 0xbb, 0xdf, 0x4b, 0xdc, 0xff, 0x4b, 0xdc, 0xff, 0x4b, 0x9b, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xdc, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9a, 0x9f, 0x74, 0xbd, 0xcf, 0x74, 0xbd, 0xff, 0x74, 0xbd, 0xbf, 0x53, 0x99, 0x9f, 0x43, 0x58, 0xff, 0x43, 0x38, 0xef, 0x43, 0x37, 0x80, 0x43, 0x16, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x59, 0x20, 0x4b, 0x79, 0x60, 0x4b, 0x7a, 0xa0, 0x4b, 0x9a, 0xff, 0x4b, 0x9a, 0xbf, 0x53, 0xdb, 0xaf, 0x53, 0xdb, 0xbf, 0x4b, 0xbb, 0xcf, 0x4b, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9b, 0xcf, 0x53, 0xdb, 0xaf, 0x53, 0xba, 0xbf, 0x4b, 0x79, 0xdf, 0x43, 0x59, 0xef, 0x43, 0x58, 0x80, 0x43, 0x58, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x37, 0x60, 0x43, 0x57, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x79, 0x40, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xcf, 0x4b, 0x7a, 0x50, 0x4b, 0x9a, 0xa0, 0x4b, 0x9b, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x4b, 0xbc, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9b, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0x9a, 0xef, 0x43, 0x79, 0x80, 0x43, 0x58, 0x70, 0x43, 0x58, 0xef, 0x43, 0x38, 0xff, 0x43, 0x16, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x16, 0x30, 0x42, 0xf5, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x37, 0x40, 0x43, 0x58, 0xdf, 0x43, 0x58, 0x7f, 0x43, 0x58, 0x20, 0x43, 0x59, 0x9f, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x5c, 0x1b, 0x9f, 0x74, 0xbd, 0xdf, 0x6c, 0x9d, 0x9f, 0x4b, 0xbb, 0xdf, 0x4b, 0xbb, 0xff, 0x4b, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x4b, 0xdc, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9a, 0xbf, 0x74, 0x9d, 0x9f, 0x74, 0xbd, 0xef, 0x43, 0x58, 0xa0, 0x43, 0x58, 0xff, 0x43, 0x38, 0xff, 0x43, 0x37, 0x40, 0x43, 0x17, 0x30, 0x43, 0x16, 0x9f, 0x42, 0xf6, 0xdf, 0x3a, 0xd5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x58, 0x70, 0x43, 0x58, 0xff, 0x43, 0x58, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x7a, 0xff, 0x4b, 0xba, 0xaf, 0x74, 0xbd, 0xdf, 0x74, 0xbd, 0xff, 0x6c, 0x9d, 0xaf, 0x4b, 0xbb, 0xdf, 0x4b, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x4b, 0xbc, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xaf, 0x74, 0xbd, 0xcf, 0x74, 0xbd, 0xff, 0x74, 0xbd, 0xbf, 0x43, 0x59, 0xdf, 0x43, 0x58, 0xff, 0x43, 0x38, 0xff, 0x43, 0x37, 0xff, 0x43, 0x17, 0xff, 0x43, 0x16, 0xff, 0x3b, 0x16, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x58, 0x80, 0x43, 0x58, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x79, 0xff, 0x4b, 0x9a, 0xff, 0x53, 0xdb, 0xbf, 0x6c, 0x7c, 0xaf, 0x74, 0xdd, 0x9f, 0x53, 0xfc, 0x50, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x4b, 0xdc, 0xff, 0x4b, 0xbb, 0xff, 0x64, 0x1c, 0x40, 0x74, 0x9d, 0xaf, 0x64, 0x5c, 0xaf, 0x4b, 0x99, 0xcf, 0x43, 0x59, 0xff, 0x43, 0x58, 0xff, 0x43, 0x38, 0xff, 0x43, 0x37, 0xff, 0x43, 0x17, 0xef, 0x43, 0x16, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x58, 0x20, 0x43, 0x59, 0x40, 0x43, 0x79, 0x40, 0x4b, 0x79, 0x40, 0x4b, 0x9a, 0xa0, 0x4b, 0x9a, 0xdf, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x4b, 0xdc, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0x7a, 0xff, 0x4b, 0x79, 0xdf, 0x43, 0x59, 0x80, 0x43, 0x58, 0x50, 0x43, 0x37, 0x40, 0x43, 0x17, 0x40, 0x43, 0x16, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x37, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x9a, 0x20, 0x4b, 0x9b, 0xcf, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xdb, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x4b, 0xdc, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0x7a, 0x90, 0x43, 0x9a, 0x10, 0x00, 0x00, 0x00, 0x53, 0xdc, 0x20, 0x53, 0xfc, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0x90, 0x43, 0x17, 0xaf, 0x43, 0x17, 0x40, 0x43, 0x17, 0x20, 0x43, 0x58, 0x30, 0x4b, 0xbb, 0xdf, 0x4b, 0xbb, 0xff, 0x4b, 0xdb, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x4b, 0xdb, 0xff, 0x4b, 0xbb, 0xff, 0x4b, 0x9b, 0xff, 0x4b, 0x9a, 0x9f, 0x53, 0xdc, 0x20, 0x53, 0xdc, 0x20, 0x53, 0xdc, 0x60, 0x53, 0xdc, 0xdf, 0x53, 0xfc, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x16, 0x20, 0x43, 0x17, 0xee, 0x43, 0x17, 0xff, 0x43, 0x17, 0xff, 0x43, 0x17, 0xff, 0x43, 0x17, 0xde, 0x43, 0x58, 0xbf, 0x4b, 0xbb, 0xbf, 0x4b, 0xdb, 0xbf, 0x53, 0xdc, 0xbf, 0x53, 0xdc, 0xbf, 0x53, 0xdc, 0xbf, 0x4b, 0xdc, 0xbf, 0x53, 0xdc, 0xbf, 0x53, 0xfc, 0xef, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x16, 0x20, 0x43, 0x17, 0x70, 0x43, 0x17, 0x7f, 0x43, 0x17, 0x90, 0x43, 0x17, 0xdf, 0x43, 0x17, 0xff, 0x4b, 0x9a, 0xff, 0x4b, 0xbb, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xbf, 0x53, 0xdc, 0x80, 0x53, 0xdc, 0x80, 0x53, 0xdc, 0x60, 0x54, 0x1c, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x10, 0x43, 0x17, 0xcf, 0x43, 0x58, 0xff, 0x4b, 0xbb, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x20, 0x43, 0x17, 0xef, 0x4b, 0x79, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xff, 0x53, 0xdc, 0xdf, 0x54, 0x1c, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x17, 0x70, 0x43, 0x17, 0xfe, 0x4b, 0x79, 0xfe, 0x53, 0xfc, 0xff, 0x53, 0xfc, 0xee, 0x4b, 0xdc, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x16, 0x20, 0x43, 0x58, 0x9f, 0x53, 0xdc, 0x8f, 0x4b, 0xdc, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t walletTyphon = {
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 52,
  .header.h = 38,
  .data_size = 1976 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = walletTyphon_map,
};
