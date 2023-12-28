#include "main.h"
#include "board.h"
#include "screen.h"
#include <stdio.h>

uint8_t page = 0;
uint8_t render = 0;
int main(void)
{
    board_init();
    printf("\nStart Program!\n");

    screen_splash();
    screen_home();

    //HAL_Delay(2000);
    //screen_setting();

    //HAL_Delay(2000);
    //screen_pair();

    //HAL_Delay(2000);
    //screen_info();

    //HAL_Delay(2000);
    //screen_pairing();

    //screen_paired();

    while (1)
    {
        if (page == 0 && render == 1)
        {
            screen_home();
            render = 0;
        }

        if (page == 1 && render == 1)
        {
            screen_setting();
            render = 0;
        }

        if (page == 2 && render == 1)
        {
            screen_pair();
            render = 0;
        }

        if (page == 3 && render == 1)
        {
            screen_info();
            render = 0;
        }

        if (page == 4 && render == 1)
        {
            screen_pairing();
            render = 0;
        }

        if (page == 5 && render == 1)
        {
            screen_paired();
            render = 0;
        }
    }
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if (GPIO_Pin == GPIO_PIN_0)
    {
        page++;
        render = 1;
        if(page > 5){
            page = 0;
        }
        /* Toggle LED2 */
        //HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
        //GPIO_PIN_RESET
        //BSP_LED_Toggle(LED2);
    }

    if (GPIO_Pin == GPIO_PIN_1)
    {
        /* Toggle LED2 */
        //HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5);
        //GPIO_PIN_RESET
        //BSP_LED_Toggle(LED2);
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
