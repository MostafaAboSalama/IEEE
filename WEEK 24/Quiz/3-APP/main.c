#define F_CPU 8000000
#include <util/delay.h>
#include "../4-LIB/BIT_MATH.H"
#include "../4-LIB/STD_TYPES.H"
#include "../2-HAL/01_LED/LED_interface.h"
#include "../2-HAL/03_SW/SW_interface.h"
#include "../2-HAL/04_SSD/SSD_interface.h"
#include "../2-HAL/05_LCD/LCD_interface.h"

u8 score(u8 ans[]);
u8 GetPressed();
void Quiz();

SW_Type one   = {SW_PORTA, SW_PIN0, SW_EXT_PULL_DOWN};
SW_Type two   = {SW_PORTA, SW_PIN2, SW_EXT_PULL_DOWN};
SW_Type three = {SW_PORTA, SW_PIN4, SW_EXT_PULL_DOWN};
SW_Type four  = {SW_PORTA, SW_PIN6, SW_EXT_PULL_DOWN};
u8 ans[5] = {0};
int main()
{

	Quiz();
	return 0;
}

u8 GetPressed()
{
	u8 pressed = 0;
	if(SW_u8GetPressed(one))
	{
		_delay_ms(100);
		pressed = 1;
		while(SW_u8GetPressed(one));
	}

	else if(SW_u8GetPressed(two))
	{
		_delay_ms(100);
		pressed = 2;
		while(SW_u8GetPressed(two));
	}

	else if(SW_u8GetPressed(three))
	{
		_delay_ms(100);
		pressed = 3;
		while(SW_u8GetPressed(three));
	}

	else if(SW_u8GetPressed(four))
	{
		_delay_ms(100);
		pressed = 4;
		while(SW_u8GetPressed(four));
	}

	return pressed;
}

u8 score(u8 ans[])
{
	u8 i = 0;
	u8 sum = 0;
	for(i = 0; i < 5; i++)
	{
		sum+=ans[i];
	}

	return sum;
}

void Quiz()
{
	LCD_voidInit();
	u8 pressed = 0;

	LCD_voidSendString("Quiz Starts.");
	_delay_ms(2000);
	LCD_voidClearScreen();

	LCD_voidSendString("Who is the");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("first messenger?");
	_delay_ms(2000);
	LCD_voidClearScreen();
	LCD_voidSendString("1-Adam 2-Eissa");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("3-Ahmed 4-Nouh");

	while(1)
	{
		pressed = GetPressed();
		if(pressed != 0)
		{
			if(pressed == 4)
			{
				ans[0] = 1;
			}

			break;
		}

	}

	_delay_ms(100);
	LCD_voidClearScreen();

	LCD_voidSendString("What is the");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("best day?");
	_delay_ms(2000);
	LCD_voidClearScreen();
	LCD_voidSendString("1-Sat 2-Fri");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("3-Wed 4-Sun");
	pressed = GetPressed();
	while(1)
	{
		pressed = GetPressed();
		if(pressed != 0)
		{
			if(pressed == 2)
			{
				ans[1] = 1;
			}

			break;
		}

	}

	_delay_ms(100);
	LCD_voidClearScreen();

	LCD_voidSendString("What is the");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("best Surah?");
	_delay_ms(2000);
	LCD_voidClearScreen();
	LCD_voidSendString("1-Baqarah 2-Kahf");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("3-Fatiha 4-Masad");
	pressed = GetPressed();
	while(1)
	{
		pressed = GetPressed();
		if(pressed != 0)
		{
			if(pressed == 3)
			{
				ans[2] = 1;
			}

			break;
		}

	}

	_delay_ms(100);
	LCD_voidClearScreen();

	LCD_voidSendString("Who looks like");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("Saydena Mohamed?");
	_delay_ms(2000);
	LCD_voidClearScreen();
	LCD_voidSendString("1-Mousa 2-Gaafar");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("3-Ali 4-Omar");
	pressed = GetPressed();
	while(1)
	{
		pressed = GetPressed();
		if(pressed != 0)
		{
			if(pressed == 2)
			{
				ans[3] = 1;
			}

			break;
		}

	}

	_delay_ms(100);
	LCD_voidClearScreen();

	LCD_voidSendString("Who is the");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("kaleem ALLAH?");
	_delay_ms(2000);
	LCD_voidClearScreen();
	LCD_voidSendString("1-Eissa 2-Adam");
	LCD_voidSetPosition(2,1);
	LCD_voidSendString("3-Mousa 4-Dawood");
	pressed = GetPressed();
	while(1)
	{
		pressed = GetPressed();
		if(pressed != 0)
		{
			if(pressed == 3)
			{
				ans[4] = 1;
			}

			break;
		}

	}
	_delay_ms(100);
	LCD_voidClearScreen();

	LCD_voidSendString("Your score is");
	LCD_voidSetPosition(2,1);
	LCD_voidSendNumber(score(ans));
	LCD_voidSendString(" from 5");
	_delay_ms(5000);
	while(1)
	{

	}
}
