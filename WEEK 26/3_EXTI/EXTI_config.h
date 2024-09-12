/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    EXTI_config.h  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mostafa AboSalama
 *  Layer  : MCAL
 *
 *
 */ 

#ifndef _EXTI_CONFIG_H_
#define _EXTI_CONFIG_H_


/* INITIAL CONFIGURATION, CAN BE CHANGED */

/*
	Options :
				EXTI_LINE0
				EXTI_LINE1
				EXTI_LINE2
*/
#define EXTI_LINE	EXTI_LINE0

/*
	Options :
				EXTI_FALLING_EDGE
				EXTI_RISING_EDGE
				EXTI_LOW_LEVEL
				EXTI_ON_CHANGE
*/
#define EXTI_SENSE_MODE		EXTI_FALLING_EDGE

#endif /* _EXTI_CONFIG_H_ */