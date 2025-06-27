#include<stdio.h>
int main(){
	int num1,temp=0,sum=0;
	printf("Enter a number:");
	scanf("%d",&num1);
	while(num1!=0)
	{
	temp=num1%10;
	sum=sum+temp;
	num1=num1/10;
	}
	printf("Sum of Digit is:%d",sum);
	}

