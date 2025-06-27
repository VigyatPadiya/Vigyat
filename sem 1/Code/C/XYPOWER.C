#include<stdio.h>
#include<conio.h>
void main(){
	int x,y,z=1;
	printf("Enter 1 number:");
	scanf("%d",&x);
	printf("Give a power:");
	scanf("%d",&y);
	while (y!=0)
	{
	  z=z*x;
	y--;
	}
	printf("%d",z);
	getch();
	}