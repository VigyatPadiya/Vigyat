#include<stdio.h>
void main()
{
    int a[5],i,avg,sum;
    printf("Enter Number:");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
        sum=a[0]+a[1]+a[2]+a[3]+a[4];
        avg=sum/5;
    printf("The Average is:%d",avg);
}
