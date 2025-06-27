#include<stdio.h>
#include<conio.h>
void main(){
	int age;
	clrscr();
	printf("Enter age:");
	scanf("%d",&age);
	if(age>=18){
	printf("The person is eligible for War");}
	else {
	printf("The person is not eligible for War");
	}
	getch();
	}