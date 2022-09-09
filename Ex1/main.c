#include<stdio.h>
#include<limits.h>
void R1() {
	int x, y;
	scanf("%d %d", &x, &y);
	int res = ((x + y) * 3) - 10;
	printf("%d\n", res);
}

void R2() {

	char s[10];
	int g;
	printf("Enter Your Name: ");
	fflush(stdout);
	scanf("%s", &s);
	printf("Enter Your Age: ");
	fflush(stdout);
	scanf("%d", &g);
	printf("Your Name is: %s\n", s);
	printf("Your Age is: %d ", g);
}
void R3() {
	int c;
	printf("Enter Temperature in Celsius: ");
	//	fflush(stdout);
	scanf("%d", &c);
	c = c * (9 / 5) + 32;
	printf("Temperature in Fahrenheit: %d ", c);
}
void R4() {
	float r;
	printf("Enter radius: ");
	//	fflush(stdout);
	scanf("%f", &r);
	double area = r * r * 3.14, circ = 2 * 3.14 * r;
	printf("Area of Circle: %f\n", area);
	printf("Circumference of Circle: %f", circ);

}
void R5() {
	char ch;
	printf("Enter the Character: ");
	scanf(" %c", &ch);
	printf("The Ascci of the Char is: %d", ch);

}
void R6() {
	int x, y;
	printf("Enter the two Integers: ");
	scanf("%d %d", &x, &y);
	if (x == y)
		printf("The two Integers are equal");
	else {
		if (x > y)
			printf("The Maximum Number is %d", x);
		else
			printf("The Maximum Number is %d", y);
	}

}
void R7() {
	int x, y, z;
	printf("Enter Three Numbers: ");
	scanf("%d %d %d", &x, &y, &z);
	int mn = INT_MIN;
	if (x < z && x < y)
		mn = x;
	else if (y < x && y < z)
		mn = y;
	else
		mn = z;
	printf(" The Smallest Number: %d", mn);
}
void R8() {
	int x;
	printf("Enter a number \n");
	scanf("%d", &x);
	if (x < 0)
		printf("please enter a positive number \n");
	else
		for (int i = 0; i < x / 2; i++) {
			if (i * i == x) {
				printf("the number is %d and its square root is %d", x, i);
				return;
			}

		}
	printf("The number is %d and not perfect square", x);
}
void R9() {
	printf("Please write your Percentage: ");
	short x;
	scanf("%d", &x);
	if (x >= 85)
		printf("Excellent");
	else if (x < 85 && x >= 75)
		printf("Very Good");
	else if (x < 75 && x >= 65)
		printf("Good");
	else
		printf("Pass");
}
void R11(){
	printf("Enter Number you want to sum: ");
	int n;
	scanf("%d",&n);
	printf("Sum of number to N = %d",n*(n+1)/2);
}
void R12() {
	printf("Enter your factorial number:");
	int r;
	scanf("%d", &r);
	int fact=1;
	for(int i=r;i>=2;i--){
		fact*=i;
	}
	printf("Factorial Number: %d",fact);
}
void R13() {
	unsigned int x;
	printf("Enter the Value you want to check: ");
	scanf("%d",&x);
	char ch='a';
	for(int i=2;i*i<=x;i++) {
		if(x%i==0) {
			ch='z';
			break;
		}
	}
	if(x<=1)
		ch='z';
	if(ch=='a')
	{
		printf("%d is  Prime number",x);
		return;
	}
	printf("%d is not  Prime number",x);
}
void R14() {
	for (int i = 0; i < 26; i++) {
		printf("%c ", i + 65);
	}
}
void R16() {
	int x;
	scanf("%d", &x);
	int temp = 0;
	while (x >= 1) {
		temp *= 10; //320
		temp += (x % 10); //321
		x /= 10; //1
	}
	printf("Number After Reversing: %d", temp);
}
void R18() {
	short x;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
void R19() {
	short x;
	scanf("%d", &x);
	for (int i = x; i >= 0; i--) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
void R20() {
	printf("Enter the # of rows: ");
	int x;
	scanf("%d", &x);
	int nRows = 1, start = (2 * x - 1) / 2;
	;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < 2 * x - 1; j++) {
			if (j == start) {
				int t = nRows;
				while (t > 0) {
					printf("*");
					t--;
				}
				j += nRows - 1;
			} else
				printf(" ");
		}
		printf("\n");
		nRows += 2;
		start--;
	}
} //2*x-1
void R21() {
	printf("Enter Height you want to display cross-shape: ");
	int h;
	scanf("%d",&h);
	int head=1,tail=h;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=h;j++){
			if(head==j)
				printf("*");
			else if(tail==j)
				printf("*");
			else
				printf(" ");
		}
		head++;
		tail--;
		printf("\n");
	}
}
int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	R21();

	//	return 0;
}

