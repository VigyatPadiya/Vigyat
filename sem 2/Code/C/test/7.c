#include<stdio.h>
void main()
{
    int a[50],b[50],c[100],i,j,k;
    printf("Enter 1st Array Length:");
    scanf("%d",&j);
    for (i=0;i<j;i++)
    {
        printf("Enter 1st Array:");
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter 2nd Array Length:");
    scanf("%d",&k);
    for (i=0;i<k;i++)
    {
        printf("Enter 2nd Array:");
        scanf("%d",&b[i]);
        c[i+j]=b[i];
    }
    printf("The Merge Array is:");
    for(i=0;i<j+k;i++)
    {
        printf("\n%d",c[i]);
    }
}
