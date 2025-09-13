#ifndef __IRAM_H__
#define __IRAM_H__

#include <wonderful.h>
#include <ws.h>
#include <wse.h>

#ifdef __WONDERFUL_WWITCH__
#define screen_1 (*((ws_screen_t ws_iram*) 0x1000))
#define screen_1_page_2 (*((ws_screen_t ws_iram*) 0x1800))
#define screen_2 (*((ws_screen_t ws_iram*) 0x3000))
#define screen_2_page_2 (*((ws_screen_t ws_iram*) 0x3800))
#define sprites (*((ws_sprite_table_t ws_iram*) 0x2e00))
#else
#define screen_1 wse_screen1
#define screen_1_page_2 wse_screen2
#define screen_2 wse_screen3
#define screen_2_page_2 wse_screen4
#define sprites wse_sprites1
#endif

#endif /* __IRAM_H__ */
