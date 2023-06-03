#ifndef __BOARD_H_
#define __BOARD_H_

#define DC_PIN      GPIO_PIN_9
#define DC_PORT     GPIOA
#define RST_PIN     GPIO_PIN_12
#define RST_PORT    GPIOC
#define CS_PIN      GPIO_PIN_4
#define CS_PORT     GPIOA

void board_init(void);

#endif /* __BOARD_H_ */
