//write a program to store any 5 int number in stake and print total of it using ds.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void sum();
void insert();
void display();
int queue[5];
int max=5;
int front=-1;
int rear=-1;
void main()
{
    void insert();
    void sum();
    void display();
}
void insert()
{
    int val;
    if(rear==-1 && front ==-1)
    {
        rear=0;
        front=0;
        printf("\n Enter Value:");
        scanf("%d",&val);
        queue[rear]=val;
    }
    else
    {
        rear=rear+1;
        printf("\n Enter Value:");
        scanf("%d,&val");
        queue[rear]=val;
    }
}
void sum()
{
    int i;
    for(i<front;i<=front;i++)
    {
       queue[i]=queue[i]+queue[i+1];
    }

}
void display()
{
    int i;
    for(i<front;i<=front;i++)
    {
        printf("\n %d",queue[i]);
    }
}
