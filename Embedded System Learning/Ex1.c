#include<stdio.h>

void R1(){
	int x, y;
	scanf("%d %d", &x, &y);
	int res =((x+y)*3)-10;
	printf("%d\n",res);
}

void R2(){

	char s[10];
	int g;
	printf("Enter Your Name: ");
	fflush(stdout);
	scanf("%s",&s);
	printf("Enter Your Age: ");
	fflush(stdout);
	scanf("%d",&g);
	printf("Your Name is: %s\n",s);
	printf("Your Age is: %d ",g);
}
void R3(){
	int c;
	printf("Enter Temperature in Celsius: ");
	fflush(stdout);
	scanf("%d",&c);
	c=c*(9/5)+32;
	printf("Temperature in Fahrenheit: %d ",c);
}
void R4(){
	float r;
	printf("Enter radius: ");
	fflush(stdout);
	scanf("%f",&r);
	double area=r*r*3.14,circ=2*3.14*r;
	printf("Area of Circle: %f\n",area);
	printf("Circumference of Circle: %f",circ);

}
void R5(){

}
void R6(){

}
int main(){
	R4();

	//	return 0;
}

