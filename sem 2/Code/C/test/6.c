#include<stdio.h>
void main()
{
    int a[100],i,l;
    printf("Enter Length:");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("Enter a Number:");
        scanf("%d",&a[i]);
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}
