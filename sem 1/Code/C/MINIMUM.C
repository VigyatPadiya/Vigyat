#include<stdio.h>
#include<conio.h>
void main(){
	int num1,num2,min;
	clrscr();
	printf("Enter 1 number:");
	scanf("%d",&num1);
	printf("Enter 2 number:");
	scanf("%d",&num2);
	if(num1<num2){
	printf("Number 1 is minimum:%d",num1);}
	else{
	printf("Number 2 is minimum:%d",num2);}
	getch();
	}