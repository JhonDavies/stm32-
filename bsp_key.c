#include "bsp_key.h"

void GPIO_KEY1_Config(void)
{
	GPIO_InitTypeDef GPIO_KEY1_Struct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_KEY1_Struct.GPIO_Mode =GPIO_Mode_IN_FLOATING;
	GPIO_KEY1_Struct.GPIO_Pin =GPIO_Pin_0;
	GPIO_Init(GPIOA,&GPIO_KEY1_Struct);
}

void GPIO_KEY2_Config(void)
{
	GPIO_InitTypeDef GPIO_KEY2_Struct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_KEY2_Struct.GPIO_Mode =GPIO_Mode_IN_FLOATING;
	GPIO_KEY2_Struct.GPIO_Pin =GPIO_Pin_13;
	GPIO_Init(GPIOC,&GPIO_KEY2_Struct);
}

//uint8_t KEY1_Scan(void)
//{
//	if(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_0) ==1)
//	{
//		while(GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_0) ==1);
//		return 1;
//	}
//	else
//		return 0;
//}
//uint8_t KEY2_Scan(void)
//{
//	if(GPIO_ReadInputDataBit(GPIOC, GPIO_Pin_13) ==1)
//	{
//		while(GPIO_ReadInputDataBit(GPIOC, GPIO_Pin_13) ==1);
//		return 1;
//	}
//	else
//		return 0;
//}



