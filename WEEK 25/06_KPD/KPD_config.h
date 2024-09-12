/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    KPD_config.h  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mostafa AboSalama
 *  Layer  : HAL
 *
 */

#ifndef _KPD_CONFIG_H_
#define _KPD_CONFIG_H_

/* Define Row Pins (R0-R3) */
#define ROW_INIT    DIO_PIN0  // Start of row pins
#define ROW_END     DIO_PIN3  // End of row pins

/* Define Column Pins (C0-C3) */
#define COL_INIT    DIO_PIN4  // Start of column pins
#define COL_END     DIO_PIN7  // End of column pins

/* Keypad Button Values Mapping
 * Rows: R0 -> R3, Columns: C0 -> C3
 * Example: Button '7' is at (R0, C0)
 */						/* C0	C1	 C2	  C3  */
u8 KPD_u8Buttons[4][4] = {{'7', '8', '9', '/'},  /* R0 */
                          {'4', '5', '6', '*'},  /* R1 */
                          {'1', '2', '3', '-'},  /* R2 */
                          {'C', '0', '=', '+'}}; /* R3 */
                          
/* Select Keypad Port (Options: KPD_PORTA, KPD_PORTB, KPD_PORTC, KPD_PORTD) */
#define KPD_PORT    KPD_PORTA

/* Define Row Pins for Initialization */
#define KPD_R0      DIO_PIN0
#define KPD_R1      DIO_PIN1
#define KPD_R2      DIO_PIN2
#define KPD_R3      DIO_PIN3

/* Define Column Pins for Initialization */
#define KPD_C0      DIO_PIN4
#define KPD_C1      DIO_PIN5
#define KPD_C2      DIO_PIN6
#define KPD_C3      DIO_PIN7

#endif /* _KPD_CONFIG_H_ */
