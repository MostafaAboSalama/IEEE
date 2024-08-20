#define F_CPU 8000000
#include <util/delay.h>
#include "../4-LIB/BIT_MATH.H"
#include "../4-LIB/STD_TYPES.H"
#include "../2-HAL/01_LED/LED_interface.h"
#include "../2-HAL/03_SW/SW_interface.h"
#include "../2-HAL/04_SSD/SSD_interface.h"

int main()
{

	u8 UnitsCnt = 0; u8 TensCnt = 0;

	SW_Type Up   = {SW_PORTA, SW_PIN0, SW_EXT_PULL_DOWN};
	SW_Type Down = {SW_PORTA, SW_PIN3, SW_EXT_PULL_DOWN};

	SSD_Type units = {SSD_COMM_CAT, SSD_PORTC, SSD_PORTC, SSD_PIN7};
	SSD_Type tens  = {SSD_COMM_CAT, SSD_PORTD, SSD_PORTD, SSD_PIN7};

	SSD_voidInit(units);
	SSD_voidInit(tens);

	SSD_voidEnable(units); SSD_voidEnable(tens);
	SSD_voidSendNumber(units, 0); SSD_voidSendNumber(tens, 0);

	while(1)
	{
		/*for(TensCnt =0; TensCnt < 9; TensCnt++)
		{
			SSD_voidSendNumber(tens, TensCnt);
			_delay_ms(1000);
		}*/

		if(SW_u8GetPressed(Up))
		{
			_delay_ms(10);
			if(UnitsCnt == 9)
			{
				UnitsCnt = 0;
				TensCnt ++;
			}
			else
				UnitsCnt++;

			while(SW_u8GetPressed(Up));
		}
		else if (SW_u8GetPressed(Down))
		{
			_delay_ms(10);
			if(UnitsCnt == 0)
			{
				UnitsCnt = 9;
				TensCnt --;
			}
			else
				UnitsCnt--;

			while(SW_u8GetPressed(Down));
		}

		SSD_voidSendNumber(units, UnitsCnt); SSD_voidSendNumber(tens, TensCnt);
	}

	return 0;
}
