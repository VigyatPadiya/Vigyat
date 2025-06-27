#include<stdio.h>
#include<conio.h>
void main(){
	int num1,num2;
	clrscr();
	printf("Enter 1 number:");
	scanf("%d",&num1);
	printf("Enter 2 number:");
	scanf("%d",&num2);
	if (num1==num2){
	printf("The number is Equal");
	}
	else {printf("The number is not equal");}
	getch();
	}