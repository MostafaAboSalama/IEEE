/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    EXTI_program.c  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mostafa AboSalama
 * Layer   : MCAL
 *
 * Description: Implementation of the EXTI (External Interrupt) driver functions.
 */ 

/* INCLUDE NEEDED FILES */
#include "../../4_LIBS/STD_TYPES.h"
#include "../../4_LIBS/BIT_MATHS.h"
#include "EXTI_private.h"
#include "EXTI_interface.h"
#include "EXTI_config.h"

/* CALLBACK POINTER TO FUNCTIONS -> ARRAY OF 3 FUNCTION POINTERS */
void (*EXTI_CallBackFuncPtr[3])(void) = {NULL};

/* FUNCTIONS IMPLEMENTATIONS */

/*
 * Brief  : Initializes the EXTI sense mode based on configuration settings.
 * Parameters : Nothing
 * Return : Nothing
 */
void EXTI_voidInit(void)
{
    /* EXTI LINE0 */
    #if EXTI_LINE == EXTI_LINE0
        #if EXTI_SENSE_MODE == EXTI_FALLING_EDGE
            SET_BIT(MCUCR, ISC01); CLR_BIT(MCUCR, ISC00);
        #elif EXTI_SENSE_MODE == EXTI_RISING_EDGE
            SET_BIT(MCUCR, ISC01); SET_BIT(MCUCR, ISC00);
        #elif EXTI_SENSE_MODE == EXTI_LOW_LEVEL
            CLR_BIT(MCUCR, ISC01); CLR_BIT(MCUCR, ISC00);
        #elif EXTI_SENSE_MODE == EXTI_ON_CHANGE
            CLR_BIT(MCUCR, ISC01); SET_BIT(MCUCR, ISC00);
        #endif
    #endif

    /* EXTI LINE1 */
    #if EXTI_LINE == EXTI_LINE1
        #if EXTI_SENSE_MODE == EXTI_FALLING_EDGE
            SET_BIT(MCUCR, ISC11); CLR_BIT(MCUCR, ISC10);
        #elif EXTI_SENSE_MODE == EXTI_RISING_EDGE
            SET_BIT(MCUCR, ISC11); SET_BIT(MCUCR, ISC10);
        #elif EXTI_SENSE_MODE == EXTI_LOW_LEVEL
            CLR_BIT(MCUCR, ISC11); CLR_BIT(MCUCR, ISC10);
        #elif EXTI_SENSE_MODE == EXTI_ON_CHANGE
            CLR_BIT(MCUCR, ISC11); SET_BIT(MCUCR, ISC10);
        #endif
    #endif

    /* EXTI LINE2 */
    #if EXTI_LINE == EXTI_LINE2
        #if EXTI_SENSE_MODE == EXTI_FALLING_EDGE
            CLR_BIT(MCUCSR, ISC2);
        #elif EXTI_SENSE_MODE == EXTI_RISING_EDGE
            SET_BIT(MCUCSR, ISC2);
        #endif
    #endif
}

/*
 * Brief  : Changes the default sense mode for a specific EXTI line.
 * Parameters :
 *              => copy_u8ExtiLine --> EXTI line [EXTI_LINE0, EXTI_LINE1, EXTI_LINE2]
 *              => copy_u8SenseMode --> Sense mode [EXTI_FALLING_EDGE, EXTI_RISING_EDGE, EXTI_LOW_LEVEL, EXTI_ON_CHANGE]
 * Return : Nothing
 */
void EXTI_voidSetSenseMode(u8 copy_u8ExtiLine, u8 copy_u8SenseMode)
{
    if (copy_u8ExtiLine >= EXTI_LINE0 && copy_u8ExtiLine <= EXTI_LINE2 &&
        copy_u8SenseMode >= EXTI_FALLING_EDGE && copy_u8SenseMode <= EXTI_ON_CHANGE)
    {
        switch (copy_u8SenseMode)
        {
            case EXTI_FALLING_EDGE:
                switch (copy_u8ExtiLine)
                {
                    case EXTI_LINE0: SET_BIT(MCUCR, ISC01); CLR_BIT(MCUCR, ISC00); break;
                    case EXTI_LINE1: SET_BIT(MCUCR, ISC11); CLR_BIT(MCUCR, ISC10); break;
                    case EXTI_LINE2: CLR_BIT(MCUCSR, ISC2); break;
                }
                break;
            case EXTI_RISING_EDGE:
                switch (copy_u8ExtiLine)
                {
                    case EXTI_LINE0: SET_BIT(MCUCR, ISC01); SET_BIT(MCUCR, ISC00); break;
                    case EXTI_LINE1: SET_BIT(MCUCR, ISC11); SET_BIT(MCUCR, ISC10); break;
                    case EXTI_LINE2: SET_BIT(MCUCSR, ISC2); break;
                }
                break;
            case EXTI_LOW_LEVEL:
                switch (copy_u8ExtiLine)
                {
                    case EXTI_LINE0: CLR_BIT(MCUCR, ISC01); CLR_BIT(MCUCR, ISC00); break;
                    case EXTI_LINE1: CLR_BIT(MCUCR, ISC11); CLR_BIT(MCUCR, ISC10); break;
                }
                break;
            case EXTI_ON_CHANGE:
                switch (copy_u8ExtiLine)
                {
                    case EXTI_LINE0: CLR_BIT(MCUCR, ISC01); SET_BIT(MCUCR, ISC00); break;
                    case EXTI_LINE1: CLR_BIT(MCUCR, ISC11); SET_BIT(MCUCR, ISC10); break;
                }
                break;
        }
    }
}

/*
 * Brief  : Enables the EXTI for a specific line.
 * Parameters :
 *              => copy_u8ExtiLine --> EXTI line [EXTI_LINE0, EXTI_LINE1, EXTI_LINE2]
 * Return : Nothing
 */
void EXTI_voidEnableEXTI(u8 copy_u8ExtiLine)
{
    switch (copy_u8ExtiLine)
    {
        case EXTI_LINE0: SET_BIT(GICR, INT0); break;
        case EXTI_LINE1: SET_BIT(GICR, INT1); break;
        case EXTI_LINE2: SET_BIT(GICR, INT2); break;
    }
}

/*
 * Brief  : Disables the EXTI for a specific line.
 * Parameters :
 *              => copy_u8ExtiLine --> EXTI line [EXTI_LINE0, EXTI_LINE1, EXTI_LINE2]
 * Return : Nothing
 */
void EXTI_voidDisableEXTI(u8 copy_u8ExtiLine)
{
    switch (copy_u8ExtiLine)
    {
        case EXTI_LINE0: CLR_BIT(GICR, INT0); break;
        case EXTI_LINE1: CLR_BIT(GICR, INT1); break;
        case EXTI_LINE2: CLR_BIT(GICR, INT2); break;
    }
}

/*
 * Brief  : Sets the callback function for an EXTI line.
 * Parameters :
 *              => copy_u8ExtiLine --> EXTI line [EXTI_LINE0, EXTI_LINE1, EXTI_LINE2]
 *              => void (*copy_EXTI_FuncPtr)(void) --> Address of the ISR function
 * Return : Nothing
 */
void EXTI_voidSetCallBack(void (*copy_EXTI_FuncPtr)(void), u8 copy_u8ExtiLine)
{
    if (copy_EXTI_FuncPtr != NULL && copy_u8ExtiLine < 3)
        EXTI_CallBackFuncPtr[copy_u8ExtiLine] = copy_EXTI_FuncPtr;
}

/* ISR IMPLEMENTATIONS */

void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
    if (EXTI_CallBackFuncPtr[EXTI_LINE0] != NULL)
        EXTI_CallBackFuncPtr[EXTI_LINE0]();
}

void __vector_2(void) __attribute__((signal));
void __vector_2(void)
{
    if (EXTI_CallBackFuncPtr[EXTI_LINE1] != NULL)
        EXTI_CallBackFuncPtr[EXTI_LINE1]();
}

void __vector_3(void) __attribute__((signal));
void __vector_3(void)
{
    if (EXTI_CallBackFuncPtr[EXTI_LINE2] != NULL)
        EXTI_CallBackFuncPtr[EXTI_LINE2]();
}
