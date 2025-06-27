#include<stdio.h>

void main()
{
    int a[10],i,key,ans=0;
    printf("Enter 10 values:-\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The values are.....\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter Value that want to search:-");
    scanf("%d",&key);
    for (i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            ans=1;
            break;
        }
    }
    if(ans==1)
    {
        printf("The value found at %d position",i);
    }
    else
    {
        printf("The value not found");
    }
}
