/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    KPD_program.c  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mostafa AboSalama
 *  Layer  : HAL
 *
 */

/* INCLUDE NEEDED FILES */
#include "../../4_LIBS/STD_TYPES.h"
#include "../../4_LIBS/BIT_MATHS.h"
#include "../../1_MCAL/DIO_interface.h"
#include "KPD_private.h"
#include "KPD_interface.h"
#include "KPD_config.h"
#include <util/delay.h>


/* FUNCTIONS DEFINITIONS */

//---------------------------------------------------------------------------------------------------------------------------------------------------
/*
 * Brief : This Function initializes the keypad pins (rows as inputs with pull-ups, columns as outputs).
 * Parameters : Nothing
 * return : Nothing
 */
void KPD_voidInit(void)
{
    /* Set rows (R0-R3) as input with internal pull-up resistors */
    DIO_enumInternalPullUP(KPD_PORT, KPD_R0);
    DIO_enumInternalPullUP(KPD_PORT, KPD_R1);
    DIO_enumInternalPullUP(KPD_PORT, KPD_R2);
    DIO_enumInternalPullUP(KPD_PORT, KPD_R3);
    
    /* Set columns (C0-C3) as output and initially set them to HIGH */
    DIO_enumSetPinDirection(KPD_PORT, KPD_C0, DIO_PIN_OUTPUT);
    DIO_enumSetPinDirection(KPD_PORT, KPD_C1, DIO_PIN_OUTPUT);
    DIO_enumSetPinDirection(KPD_PORT, KPD_C2, DIO_PIN_OUTPUT);
    DIO_enumSetPinDirection(KPD_PORT, KPD_C3, DIO_PIN_OUTPUT);
    
    DIO_enumSetPinValue(KPD_PORT, KPD_C0, DIO_PIN_HIGH);
    DIO_enumSetPinValue(KPD_PORT, KPD_C1, DIO_PIN_HIGH);
    DIO_enumSetPinValue(KPD_PORT, KPD_C2, DIO_PIN_HIGH);
    DIO_enumSetPinValue(KPD_PORT, KPD_C3, DIO_PIN_HIGH);
}

//---------------------------------------------------------------------------------------------------------------------------------------------------
/*
 * Brief : This Function scans the keypad and returns the value of the pressed button
 * Parameters : Nothing
 * return : u8 - The character of the pressed key or NOT_PRESSED (0xFF) if no key is pressed
 */
u8 KPD_u8GetPressed(void)
{
    u8 LOC_u8RetData = NOT_PRESSED;  // Stores the pressed button
    u8 LOC_u8IsPressed;              // Stores the pin reading value
    
    u8 LOC_u8RowI;
    u8 LOC_u8ColI;
    
    /* Loop through each column */
    for (LOC_u8ColI = COL_INIT; LOC_u8ColI <= COL_END; LOC_u8ColI++)
    {
        /* Activate the current column by pulling it LOW */
        DIO_enumSetPinValue(KPD_PORT, LOC_u8ColI, DIO_PIN_LOW);
        
        /* Scan through the rows to check if any button is pressed */
        for (LOC_u8RowI = ROW_INIT; LOC_u8RowI <= ROW_END; LOC_u8RowI++)
        {
            /* Read the row pin to detect a pressed button */
            DIO_enumGetPinValue(KPD_PORT, LOC_u8RowI, &LOC_u8IsPressed);
            
            if (LOC_u8IsPressed == 0)  // Button is pressed (active low)
            {
                _delay_ms(50);  // Debouncing delay
                
                /* Check again to ensure stable press */
                DIO_enumGetPinValue(KPD_PORT, LOC_u8RowI, &LOC_u8IsPressed);
                
                if (LOC_u8IsPressed == 0)  // Confirmed press
                {
                    /* Calculate the pressed key based on row and column indices */
                    LOC_u8RetData = KPD_u8Buttons[LOC_u8RowI - ROW_INIT][LOC_u8ColI - COL_INIT];
                }
                
                _delay_ms(200);  // Wait to prevent multiple detections of the same press
                break;  // Exit the loop once a key is pressed
            }
        }
        
        /* Deactivate the current column by setting it back to HIGH */
        DIO_enumSetPinValue(KPD_PORT, LOC_u8ColI, DIO_PIN_HIGH);
    }
    
    return LOC_u8RetData;  // Return the pressed key or NOT_PRESSED
}
