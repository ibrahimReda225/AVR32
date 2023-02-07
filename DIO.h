/*
 * DIO.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ibrahim
 */
//#include"../../LIB/STD_types.h"
#ifndef INTERFARNCE_1_MCAL_DIO_DIO_H_
#define INTERFARNCE_1_MCAL_DIO_DIO_H_
void SetPortDirection(DIO_PORTID port,DIO_Direction direct);
void SetPortValue(DIO_PORTID port,STD_leveltype value);
void SetPinDirection(DIO_PORTID port,DIO_Direction direct,DIO_PINID pin);
void SetPinValue(DIO_PORTID port,STD_leveltype value,DIO_PINID pin);
STD_leveltype GetPinValue(DIO_PORTID port,DIO_PINID pin	);

#endif /* INTERFARNCE_1_MCAL_DIO_DIO_H_ */
