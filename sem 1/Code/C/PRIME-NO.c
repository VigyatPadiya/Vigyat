// write a programe to print prime number upto user series//
#include<stdio.h>
#include<conio.h>
void main(){

		      int num,i=2,j,flag=0;
		      clrscr();
		      printf("enter a number");
		      scanf("%d",&num);
		      while(i<num)
		      {   flag=0;
		      j=0;
		      while (j<=i/2){
		      if(i%j==0){
		      flag=1;}
		      brake;
		      }
		      j++;
		      }
		      if(flage==0){
		      printf("%d",i);
		      }
		      i++;
		      getch();
		      }