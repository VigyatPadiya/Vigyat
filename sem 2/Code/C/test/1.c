#include<stdio.h>
void main()
{
    int arr[10],i;
    for(i=0;i<9;i++)
    {
        printf("Enter a Number:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++)
    {
        printf("%d\n",arr[i]);
    }
}
