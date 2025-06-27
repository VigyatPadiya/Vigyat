#include<stdio.h>
 void main()
 {
     int a[5],b[5],i,j;
     for (i=0;i<5;i++)
     {
     printf("Enter values: ");
     scanf("%d",&a[i]);
     }
     for(j=0;j<5;j++)
     {
         b[j] = a[j];
         printf("\nThe B %d is %d",j,b[j]);
     }
 }

