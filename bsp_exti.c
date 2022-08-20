#include "bsp_exti.h"

//嵌套向量中断控制器
static void NVIC_KEY_Config(void)
{
	NVIC_InitTypeDef NVIC_Struct;
	//优先级配置
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);//优先级组
	NVIC_Struct.NVIC_IRQChannel =EXTI0_IRQn;//中断源
	NVIC_Struct.NVIC_IRQChannelPreemptionPriority =1;//抢占优先级
	NVIC_Struct.NVIC_IRQChannelSubPriority =1;
	NVIC_Struct.NVIC_IRQChannelCmd =ENABLE;
	NVIC_Init(&NVIC_Struct);
	NVIC_Struct.NVIC_IRQChannel =EXTI15_10_IRQn;
	//二合一配置
	NVIC_Init(&NVIC_Struct);
}

//EXTI中断配置
void EXTI_KEY_Config(void)
{
	EXTI_InitTypeDef EXTI_KEY_Struct;
	NVIC_KEY_Config();
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOA, GPIO_PinSource0);
	EXTI_KEY_Struct.EXTI_Line =EXTI_Line0;
	EXTI_KEY_Struct.EXTI_Trigger =EXTI_Trigger_Falling;
	EXTI_KEY_Struct.EXTI_Mode =EXTI_Mode_Interrupt;
	EXTI_KEY_Struct.EXTI_LineCmd =ENABLE;
	EXTI_Init(&EXTI_KEY_Struct);
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOC, GPIO_PinSource13);
	EXTI_KEY_Struct.EXTI_Line =EXTI_Line13;
	EXTI_Init(&EXTI_KEY_Struct);
}
