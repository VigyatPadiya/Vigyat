#include<stdio.h>
#include<conio.h>
void main(){
	char a;
	clrscr();
	printf("Enter 1 alphabet:");
	scanf("%c",&a);
	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
	{printf("The alphabet is an vowel:%c",a);}
	else
	{printf("The alphabet is not a vowel:%c",a);}
	getch();
	}