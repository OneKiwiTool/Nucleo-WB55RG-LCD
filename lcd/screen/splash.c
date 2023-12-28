#include "screen.h"

void screen_splash(void)
{
    ST7789_Init();
    ST7789_Fill_Color(WHITE);
    HAL_Delay(200);

    ST7789_DrawImage(25, 111, 120, 96, skua0);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua1);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua2);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua3);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua4);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua5);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua6);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua7);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua8);
    HAL_Delay(200);
    ST7789_DrawImage(25, 111, 120, 96, skua9);
    HAL_Delay(1000);
}
