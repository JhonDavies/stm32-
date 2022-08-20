#include "bsp_systick.h"

void Systick_delay_ms(uint32_t ms)
{
	uint32_t i;
	SysTick_Config(72000);//reload的值,此处实现了1us
	
	for(i =0;i<ms;i++)
	{
		while(!((SysTick->CTRL)&(1<<16)));
	}
	SysTick->CTRL &=~SysTick_CTRL_ENABLE_Msk;
}
