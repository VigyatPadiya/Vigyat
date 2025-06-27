#include<stdio.h>
void main(){
    int a[5],i,pos=0,neg=0,odd=0,ev=0,zro=0;
    for(i=0;i<5;i++){
    printf("Enter a number:");
    scanf("%d",&a[i]);
}
    for(i=0;i<5;i++){
    if (a[i]>0){
        pos++;
    }
    if (a[i]<0){
        neg++;
    }
    if (a[i]%2==0){
        ev++;
    }
    if (a[i]%2!=0){
        odd++;
    }
    if (a[i]==0)
    {
        zro++;
    }
                    }
    printf("\nPositive number:%d",pos);
    printf("\nNegative number:%d",neg);
    printf("\nOdd Number:%d",odd);
    printf("\nEven number:%d",ev);
    printf("\nZero number:%d",zro);

}
