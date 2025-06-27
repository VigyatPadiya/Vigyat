/* write a program to find power of a given number using stack. */
#include<stdio.h>

void push(int);
void pop();
int top=-1;
int stack[50];
int n;
int p;
void push (int n)
{
    int i;
    scanf("%d",&p);
    for (i=0;i<p;i++)
    {
        top++;
        stack[top]=n;
    }
}
void pop()
{
    int m=1,i;
    for (i=0;i<p;i++)
    {
        m*=stack[top];
        top--;
    }
    printf("%d",m);
}



void main()
{
	printf("Enter a Number:");
	scanf("%d",&n);
	printf("Enter Power:");
    push(n);
    pop();
}
