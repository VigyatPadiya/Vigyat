#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,c1,r1,c2,r2,x;
    printf("Enter row for First Matrix:");
    scanf("%d",&r1);
    printf("Enter column for First Matrix:");
    scanf("%d",&c1);
    printf("Enter row for Second Matrix:");
    scanf("%d",&r2);
    printf("Enter column for Second Matrix:");
    scanf("%d",&c2);
    if (r1==c2)
    {


    printf("---First Matrix---\n");
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
        printf("Enter %d of %d: ",j,i);
        scanf("%d",&a[i][j]);
        }
    }
    printf("---Second Matrix---\n");
    for (i=0;i<r2;i++)
    {
        for (j=0;j<c2;j++)
        {
        printf("Enter %d of %d: ",j,i);
        scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            c[i][j]=0;
            for (k=0;k<r2;k++)
            {
            c[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
    printf("\t\t\t--First Matrix--\t\t\t\n");
    for(i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("[%d]",a[i][j]);
        }
        printf("\n");
    }
    printf("\t\t\t--Second Matrix--\t\t\t\n");
    for(i=0;i<r2;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("[%d]",b[i][j]);
        }
        printf("\n");
    }
    printf("\t\t\t--Multiple--\t\t\t\n");
    for(i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("[%d]",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("Multiple of this matrix is not possible");
    }
}
