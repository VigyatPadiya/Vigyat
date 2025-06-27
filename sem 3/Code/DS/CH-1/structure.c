#include<stdio.h>
    struct student
    {
        char name[10];
        int age,roll;
    };
void main()
{
    struct student s1;
    printf("Enter Name:");
    scanf("%s",s1.name);
    printf("Enter Age:");
    scanf("%d",&s1.age);
    printf("Enter a Roll.no:");
    scanf("%d",&s1.roll);

    printf("Hello %s\n",s1.name);
    printf("Your Age is %d\n",s1.age);
    printf("Your Roll.no is %d\n",s1.roll);
}
