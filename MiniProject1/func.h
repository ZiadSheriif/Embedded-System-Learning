
// structure of vehicle controller
typedef struct Vehicle {
	char engineState;
	char Ac;
	char trafficLightColor;
	int roomTemp;
	int engineTemp;
	int speed;
	short engineTempController;
}vehicle;


void setTraffic(vehicle *vec){
	printf("Enter the required color: ");

	char in;
	scanf(" %c",&in);
	vec->trafficLightColor=in;

	if(vec->trafficLightColor=='G' || vec->trafficLightColor=='g')
		vec->speed=100;
	else if(vec->trafficLightColor=='O' || vec->trafficLightColor=='o')
		vec->speed=30;
	else
		vec->speed=0;
}


void setEngineTemperature(vehicle *vec){
	int et;
	printf("Enter the required Engine Temperature: ");
	scanf("%d",&et);
	vec->engineTemp=et;
	if(vec->engineTemp>150 ||vec->engineTemp<100 ){
		vec->engineTempController='1';
		vec->engineTemp=125;
	}
	else
		vec->engineTempController='0';
}
void validateSpeed(vehicle *vec){
	if(vec->speed==30)
	{
		if(vec->engineState=='0'){
			vec->engineState='1';
			vec->roomTemp*=((5/4)+1);
		}
#if (WITH_ENGINE_TEMP_CONTROLLER)

		if(vec->engineTempController=='0')
		{
			vec->engineTempController=1;
			vec->engineTempController*=((5/4)+1);
		}
#endif
	}
}


void printState(char state){
	if(state==1)
		printf("Vehicle engine is Turned on\n");
	else if(state==2)
		printf("Vehicle engine is Turned off\n");
	else
		printf("Quit the system\n");
}

void Menu(vehicle *vec){
	while(1)
	{
		char in;
		printf("a.Turn off the engine\n");
		printf("b.Set the traffic light color\n");
		printf("c.Set the room temperature\n");
		printf("d.Set the engine temperature\n");

		scanf(" %c",&in);
		switch(in){
		case 'a':
			return ;
		case 'b':
			setTraffic(vec);
			break;
		case 'c':
			setRoomTemperature(vec);
			break;
		case 'd':
#if (WITH_ENGINE_TEMP_CONTROLLER)
			setEngineTemperature(vec);
#endif
			break;
		}
		displayTheCurrentVehicleState(vec);
	}
}
void setRoomTemperature(vehicle *vec){
	int rt;
	printf("Enter the required room temperature ");
	scanf("%d",&rt);
	vec->roomTemp=rt;

	if(vec->roomTemp>30 || vec->roomTemp<10)
	{
		vec->Ac='1';
		vec->roomTemp=20;
	}
	else
		vec->Ac='0';

}
void displayTheCurrentVehicleState(vehicle *vec){
	printf("\n\n####### Current Vehicle State #######\n\n");

	if(vec->engineState=='1') //Engine State
		printf("1.Engine State is ON\n");
	else
		printf("1.Engine State is OFF\n");

	if(vec->Ac=='1') // AC
	{
		printf("2.AC is ON\n");
		validateSpeed(vec);
	}

	else
		printf("2.AC is OFF\n");

	printf("3.Speed of Vehicle: %d Km/Hr\n",vec->speed);

	printf("4.Room Temperature: %d C\n",vec->roomTemp);
#if (WITH_ENGINE_TEMP_CONTROLLER)

	if(vec->engineTempController=='1') // Engine Temperature Controller
		printf("5.Engine Temperature Controller State is ON\n");

	else
		printf("5.Engine Temperature Controller State is OFF\n");
#endif
	printf("6.Engine Temperature: is %d C\n\n",vec->engineTemp);

}
//#endif /* HELPERS_H_ */
