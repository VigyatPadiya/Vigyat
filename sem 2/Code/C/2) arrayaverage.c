#include<stdio.h>
void main(){
    int a[5],total,i,avg;
    for (i=0;i<5;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
    total=a[0]+a[1]+a[2]+a[3]+a[4];
    avg=total/5;
    printf("The average is: %d",avg);
}
