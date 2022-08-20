#include "bsp_beep.h"


void BEEP_Config(void)
{
	GPIO_InitTypeDef GPIO_BEEP_Struct;
	GPIO_BEEP_Struct.GPIO_Mode =GPIO_Mode_Out_PP;
	GPIO_BEEP_Struct.GPIO_Pin =GPIO_Pin_8;
	GPIO_BEEP_Struct.GPIO_Speed =GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_BEEP_Struct);
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);
}

