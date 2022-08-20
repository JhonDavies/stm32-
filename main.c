#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_key.h"
#include "bsp_exti.h"
#include "bsp_beep.h"

int main(void)
{
	LED_Config();
	GPIO_KEY1_Config();
  GPIO_KEY2_Config();
	EXTI_KEY_Config();
	BEEP_Config();
	TR_Action();//红绿灯正常运行

}
