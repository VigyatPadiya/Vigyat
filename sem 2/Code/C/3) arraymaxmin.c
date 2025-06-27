#include<stdio.h>
void main(){
int a[5],i,max,min;
    for (i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];

    for(i=0; i<5;i++)
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
        printf("Maximum number is %d\n",max);
        printf("Minimum number is %d",min);
    }


