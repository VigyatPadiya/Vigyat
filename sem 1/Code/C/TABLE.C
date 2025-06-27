#include<stdio.h>
void main()
{
	int t,i=1,a=0;
	printf("Enter a number:");
	scanf("%d",&t);
	while (i>=10)
	{a=t*i;
	printf("%d*%d=%d",t,i,a);
	i++;
	}
}
