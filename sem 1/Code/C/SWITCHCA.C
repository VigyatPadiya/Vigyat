//*write a program to perform arithmatic operators using switch case*//
#include<stdio.h>
#include<conio.h>
void main(){
	int  n,num1,num2,result;
	clrscr();
	do{
	printf("/n 1. Addition");
	printf("/n 2. Subtract");
	printf("/n 3. Multiple");
	printf("/n 4. Division");
	printf("/n 5. Exit");
	}
	printf("Enter your choise:");
		scanf("%d",&n);
	while (n!=5)
	printf("Enter a number:");
		scanf("%d",&num1);
	printf("Enter a number:");
		scanf("%d",&num2);
	switch (n)
	{
		case '1':
		result = num1 + num2;
		break;

		case '2':
		result = num1 - num2;
		break;

		case '3':
		result = num1 * num2;
		break;

		case '4':
		result = num1 / num2;
		break;

		case '5':
		break;

		default :
		printf("Error");
	}
	printf("Result %d",result);
	getch();
	}