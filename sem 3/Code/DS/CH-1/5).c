/*create a array of size 10 and find maximum*/

#include<stdio.h>

void main()
{
    int a[10],i,max=0;
    printf("Enter a Array:");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum number is: %d",max);
}
