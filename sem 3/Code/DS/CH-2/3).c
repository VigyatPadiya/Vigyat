#include<stdio.h>

void push(char);
void pop();
char stack[50];
int top=-1;
void main()
{
    int n,i;
    char name[10];
    printf("Enter name: ");
    scanf("%s",name);

    n=strlen(name);

    for (i=0;i<n;i++)
    {
        push(name[i]);
    }
    for (i=0;i<n;i++)
    {
        pop();
    }
}
void push (char c)
{
    top++;
    stack[top]=c;
}
void pop()
{
    char c;
    c=stack[top];
    printf("%c",c);
    top--;
}
