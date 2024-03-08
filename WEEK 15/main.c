
#include <stdint.h>
#include "stm32f103x6.h"
#include "Stm32_F103C6_GPIO.h"
#include "lcd.h"


void clock_init()
{
	//Enable port A clock
	RCC_GPIOA_CLK_EN();
	//Enable port B clock
	RCC_GPIOB_CLK_EN();
}
void wait_ms(uint32_t time){
	uint32_t i,j;
	for(i=0;i<time;i++)
		for(j=0;j<255;j++);
}//hint time :100 == 1 sec

int main(void)
{
	clock_init();
	lcd_init();
	/*GPIO_PIN_CONFIG_T PinConfig;
	PinConfig.GPIO_PIN_NUMBER = GPIO_PIN_12;
	PinConfig.GPIO_MODE = GPIO_MODE_OUTPUT_PP;
	PinConfig.GPIO_OUTPUT_SPEED = GPIO_SPEED_2MHz;
	MCAL_GPIO_Init(GPIOA, &PinConfig);
	unsigned char *The_char = "IEEE";*/
	while(1)
	{
		// implementation
		lcd_clear();
		lcd_send_string("IEEE");
		wait_ms(300);
		lcd_clear();
		lcd_send_string("Ramadan Kareem");
		wait_ms(300);
		lcd_clear();
		lcd_send_string("AboSalama");
		wait_ms(300);
		/*MCAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
		wait_ms(100);
		MCAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);*/
		
	}

}