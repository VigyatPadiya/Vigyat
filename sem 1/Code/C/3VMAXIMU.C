#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter 1 value:");
	scanf("%d",&a);
	printf("Enter 2 value:");
	scanf("%d",&b);
	printf("Enter 3 value:");
	scanf("%d",&c);
	if (a>b && a>c)
	{printf("The number is greater than 2,3:%d",a);}
	else if (b>a && b>c)
	{printf("The number is greater than 1,3:%d",b);}
	else {printf("The number is greater than 1,2:%d",c);}
	return(0);
	}
