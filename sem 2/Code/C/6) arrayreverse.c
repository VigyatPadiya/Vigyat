#include<stdio.h>
void main(){
int a[5],i;
for(i=0;i<5;i++){
printf("Enter a number:");
scanf("%d",&a[i]);
}
for (i=0;i<5;i++)
{
    printf("The Array is %d\n",a[i]);
}
printf("\n");
for(i=4;i>=0;i--){
printf("The Reverse Array is %d \n",a[i]);}
}

