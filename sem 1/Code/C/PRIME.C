#include<stdio.h>
int main(){
	int num,i=2,flag=0;

	printf("Enter a number:");
	scanf("%d",&num);
	while (i<num/2)
	{
	if(num%i==0){
	flag=1;}
	i++;
	}
	if (flag==1)
	{printf("Number is Prime");}
	else
	{printf("Number is not Prime");}
	}
