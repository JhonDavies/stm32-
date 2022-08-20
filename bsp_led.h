#ifndef __BSP_LED_H
#define __BSP_LED_H
#include "stm32f10x.h"

#define LED_G  GPIOB->ODR =0xfffe
#define LED_Y  GPIOB->ODR =0xffde
#define LED_R  GPIOB->ODR =0xffdf
#define LED_OFF GPIOB->ODR |=0xffff

void LED_Config(void);
void delay_5(void);
void delay_2(void);
void TR_Action(void);
#endif /*__BSP+LED_H*/
