#ifndef __BSP_BEEP_H
#define __BSP_BEEP_H

#include "stm32f10x.h"


#define BEEP_OFF   GPIOA->ODR &=~(1<<8)
#define BEEP_ON    GPIOA->ODR |=(1<<8)

void delay(uint32_t i);
void BEEP_Config(void);
void sos(void);
void sos_off(void);

#endif /*__BSP_BEEP_H*/