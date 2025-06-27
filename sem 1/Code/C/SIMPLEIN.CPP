#include<stdio.h>
#include<conio.h>
void main(){
	float p,r,n,si=0;
	clrscr();
	printf("Enter a price number: ");
	scanf("%f",&p);
	printf("Enter a rate: ");
	scanf("%f",&r);
	printf("Enter a year: ");
	scanf("%f",&n);
	si = (p*r*n)/100;

	printf("%f",si);
	getch();
	}

