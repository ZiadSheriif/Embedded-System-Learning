/*
 * ADC.h
 *
 *  Created on: Oct 1, 2022
 *      Author: Ziad
 */

#ifndef ADC_H_
#define ADC_H_

#include "std_types.h"
#include "common_macros.h"


void ADC_init(void);
uint16 ADC_readChannel(uint8);

#endif /* ADC_H_ */
