/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    PORT_program.c  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mostafa AboSalama
 *  Layer  : MCAL
 *
 *
 */ 
 
/* INCLUDE NEEDED FILES */
#include "../../4_LIBS/STD_TYPES.h"
#include "../../4_LIBS/BIT_MATHS.h"
#include "PORT_private.h"
#include "PORT_interface.h"
#include "PORT_config.h"

						/* FUNCTIONS DECLARATIONS */		
//---------------------------------------------------------------------------------------------------------------------------------------------------
/*
 * Breif : This Function Init port configuration
 * Parameters : Nothing
 * return : Nothing
 */
void PORT_voidInit(void)
{
	DDRA = PORTA_DIR;
	DDRB = PORTB_DIR;
	DDRC = PORTC_DIR;
	DDRD = PORTD_DIR;
	
	PORTA = PORTA_INITIAL_VALUE;
	PORTB = PORTB_INITIAL_VALUE;
	PORTC = PORTC_INITIAL_VALUE;
	PORTD = PORTD_INITIAL_VALUE;
}
