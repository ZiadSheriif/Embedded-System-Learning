#include <stdio.h>
#include <stdlib.h>
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
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a,b;
	char sign;
	//	scanf(" %c",&sign);
	scanf("%d %d",&a,&b);
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


}
