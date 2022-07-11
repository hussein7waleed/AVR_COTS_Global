/*======================================================*/
/* Author    : Hussein Waleed                           */
/* Author    : huseein7walid7@gmail.com                 */
/* Date      : 02 MAY 2022                           	*/
/* Version   : 1.0 										*/
/* Github    : https://github.com/hussein7waleed        */
/*======================================================*/

#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SET_BIT(Reg, bitnum)       (Reg |=1<<bitnum)
#define CLR_BIT(Reg, bitnum)       (Reg &=~(1<<bitnum))
#define TOGGLE_BIT(Reg, bitnum)    (Reg ^=(1<<bitnum))
#define GET_BIT(Reg, bitnum)       ((Reg>>bitnum)& 0x01)
#define SET_BYTE(Reg,value)         ( Reg = value )


#endif
