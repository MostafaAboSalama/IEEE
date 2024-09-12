/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    EXTI_private.h  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mostafa AboSalama
 *  Layer  : MCAL
 *
 *
 */ 

#ifndef _EXTI_PRIVATE_H_
#define _EXTI_PRIVATE_H_

/* INT REGISTERS */
#define GICR	*(volatile u8*)(0x5B)
#define GIFR	*(volatile u8*)(0x5A)
#define TIMSK	*(volatile u8*)(0x59)
#define TIFR	*(volatile u8*)(0x58)
#define MCUCR	*(volatile u8*)(0x55)
#define MCUCSR	*(volatile u8*)(0x54)
#define SREG	*(volatile u8*)(0x3F)
								
/* MCUCR REGISTER */        
#define ISC11	3
#define ISC10	2
#define ISC01	1
#define ISC00	0

/* MCUCSR REGISTER */        
#define ISC2	6

/* GICR REGISTER */        
#define INT1	7
#define INT0	6
#define INT2	5
  
/* GIFR REGISTER */        
#define INTF1	7
#define INTF0	6
#define INTF2	5


#endif /* _EXTI_PRIVATE_H_ */