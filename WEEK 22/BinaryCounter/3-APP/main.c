#define F_CPU 8000000
#include <util/delay.h>
#include "../4-LIB/BIT_MATH.H"
#include "../4-LIB/STD_TYPES.H"
#include "../2-HAL/01_LED/LED_interface.h"

int main()
{


	while(1)
	{
		LED_voidBinaryCounter(LED_PORTC);
	}

	return 0;
}
