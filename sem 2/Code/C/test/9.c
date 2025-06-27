#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\t__FRIST ARRAY__\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter 1st Array [%d] [%d]:",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
    }
    printf("\t__SECOND ARRAY__\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter 2nd Array [%d] [%d]:",i,j);
            scanf("%d",&b[i][j]);
            printf("\n");
        }
    }
    printf("\tSUM OF ARRAY\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        printf("[%d]",c[i][j]);
        }
        printf("\n");
           }
}
