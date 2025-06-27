#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int a[50];
int max=10;
int top=-1;


void main()

{
        int ch;
        clrscr();
    while(1)
    {
        printf("\n");

        printf("1.Push\n");
        printf("2.pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d",&ch);
        switch("%d",&ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(1);
                    break;
            default: printf("Enter vaild option");
        }
    }
        getch();
}

void push()
{
        int val;
        if(top==max-1)
        {
            printf("Stack is overflow");
        }
        else
        {
            printf("Enter value");
            scanf("%d",&val);
            top++;

            a[top]=val;

        }
}

void pop()
{
    int val;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        value=a[top];
        printf("value deleted=%d",val);
        top--;
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
