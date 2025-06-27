#include<stdio.h>

void main()
{
    int a[3],b[3],c[3],i;

    printf("Enter First Array:\n");
    for (i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Second Array:\n");
    for (i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The Sum of Array are:-\n");
    for (i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d \n",c[i]);
    }

}
