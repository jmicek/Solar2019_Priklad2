/*
 * Board_solar.h
 *
 * Created: 13.3.2019 11:14:21
 *  Author: Juraj
 */ 

#ifndef BOARD_SOLAR_H_
#define BOARD_SOLAR_H_

#define F_CPU 1000000UL									/* Define CPU clock Frequency e.g. here its 8MHz */
#include <avr/io.h>										/* Include AVR std. library file */
#include <util/delay.h>									/* Include delay header file */
#include <inttypes.h>									/* Include integer type header file */
#include <stdlib.h>										/* Include standard library file */
#include <stdio.h>										/* Include standard library file */
//#include "MPU6050_res_define.h"						/* Include MPU6050 register define file */
//#include "USART_EW.h"									/* Include USART header file */
//#include "MPU6050_reg.h"
//#include "I2C_Master.h"

#define sbi(x,y) x |= (1<<y)		//_BV(y)	 //nastav bit     (1<<y)
#define cbi(x,y) x &= ~(1<<y)   //(_BV(y)) //nuluj bit - using bitwise AND operator
#define tbi(x,y) x ^= _BV(y)    //zmen bit - using bitwise XOR operator



/********I2C********************************/
#define SCL_CLK 20000L							/* Define SCL clock frequency */
#define BITRATE	((F_CPU/SCL_CLK)-16)/2

/********LED DIODA********************************/
#define LED1  PORTD7

//********************USART**************************************
#define TXD PORTD1
#define RXD PORTD0
#define BAUDERATE	9600  //115200	//1200 
#define UBRR_VALUE ((F_CPU / (BAUDERATE * 8L)) -1)

//******************MOTOR DRIVER LEFT  (U1)*********************************
#define IN1_DL PORTD6		// IN1, OC0A
#define IN2_DL PORTD5		// IN2, OC0B
#define NSL_DL PORTD4		// NSL

//******************MOTOR DRIVER RIGHT  (U5)*********************************
#define IN1_BR PORTB3		// IN1, OC2A
#define IN2_DR PORTD3		// IN2, OC2B
#define NSL_DR PORTD2		// NSL

//*******************GYRO a ACC MPU ****************************************
#define MPU_ON PORTB0		//  L --> ON
#define MPU_SCL PORTC5
#define MPU_SDA PORTC4

//*******************OPTIKA ****************************************
#define OPT_ON PORTB0		//  L --> ON
#define GY_ON PORTB1		// vstup optickeho snimaca pravy
//#define OPT_IN_L ADC7		// vstup optickeho snimaca lavy
#define O_RIGHT 6			// ADC channel
#define O_LEFT	7			// ADC channel
#define FOTORES	2			// ADC channel
//*******************TLACIDLO ****************************************
#define TL PORTB2		//  L --> ON
#define FOTO PORTC2		//  L --> ON
//*******************TIMER1****************************************
enum delic_hodin{
	dSTOP,
	d1,
	d8,
	d64,
	d256,
	d1024,
	EXT_F,
	EXT_R
};

#endif /* BOARD_SOLAR_H_ */