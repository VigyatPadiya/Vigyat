#include<stdio.h>
void main(){
int a[5],i;
for(i=0;i<5;i++){
printf("Enter a number:");
scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
printf("The Array of %d is %d \n",i,a[i]);}
}
