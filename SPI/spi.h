/*
 * spi.h
 *
 *  Created on: Oct 19, 2022
 *      Author: Ziad
 */

#ifndef SPI_H_
#define SPI_H_
#include "std_types.h"

void SPI_initMaster(void);

void SPI_initSlave(void);

uint8 SPI_sendReceiveByte(uint8);


void SPI_sendString();
void SPI_receiveString();


#endif /* SPI_H_ */
