#include<stdlib.h>
#include<stdio.h>
int sumOfArray(int *arr,int n){
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	return sum;
}
int repeatedString(const char*mess,int n){
	int arr[26]={0};
	for(int i=0;i<n;i++){
		arr[mess[i]-'a']++;
		if(arr[mess[i]-'a']>1)
			return 0;
	}
	return 1;
}
void bubbleSort(int *arr,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}
	}
}
void  selectionSort(int *arr,int n){
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void convertLowerToUpper(char  *str,int n){
	for(int i=0;i<n;i++)
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]+=32;
	}
}
int frequencyOfCharachter(const char *str,int n,char ch){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(str[i]==ch)
			cnt++;
	}
	return cnt;
}
int findLengthOfString(const char *str){
	int i=0,cnt=0;
	while(str[i]!='\0'){
		cnt++;
		i++;
	}

	return cnt;
}
void removeAllUnAlphabetic(char *str,int n){
	for(int i=0;i<n;i++)
	{
		if((str[i]>='A' && str[i]<='Z')|| str[i]>='a' && str[i]<='z' )
			continue;
		str[i]=NULL;
	}
}
void  reverseString(char *str,int n){
	for(int i=n-1,j=0;i>=n/2;j++,i--){
		char temp=str[j]; //z
		str[j]=str[i]; // d
		str[i]=temp; //z
	}
}
char* concan(char *str1,char *str2,int n1,int n2){
	char *res=malloc(10*sizeof(char));
	for(int i=0;i<n1;i++)
		res[i]=str1[i];
	res[n1]=' ';
	for(int i=0,j=n1+1;i<n2;j++,i++)
		res[j]=str2[i];
//	printf("%s",res);
	return res;

}
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int arr[]={1,3,4,2,9,4,0,-2};
	char test[]="ziad",temp[]="sherif";
//	reverseString(test,5);
	//	convertLowerToUpper(test,8);
	//	printf("%d",repeatedString(test,6));
	//	printf("%d",frequencyOfCharachter(test,8,'a'));
	//	removeAllUnAlphabetic(test,8);
//	printf("%s",test);
	char *res=concan(test,temp,4,6);
	printf("%s",res);
	//	printf("%d",findLengthOfString(test));
	return 0;

}
