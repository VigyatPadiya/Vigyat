#include<stdio.h>
void main()
{
    int i=0;
    char a[60];
    printf("Enter Name:");
    scanf("%s",a);
   while (a[i]!='\0')
   {
       printf("\n%c",a[i]);
       i++;
   }
}
