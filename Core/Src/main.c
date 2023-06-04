#include "main.h"
#include "board.h"
#include <stdio.h>

#include "GUI_Paint.h"
#include "fonts.h"
#include "image.h"
#include "LCD_Test.h"

#include "lvgl.h"
#include "lv_port_disp.h"

int main(void)
{
    board_init();
    printf("\nStart Program!\n");

    LCD_2in_test();

    lv_init();
    lv_port_disp_init();

    lv_obj_t* btn = lv_btn_create(lv_scr_act()); 
    lv_obj_set_pos(btn, 10, 10);
    lv_obj_set_size(btn, 120, 50);
    lv_obj_t* label = lv_label_create(btn);
    lv_label_set_text(label, "OneKiwi");
    lv_obj_center(label);
    while (1)
    {
        lv_task_handler();
    }
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
}
#endif /* USE_FULL_ASSERT */
