#include "stm32f10x.h"
#include "LED.h"
#include "delay.h"


int main(void)
{
	delay_init();
	LED_Init();
	
	while(1){
		
		GPIO_ResetBits(GPIOC,GPIO_Pin_6);
		delay_ms(100);
		GPIO_ResetBits(GPIOC,GPIO_Pin_7);
		delay_ms(100);
		GPIO_ResetBits(GPIOC,GPIO_Pin_8);
		delay_ms(100);
		GPIO_ResetBits(GPIOC,GPIO_Pin_9);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_0);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_6);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_10);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_9);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_8);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_13);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_14);
		delay_ms(100);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
		delay_ms(100);

		
		GPIO_SetBits(GPIOC,GPIO_Pin_6);
		delay_ms(100);
		GPIO_SetBits(GPIOC,GPIO_Pin_7);
		delay_ms(100);
		GPIO_SetBits(GPIOC,GPIO_Pin_8);
		delay_ms(100);
		GPIO_SetBits(GPIOC,GPIO_Pin_9);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_10);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_9);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_7);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_11);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_13);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_14);
		delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_15);
		delay_ms(100);

	}
}
