#include<stdio.h>
#include<conio.h>
	void main(){
	int i,j,n,m;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=n;
		for(j=1;j<=i;j++)
		{
			printf("%d ",m);
			m--;
		}
		printf("\n");
	}
	getch();
	}