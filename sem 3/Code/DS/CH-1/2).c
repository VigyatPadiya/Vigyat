#include<stdio.h>

void main()
{
    int a[100],i,sum=0,l;
    float avg;
    printf("Enter The Length:");
    scanf("%d",&l);
    printf("Enter %d values:\n",l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg = sum/l;
    printf("The Sum of all %d is %d\n",l,sum);
    printf("The Average is %f",avg);
}
