/*
 * MATH_bit.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ibrahim
 */

#ifndef INTERFARNCE_1_LIB_MATH_BIT_H_
#define INTERFARNCE_1_LIB_MATH_BIT_H_
#define set_bit(reg,bit)       reg|=(1<<bit)
#define clear_bit(reg,bit)     reg&=~(1<<bit)
#define toggle_bit(reg,bit)    reg^=(1<<bit)
#define get_bit(reg,bit)       (((reg)>>(bit)) &0x01)


#endif /* INTERFARNCE_1_LIB_MATH_BIT_H_ */
