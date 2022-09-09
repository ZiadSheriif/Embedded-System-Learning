
#include <stdio.h>
#include <stdlib.h>
#include"func.h"
#define WITH_ENGINE_TEMP_CONTROLLER 0

void chocies(vehicle *vec){
	while(1)
	{
		char input;
		printf("a.If you want to Turn on the vehicle engine\n");
		printf("b.If you want to Turn off the vehicle engine\n");
		printf("c.If you want to exit from the System\n");
		scanf(" %c",&input);
		switch(input){
		case 'a': //Turn on the vehicle engine
			printState(1);
			Menu(vec);
			break;
		case 'b': //Turn off the vehicle engine
			printState(2);
			break;
		case 'c': //Quit the system
			printState(0);
			exit(0);
		}
	}
}
// enum for boolean
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	vehicle vec={
			'0',
			'0',
			20,
			40,
			100,
			'R',
			25
	};
	chocies(&vec);
	return 0;
}
