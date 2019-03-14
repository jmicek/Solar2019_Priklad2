/*
 * Priklad2.cpp
 *
 * Created: 13.3.2019 11:12:33
 * Author : Juraj
 */ 

#include "UART_Solar.h"

int main(void)
{
  /******************************POWER REDUCTION*************************/
  PRR = (1<<PRTWI)|(1<<PRTIM2)|(1<<PRTIM0)|(1<<PRTIM1)|(1<PRSPI)|(1<<PRUSART0)|(1<<PRADC);
  /**********************************************************************/ 
   	UART_Solar uart;
    uart.Uart_int();
   	uart.Uart_send("Vitam Vas v zelenom svete\n\r");
	uart.Uart_send("Stlac klavesu\n\r");
	
	for(uint8_t i=0; i<10; i++)uart.Uart_send_char(uart.Uart_rec_char());
	uart.Uart_send("\n\rKoniec");
   
    while (1) 
    {
    }
}

