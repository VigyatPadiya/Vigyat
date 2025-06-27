#include<stdio.h>
void main()
{
    int a[100],b[100],i,l;
    printf("Enter Length:");
    scanf("%d",&l);
    for (i=0;i<l;i++)
    {
        printf("Enter a Array:");
        scanf("%d",&a[i]);
    }
    for (i=0;i<l;i++)
    {
        b[i]=a[i];
    }
        printf("The Second Array Is");
    for (i=0;i<l;i++)
    {
        printf("\n%d",b[i]);
    }

}
