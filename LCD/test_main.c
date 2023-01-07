/*
 * test_main.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Ziad
 */


#include"LCD.h"

int main(void){
	LCD_init();
//	LCD_displayCharacter('A');
	LCD_displayString("Ziad Sherif");
	while(1){}
}


// Resolution= Range/Precision

// Vref-0v/2^n==> number of bits
// Vref>=Vmax(sensor)
