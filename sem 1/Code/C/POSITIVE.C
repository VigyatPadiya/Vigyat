#include<stdio.h>
#include<conio.h>
void main(){
	int num1;
	clrscr();
	printf("Enter 1 number:");
	scanf("%d",&num1);
	if (num1==0)
	{printf("The number is Zero");}
	else if (num1>0)
	{printf("The number is Positive");}
	else {printf("The number is Negative");}
	getch();
	}