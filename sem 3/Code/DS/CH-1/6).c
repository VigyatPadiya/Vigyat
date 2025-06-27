#include<stdio.h>
void main()
{
    int a[100],i,l,p;
    printf("Enter Array size:\n");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("Enter position to enter data:\n");
        scanf("%d",&p);
        printf("Enter a Array at %d\n",p);
        scanf("%d",&a[p]);
    }
    printf("The Array is:-\n");
    for (i=0;i<l;i++)
    {
        printf("%d\n",a[i]);
    }
}
