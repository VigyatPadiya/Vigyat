#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void myremove();
int q[100],l,f=-1,r=-1;
void main()
{
int ch;

    printf("Enter a size:");
    scanf("%d",&l);

    do
    {
        printf("\n\t\t---QUEUE---\n");
        printf("1) Insert..\n");
        printf("2) Display..\n");
        printf("3) Delete..\n");
        printf("4) Exit..\n");

        printf("Enter Your Choice:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            myremove();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid number..");
        }
    }
    while (ch>=1 && ch<=4);
}

void insert()
{
    if (r==l-1)
    {
        printf("Queue is Full");
    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        printf("Enter a Number:");
        scanf("%d",q[f]);
    }
    else
    {
        r++;
        printf("Enter a Number:");
        scanf("%d",&q[r]);
    }
}

void display()
{
    int i;
    if(f==-1 && f==r)
    {
        printf("The Queue is Empty");
    }
    else
    {
        printf("\t\tDisplay");

        for (i<f;i<=f;i++)
        {
            printf("\n%d",q[i]);
        }
    }
}

void myremove()
{
     if(f==-1 && f>r)
    {
        printf("The Queue is Empty");
    }
    else
    {
        printf("The Value %d is Deleted...",q[f]);
        f++;
    }
}
