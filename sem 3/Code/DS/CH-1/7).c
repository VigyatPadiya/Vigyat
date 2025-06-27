#include<stdio.h>
void main()
{
    int a[1000],i,l,d;
    printf("Enter Size :");
    scanf("%d",&l);
    printf("Enter Array:\n");
    for (i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Position to Delete:");
    scanf("%d",&d);

  if (a[d])
   {
       for(i=d;i<l;i++)
       {
           a[i-1]=a[i];
       }
   }
   l=l-1;

    for (i=0;i<l;i++)
    {
        printf("%d \n",a[i]);
    }
}
