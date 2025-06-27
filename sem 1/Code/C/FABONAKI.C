#include<stdio.h>
#include<conio.h>
void main(){
	int num,i;
	printf("Enter a number:");
	scanf("%d",&num);
	while (i<=num)
	{printf("%d",i);
	i=i+i;
	}
	getch();
	}