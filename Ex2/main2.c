#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int cube(int n){
	return n*n*n;
}
int checkAlphabet(char ch){
	if(ch>=65 && ch<=122)
		return 1;
	else
		return 0;
}
int checkSign(int n){
	return n>=0?1:0;
}
int checkParity(int n){
	return n&1?1:0;
}
int lowerToUpper(char s){
	return s-32;
}
int operation(const char s,int a,int b){
	switch(s){
	case '+': return a+b;
	break;
	case '-': return a-b;
	break;
	case '*':return a*b;
	break;
	case '/':return a/b;
	break;
	default:return -1;
	}
}
int checkSecond(int a,int b){
	return a%b?0:1;
}
void printIntervalPrimeNumbers(unsigned a,unsigned b){

	for(unsigned i=a;i<=b;i++) {
		if(i==1 || i==0)
			continue;
		char ch='a';
		for(unsigned j=2;j*j<=i;j++){
			if(i%j==0) {
				ch='z';
				break;
			}
		}
		if(ch=='a')
			printf("%d ",i);
	}
}
void swapTwo(int *a,int *b){
	*a+=*b;
	*b=*a-*b;
	*a-=*b;
}
char powerOfTwo(float x){
	char res=ceil(log2(x))==floor(log2(x));
	return res;
}
int fab(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fab(n-1)+fab(n-2);
	printf("%d ",n);
}
void fabb(int x){
	int arr[10000];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<x;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	for(int i=0;i<10;i++)
		printf("%d ",arr[i]);
}
void countUnsigned8(unsigned x){
	unsigned one=1;
	char cnt=0;
	for(int i=0;i<8;i++){
		if((one<<i)&x)
			cnt++;
	}
	printf("%d",cnt);
}
void countUnsigned32(unsigned int x){
	unsigned int one=1;
	int cnt=0;
	for(int i=0;i<32;i++){
		if((one<<i)&x)
			cnt++;
	}
	printf("%d",cnt);
}
void xorGate(int a,int b){
	int mx=-1;
	for(int i=a;i<=b;i++){
		for(int j=a;j<=b;j++)
			if(mx<(i^j))
				mx=i^j;
	}
	printf("%d",mx);
}
int powLog3(int x){
	double res=(log10(x))/(log10(3));
	if(res==(int)res)
		return 1;
	return 0;
}
int mxCountCon(int x){
	unsigned int one=1;
	int mx=0,cnt=0;
	for(int i=0;i<16;i++){
		if((1<<i)&x)
		{
			cnt++;
			if(mx<cnt)
				mx=cnt;
		}
		else
			cnt=0;
	}
	return mx;
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	unsigned int a,b;
	char sign;
	//	scanf(" %c",&sign);
	scanf("%d",&a);
	//	int res=operation(sign,a,b);
	//	if(res!=-1)
	//		printf("Result = %d",res);
	//	else
	//		printf("Enter valid operation sign");
	//	printf("after conversion: %c",lowerToUpper(sign));
	//	if(checkSecond(a,b))
	//		printf("first is the multiple of second");
	//	else
	//		printf("first is not the multiple of second");
	//	printf("Enter the Value you want to check: ");
	//	printIntervalPrimeNumbers(a,b);
	//	if(powerOfTwo(a))
	//		printf("%d is Power of Two",a);
	//	else
	//		printf("%d is not Power of Two",a);
	printf("%d",mxCountCon(a));


}
