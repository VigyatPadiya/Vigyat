#include<stdio.h>
#include<conio.h>
void main(){
	int num1,num2,max;
	clrscr();
	printf("Enter 1 number:");
	scanf("%d",&num1);
	printf("Enter 2 number:");
	scanf("%d",&num2);
	if(num1>num2){
	printf("Number 1 is maximum:%d",num1);}
	else{
	printf("Number 2 is maximum:%d",num2);}
	getch();}