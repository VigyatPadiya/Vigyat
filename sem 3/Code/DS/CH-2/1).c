#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int peek();
void update();
int a[50];
int max=10;
int top=-1;


void main()

{
        int ch,x;
    while(1)
    {
        printf("\n");
        printf("---Menu---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek");
        printf("5. Update");
        printf("6. Exit\n");
        scanf("%d",&ch);
        switch("%d",ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: x=peek();
                    printf("Top most element is %d",x);
                    break;
            case 5: update();
                    break;
            case  6: exit(1);
                    break;
            default: printf("Enter vaild option");
        }
    }
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
            printf("Enter value:");
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
        val=a[top];
        printf("value deleted=%d",val);
        top--;
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\n%d ",a[i]);
    }
}

int peek()
{
    return a[top];
}

void update()
{
    int i,new_val;
    printf("Enter position want to update");
    scanf("%d",&i);
    printf("Enter New Value:");
    scanf("%d",&new_val);

    if(top-i+1==-1)
    {
        printf("Value Not Found");
    }
    else
    {
        a[top-i+1]=new_val;
    }

}
