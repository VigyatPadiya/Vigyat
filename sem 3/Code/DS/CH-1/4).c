/*create array A,B and C of size 3 and merge A and B in C*/

#include <stdio.h>

void main()
{
    int a[3],b[3],c[6],i;
    printf("Enter array 'A':-\n");
    for (i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array 'B':-\n");
    for (i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for (i=0;i<3;i++)
    {
        c[i]=a[i];
    }
    for (i=0;i<3;i++)
    {
        c[i+3]=b[i];
    }
        printf("The Merged Array is:-\n");
    for (i=0;i<6;i++)
    {
        printf("%d \n",c[i]);
    }

}
