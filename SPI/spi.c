/*
 * spi.c
 *
 *  Created on: Oct 19, 2022
 *      Author: Ziad
 */

#include "spi.h"
#include "gpio.h"
#include "common_macros.h"
#include "avr/io.h"
void SPI_initMaster(void)
{
    GPIO_setupPinDirection(PORTB_ID, PIN4_ID, PIN_OUTPUT);
    GPIO_setupPinDirection(PORTB_ID, PIN5_ID, PIN_OUTPUT);
    GPIO_setupPinDirection(PORTB_ID, PIN6_ID, PIN_INPUT);
    GPIO_setupPinDirection(PORTB_ID, PIN7_ID, PIN_OUTPUT);

    SPCR = (1 << SPE) | (1 << MSTR);
    SPSR &= ~(1 << SPI2X);
}

void SPI_initSlave(void)
{

    GPIO_setupPinDirection(PORTB_ID, PIN4_ID, PIN_INPUT);
    GPIO_setupPinDirection(PORTB_ID, PIN5_ID, PIN_INPUT);
    GPIO_setupPinDirection(PORTB_ID, PIN6_ID, PIN_OUTPUT);
    GPIO_setupPinDirection(PORTB_ID, PIN7_ID, PIN_INPUT);

    SPCR = (1 << SPIE);
    SPSR &= ~(1 << SPI2X);
}

uint8 SPI_sendReceiveByte(uint8 data)
{
    SPDR = data;
    while (BIT_IS_CLEAR(SPSR, SPIF))
    {
    }
    return SPDR;
}

void SPI_sendString(const uint8 *str)
{
    uint8 dummyRecieveData = 0;
    uint8 i = 0;
    while (str[i] != '\0')
    {
        dummyRecieveData = SPI_sendReceiveByte(str[i]);
        i++;
    }
}

void SPI_receiveString(uint8 *str)
{
    uint8 i = 0;
    // dummy data
    uint8 SPI_DEFAULT_DATA_VALUE=0;

	str[i] = SPI_sendReceiveByte(SPI_DEFAULT_DATA_VALUE);

	while(str[i] != '#')
	{
		i++;
		str[i] = SPI_sendReceiveByte(SPI_DEFAULT_DATA_VALUE);
	}
	str[i] = '\0';
}
