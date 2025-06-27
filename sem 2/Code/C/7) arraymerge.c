#include<stdio.h>
void main()
{
    int a[50],b[50],c[100],i,j,k;
        printf("Enter first array size:");
        scanf("%d",&j);
    for (i=0;i<j;i++)
    {
        printf("Input 1st Array:");
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
        printf("Enter second array size:");
        scanf("%d",&k);
    for (i=0;i<k;i++)
    {
        printf("Enter 2nd array:");
        scanf("%d",&b[i]);
        c[i+j]=b[i];
    }
        printf("Merged array is:\n");
    for (i=0;i<j+k;i++)
    {
        printf("%d\n",c[i]);
    }
}









