/*======================================================*/
/* Author    : Hussein Waleed                           */
/* Author    : huseein7walid7@gmail.com                 */
/* Date      : 23 June 2022                           	*/
/* Version   : 1.0 										*/
/* Github    : https://github.com/hussein7waleed        */
/*======================================================*/

#ifndef MCAL_DIO_DIO_INT_H_
#define MCAL_DIO_DIO_INT_H_
#include "../../LIB/STD_TYPES.h" //Relative Path for STD_TYPES header file

/*
 * Preprocessor Configurations to define Ports, Pins and Statements
*/
 
//PORTS Set
#define DIO_PORTA   	  0
#define DIO_PORTB         1
#define DIO_PORTC   	  2
#define DIO_PORTD   	  3

//PINS Set
#define DIO_PIN0    	  0
#define DIO_PIN1    	  1
#define DIO_PIN2    	  2
#define DIO_PIN3   	      3
#define DIO_PIN4    	  4
#define DIO_PIN5          5
#define DIO_PIN6          6
#define DIO_PIN7          7

//PINS Directions
#define DIO_PIN_OUTPUT    1
#define DIO_PIN_INPUT     0

//PORT Directions
#define DIO_PORT_INPUT    0
#define DIO_PORT_OUTPUT   1

//PIN Output Logic
#define DIO_PIN_HIGH      1
#define DIO_PIN_LOW       0

//Set Pin Direction      "PORT"		"Pin Number"  "Direction"
void MDIO_vSetPinDir( u8 A_u8PortNo, u8 A_u8PinNo, u8 A_u8Dir );

//Set Pin Logic        "PORT"		 "Pin Number"	"Logic"
void MDIO_vSetPinVal( u8 A_u8PortNo, u8 A_u8PinNo, u8 A_u8Val );

//Get Pin Value        "PORT"		 "Pin Number"
u8 MDIO_u8GetPinVal( u8 A_u8PortNo, u8 A_u8PinNo );

//Set Port Direction       "PORT"	  "Direction"
void MDIO_vSetPortDir( u8 A_u8PortNo, u8 A_u8Dir );

//Set Port Logic         "PORT"	        "Logic"
void MDIO_vSetPortVal( u8 A_u8PortNo, u8 A_u8Val );

//Get Port Value         "PORT"	  
u8 MDIO_u8GetPortVal( u8 A_u8PortNo);

//Clear Port Value      "PORT"  portPins = 0x00;
void MDIO_vClrPort( u8 A_u8PortNo );

#endif /* MCAL_DIO_DIO_INT_H_ */
