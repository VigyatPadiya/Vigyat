#include<stdio.h>
#include<conio.h>
	void main(){
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
	}