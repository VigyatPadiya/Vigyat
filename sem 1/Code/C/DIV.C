#include<stdio.h>
#include<conio.h>
void main(){
	int num1;
	clrscr();
	printf("Enter 1 number:");
	scanf("%d",&num1);
	if (num1%11)
	{printf("The number is divisible by 11");}
	else if (num1%5)
	{printf("The number is divisible by 5");}
	else {printf("The number is not divisible by 5 or 11");}
	getch();
	}