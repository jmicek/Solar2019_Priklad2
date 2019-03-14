/* 
* UART_Solar.h
*
* Created: 13.3.2019 11:17:17
* Author: Juraj
*/


#ifndef __UART_SOLAR_H__
#define __UART_SOLAR_H__
#include "Board_Solar.h"

class UART_Solar
{
//variables
public:
protected:
private:

//functions
public:
	UART_Solar();
	~UART_Solar();
	 void Uart_int(void);


	 void Uart_send_char(uint8_t x);
	 uint8_t Uart_rec_char(void);

	 void Uart_send_bytes(char* data, const uint8_t len);
	 void Uart_send( const char* data);
	 void Uart_send( long num);
	 void Uart_send( unsigned long num);
	 void Uart_send( int num);
	 void Uart_send( unsigned int num);
	 void Uart_send_mV( int res_adc);
protected:
private:

}; //UART_Solar

#endif //__UART_SOLAR_H__
