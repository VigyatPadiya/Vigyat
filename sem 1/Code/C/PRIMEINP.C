#include<stdio.h>
#include<conio.h>
void main(){
	int num,i=2,j,flag;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&num);
	while(i<=num){
		flag=0;
		j=2;
		while(j<=i/2){
		if(i%j==0){
			flag=1;}
			break;
		}
		j++;

	if(flag==0){
		printf(" %d ",i);
	}
	i++;
	 }
	getch();
	}
