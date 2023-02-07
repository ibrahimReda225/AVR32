/*
 * DIO_types.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ibrahim
 */

#ifndef INTERFARNCE_1_MCAL_DIO_DIO_TYPES_H_
#define INTERFARNCE_1_MCAL_DIO_DIO_TYPES_H_

typedef enum{
	input,//0
	output//1
}DIO_Direction;
typedef enum{
	PORTA,//0
	PORTB,//1
	PORTC,//2
	PORTD//3
}DIO_PORTID;
/*typedef enum{
	LOW,//0
	HIGH,//1
}DIO_value;*/
typedef enum{
	pin0,//0
	pin1,//1
	pin2,//2
	pin3,//3
	pin4,//4
	pin5,//5
	pin6,//6
	pin7,//7
}DIO_PINID;

#endif /* INTERFARNCE_1_MCAL_DIO_DIO_TYPES_H_ */
