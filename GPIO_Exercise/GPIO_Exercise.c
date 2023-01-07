/*
 ============================================================================
 Name        : GPIO_Exercise.c
 Author      : Mohamed Tarek
 Description : Test the GPIO Driver
 Date        : 23/9/2021
 ============================================================================
 */

#include "gpio.h"
#include <util/delay.h> /* To use the delay functions */

int main(void)
{
	GPIO_setupPinDirection(PORTA_ID,PIN3_ID,PIN_INPUT); /* PA3 Input Pin */
	GPIO_setupPinDirection(PORTA_ID,PIN4_ID,PIN_INPUT); /* PA4 Input Pin */

	GPIO_setupPortDirection(PORTD_ID,PORT_OUTPUT); /* All PORTD pins are o/p pins */
	GPIO_writePort(PORTD_ID,0x00); /* Turn OFF all LEDS */

	while(1)
	{
		/* Read PA3 Pin Value */
		if(GPIO_readPin(PORTA_ID,PIN3_ID) == LOGIC_HIGH)
		{
			/* Toggle All Even LEDS*/
			GPIO_writePort(PORTD_ID,0x55);
			_delay_ms(500);
			GPIO_writePort(PORTD_ID,0x00);
			_delay_ms(500);
		}
		/* Read PA4 Pin Value */
		else if(GPIO_readPin(PORTA_ID,PIN4_ID) == LOGIC_HIGH)
		{
			/* Toggle All Odd LEDS*/
			GPIO_writePort(PORTD_ID,0xAA);
			_delay_ms(500);
			GPIO_writePort(PORTD_ID,0x00);
			_delay_ms(500);
		}
		else
		{
			/* Turn OFF all LEDS */
			GPIO_writePort(PORTD_ID,0x00);
		}

	}
}


