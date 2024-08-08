/*
 * TrafficLights.c
 *
 *  Created on: Jul 26, 2024
 *      Author: user
 */
#define F_CPU 8000000
#include <util/delay.h>
#include "../4-LIB/BIT_MATH.H"
#include "../4-LIB/STD_TYPES.H"
#include "../2-HAL/01_LED/LED_interface.h"
#include "../2-HAL/04_SSD/SSD_interface.h"
#include "../2-HAL/05_LCD/LCD_interface.h"



int main()
{

	/*LED_Type Redled = {DIO_PORTA, DIO_PIN0, ACTIVE_HIGH};
	LED_Type Greenled = {DIO_PORTA, DIO_PIN7, ACTIVE_HIGH};
	LED_Type Yellowled = {DIO_PORTA, DIO_PIN3, ACTIVE_HIGH};*/
	LCD_voidInit();
	while(1)
	{
		LCD_voidSendString("STOP");
		//LED_voidON(Redled); LED_voidOff(Greenled); LED_voidOff(Yellowled);
		SSD_voidCounter();
		//LED_voidOff(Redled);
		CLCD_voidClearScreen();

		LCD_voidSendString("STEADY");
		//LED_voidON(Yellowled);
		SSD_voidCounter();
		//LED_voidOff(Yellowled);
		CLCD_voidClearScreen();

		LCD_voidSendString("GO");
		//LED_voidON(Greenled);
		SSD_voidCounter();
		//LED_voidOff(Greenled);
		CLCD_voidClearScreen();
	}
	return 0;
}


