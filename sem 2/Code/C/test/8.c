#include<stdio.h>
void main()
{
    int a[3][3];
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter Array [%d] [%d]:",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
    }
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d]",a[i][j]);
        }
        printf("\n");
    }
}
