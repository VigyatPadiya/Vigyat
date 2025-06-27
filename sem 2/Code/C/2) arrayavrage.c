#include<stdio.h>
void main(){
int a[5],i,total=0;
float avg;
for(i=0;i<5;i++){
printf("Enter a number:");
scanf("%d",&a[i]);
total=total+a[i];
}
    printf("\nThe total is %d",total);
avg=total/5;
    printf("\nThe avrage is %f",avg);
}
