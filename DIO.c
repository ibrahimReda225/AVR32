#include"../../LIB/MATH_bit.h"
#include"../../LIB/STD_types.h"

#include"DIO_REG.h"
#include"DIO_types.h"
#include"DIO.h"

void SetPortDirection(DIO_PORTID port,DIO_Direction direct){
if(direct==output){
switch(port){
case (PORTA):DDRA_reg =0xFF;break;
case (PORTB):DDRB_reg =0xFF;break;
case (PORTC):DDRC_reg =0xFF;break;
case (PORTD):DDRD_reg =0xFF;break;
}
}
else if(direct==input){
switch(port){
case (PORTA):DDRA_reg =0x00;break;
case (PORTB):DDRB_reg =0x00;break;
case (PORTC):DDRC_reg =0x00;break;
case (PORTD):DDRD_reg =0x00;break;
}
}
}
void SetPortValue(DIO_PORTID port,STD_leveltype value){
if(value==HIGH){
switch(port){
case (PORTA):PORTA_reg =0xFF;break;
case (PORTB):PORTB_reg =0xFF;break;
case (PORTC):PORTC_reg =0xFF;break;
case (PORTD):PORTD_reg =0xFF;break;
}
}
else if(value==LOW){
switch(port){
case (PORTA):PORTA_reg =0x00;break;
case (PORTB):PORTB_reg =0x00;break;
case (PORTC):PORTC_reg =0x00;break;
case (PORTD):PORTD_reg =0x00;break;
}
}
}
void SetPinDirection(DIO_PORTID port,DIO_Direction direct,DIO_PINID pin){
if(port<=PORTD&&pin<=pin7){
if(direct==output){
switch(port){
case (PORTA):set_bit(DDRA_reg,pin);break;
case (PORTB):set_bit(DDRB_reg,pin);break;
case (PORTC):set_bit(DDRC_reg,pin);break;
case (PORTD):set_bit(DDRD_reg,pin);break;
}
}
else if(direct==input){
switch(port){
case (PORTA):clear_bit(DDRA_reg,pin);break;
case (PORTB):clear_bit(DDRA_reg,pin);break;
case (PORTC):clear_bit(DDRA_reg,pin);break;
case (PORTD):clear_bit(DDRA_reg,pin);break;
}
}
}
}
void SetPinValue(DIO_PORTID port,STD_leveltype value,DIO_PINID pin){
if(port<=PORTD&&pin<=pin7){
if(value==HIGH){
switch(port){
case (PORTA):set_bit(PORTA_reg,pin);break;
case (PORTB):set_bit(PORTB_reg,pin);break;
case (PORTC):set_bit(PORTC_reg,pin);break;
case (PORTD):set_bit(PORTD_reg,pin);break;
}
}
else if(value==LOW){
switch(port){
	case (PORTA):clear_bit(PORTA_reg,pin);break;
	case (PORTB):clear_bit(PORTB_reg,pin);break;
	case (PORTC):clear_bit(PORTC_reg,pin);break;
	case (PORTD):clear_bit(PORTD_reg,pin);break;
	}
}
}
}
STD_leveltype GetPinValue(DIO_PORTID port,DIO_PINID pin	){
STD_leveltype x;
if(port<=PORTD&&pin<=pin7){

switch(port){
case (PORTA):x=get_bit(PINA_reg,pin);break;
case (PORTB):x=get_bit(PINB_reg,pin);break;
case (PORTC):x=get_bit(PINC_reg,pin);break;
case (PORTD):x=get_bit(PIND_reg,pin);break;
}

}
return x;
}



