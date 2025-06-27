#include<stdio.h>
#include<conio.h>
void main(){
	float length=0,height=0,area=0;

	clrscr();
	printf("Enter length:");
	scanf("%f",&length);
	printf("Enter height:");
	scanf("%f",&height);
	area = length*height;
	printf("\n Area of Rectangle: %f",area);
	getch();
	}