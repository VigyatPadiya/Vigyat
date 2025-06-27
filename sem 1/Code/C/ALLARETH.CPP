#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter 1 number:");
	scanf("%d",&num1);
	printf("Enter 2 number:");
	scanf("%d",&num2);
	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;
	printf("Number 1:%d",num1);
	printf("\nNumber 2:%d",num2);
	return(0);
	}