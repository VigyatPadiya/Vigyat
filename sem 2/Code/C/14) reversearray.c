#include<stdio.h>
void main()
{
    char a[40];
    int i,l,n;
    printf("Enter Words:");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i+=1;
        i++;
    }
    l=i;
   for (n=l;n>=0;n--)
   {
       printf("%c",a[n]);
   }
}
