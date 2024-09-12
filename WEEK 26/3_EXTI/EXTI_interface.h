/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    EXTI_interface.h  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mostafa AboSalama
 *  Layer  : MCAL
 *
 *
 */ 
 
#ifndef _EXTI_INTERFACE_H_
#define _EXTI_INTERFACE_H_
 
	/* EXTI LINES */
#define EXTI_LINE0	0
#define EXTI_LINE1	1
#define EXTI_LINE2	2
	
	/* EXTI SENSE MODE*/
#define EXTI_FALLING_EDGE	0
#define EXTI_RISING_EDGE	1
#define EXTI_LOW_LEVEL		2
#define EXTI_ON_CHANGE		3

							/* FUNCTIONS PROTOTYPES */
void EXTI_voidInit(void);
void EXTI_voidSetSenseMode(u8 copy_u8ExtiLine, u8 copy_u8SenseMode);
void EXTI_voidEnableEXTI(u8 copy_u8ExtiLine);
void EXTI_voidDisableEXTI(u8 copy_u8ExtiLine);
void EXTI_voidSetCallBack(void (*copy_EXTI_FuncPtr)(void), u8 copy_u8ExtiLine);


#endif /* _EXTI_INTERFACE_H_ */