#define F_CPU 8000000
#include <util/delay.h>
#include "../4-LIB/BIT_MATH.H"
#include "../4-LIB/STD_TYPES.H"
#include "../2-HAL/01_LED/LED_interface.h"
#include "../2-HAL/03_SW/SW_interface.h"
#include "../2-HAL/04_SSD/SSD_interface.h"

#define REAL_PASSWORD 1234

int main()
{
	u16 enteredPassword = 0;
	u8 cnt = 0;
	u16 pressed = 0;

	SW_Type one   = {SW_PORTA, SW_PIN0, SW_EXT_PULL_DOWN};
	SW_Type two   = {SW_PORTA, SW_PIN1, SW_EXT_PULL_DOWN};
	SW_Type three = {SW_PORTA, SW_PIN3, SW_EXT_PULL_DOWN};
	SW_Type four  = {SW_PORTA, SW_PIN5, SW_EXT_PULL_DOWN};
	SW_Type five  = {SW_PORTA, SW_PIN7, SW_EXT_PULL_DOWN};

	SSD_Type units = {SSD_COMM_CAT, SSD_PORTC, SSD_PORTC, SSD_PIN7};
	SSD_voidInit(units);
	SSD_voidEnable(units);

	LED_Type Redled   = {DIO_PORTD, DIO_PIN0, ACTIVE_HIGH};
	LED_Type Greenled = {DIO_PORTD, DIO_PIN7, ACTIVE_HIGH};
	LED_voidInit(Redled);
	LED_voidInit(Greenled);

	while(1)
	{
		while(cnt < 4)
		{
			if(SW_u8GetPressed(one))
			{
				_delay_ms(100);
				pressed = 1;
				while(SW_u8GetPressed(one));
				cnt++;
				SSD_voidSendNumber(units, pressed);
				enteredPassword = enteredPassword * 10 + pressed;
			}
			else if(SW_u8GetPressed(two))
			{
				_delay_ms(100);
				pressed = 2;
				while(SW_u8GetPressed(two));
				cnt++;
				SSD_voidSendNumber(units, pressed);
				enteredPassword = enteredPassword * 10 + pressed;
			}
			else if(SW_u8GetPressed(three))
			{
				_delay_ms(100);
				pressed = 3;
				while(SW_u8GetPressed(three));
				cnt++;
				SSD_voidSendNumber(units, pressed);
				enteredPassword = enteredPassword * 10 + pressed;
			}
			else if(SW_u8GetPressed(four))
			{
				_delay_ms(100);
				pressed = 4;
				while(SW_u8GetPressed(four));
				cnt++;
				SSD_voidSendNumber(units, pressed);
				enteredPassword = enteredPassword * 10 + pressed;
			}
			else if(SW_u8GetPressed(five))
			{
				_delay_ms(100);
				pressed = 5;
				while(SW_u8GetPressed(five));
				cnt++;
				SSD_voidSendNumber(units, pressed);
				enteredPassword = enteredPassword * 10 + pressed;
			}

		}

		LCD_voidSendNumber(enteredPassword);

		if(enteredPassword == REAL_PASSWORD)
		{
			LED_voidON(Greenled);
			break;
		}
		else
		{
			enteredPassword = 0;
			cnt = 0;
			while(!SW_u8GetPressed(one) && !SW_u8GetPressed(two) && !SW_u8GetPressed(three) && !SW_u8GetPressed(four) && !SW_u8GetPressed(five))
			{
				_delay_ms(10);
				LED_voidToggle(Redled);
				_delay_ms(500);
			}
			LED_voidOff(Redled);
		}
	}

	return 0;
}
