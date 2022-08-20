#include "bsp_led.h"

void LED_Config(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_InitTypeDef GPIO_LED_Struct;
	GPIO_LED_Struct.GPIO_Mode =GPIO_Mode_Out_PP;
	GPIO_LED_Struct.GPIO_Pin =GPIO_Pin_0|GPIO_Pin_5;
	GPIO_LED_Struct.GPIO_Speed =GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_LED_Struct);
	GPIO_SetBits(GPIOB,GPIO_Pin_0|GPIO_Pin_5);
}

void delay_5(void)
{
	uint32_t i;
	for(i =0xfffffd;i>0;i--);
}
void delay_2(void)
{
	uint32_t j;
	for(j =0xfffff;j>0;j--);
}

void TR_Action(void)
{
	uint8_t i;
		while(1)
	{
		LED_R;
		delay_5();
		LED_G;
		delay_5();
		for(i=1;i<=10;i++)
		{
			LED_Y;
			delay_2();
			LED_OFF;
			delay_2();
		}
	}
}
