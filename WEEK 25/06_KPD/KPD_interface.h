/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    KPD_interface.h  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mostafa AboSalama
 *  Layer  : HAL
 *
 */

#ifndef _KPD_INTERFACE_H_
#define _KPD_INTERFACE_H_

/* Define Keypad Ports */
#define KPD_PORTA   0
#define KPD_PORTB   1
#define KPD_PORTC   2
#define KPD_PORTD   3

/* Define Value for No Key Press */
#define NOT_PRESSED 0xFF

				/* FUNCTIONS PROTOTYPES */

/*
 * Brief : Initializes the keypad by setting rows as input with pull-ups and columns as output.
 * Parameters : Nothing
 * return : Nothing
 */
void KPD_voidInit(void);

/*
 * Brief : Returns the pressed key on the keypad or NOT_PRESSED if no key is pressed.
 * Parameters : Nothing
 * return : u8 - Pressed key or NOT_PRESSED
 */
u8 KPD_u8GetPressed(void);

#endif /* _KPD_INTERFACE_H_ */
