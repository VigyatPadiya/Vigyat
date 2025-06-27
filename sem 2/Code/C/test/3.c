#include<stdio.h>
void main()
{
    int a[500],l,i,max,min;
    printf("Enter Length:");
    scanf("%d",&l);
    for (i=0;i<l;i++)
    {
    printf("Enter Numbers:");
    scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0; i<l;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("The Maximum is %d\n",max);
    printf("The Minimum is %d",min);
}
