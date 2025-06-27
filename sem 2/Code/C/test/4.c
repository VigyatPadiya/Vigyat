#include<stdio.h>
void main()
{
    int a[100],l,i,pos=0,neg=0,odd=0,even=0;
    printf("Enter a Length:");
    scanf("%d",&l);
    for (i=0;i<l;i++)
    {
        printf("Enter Number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        if(a[i]<0)
        {
            neg++;
        }
        if(a[i]%2==0)
        {
            even++;
        }
        if(a[i]%2!=0)
        {
            odd++;
        }
    }
    printf("Positive:%d \n Negative:%d \n Even:%d \n Odd:%d",pos,neg,even,odd);
}
