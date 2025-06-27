#include<stdio.h>
#include<conio.h>
void main(){
	  int num,i=1,sum=0;
	  clrscr();
	  while (i<=10)
	 { printf("Enter a number:");
	  scanf("%d",&num);
	  sum = sum + num;
	   i++;
	  }
	  printf("Total:%d",sum);
	  getch();
	  }