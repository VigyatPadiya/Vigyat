#include<stdio.h>

void main()
{
    int a[1000],i,j,l,dec;
    printf("Enter Size:");
    scanf("%d",&l);
    printf("Enter a Array:\n");
    for (i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]<a[j])
            {
            dec=a[i];
            a[i]=a[j];
            a[j]=dec;
        }
    }

}

        for (i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
}
