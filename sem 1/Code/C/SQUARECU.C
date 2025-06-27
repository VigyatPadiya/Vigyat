#include<stdio.h>
#include<conio.h>
void main(){
	int num1=0,s,c;
	clrscr();
	printf("Enter a value:");
	scanf("%d",&num1);
	s = num1*num1;
	c = num1*num1*num1;
	printf("Square:%d",s);
	printf("\nCube:%d",c);
	getch();
	}