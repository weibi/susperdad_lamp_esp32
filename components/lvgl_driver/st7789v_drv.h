#ifndef _ST7789V_DRV_H_
#define _ST7789V_DRV_H_

#include "../lvgl/lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

void st7789v_init(void);
void st7789v_fill(int32_t x1, int32_t y1, int32_t x2, int32_t y2, lv_color_t color);
void st7789v_flush(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const lv_color_t * color_map);

#ifdef __cplusplus
}
#endif

#endif /*_ST7789V_DRV_H_*/