#include<stdio.h>
#include<conio.h>
#define n 20
int queue[n];
int front=-1;
int rear=-1;
void ins()
{
    int ele;
    if(rear==n-1)
    {
        printf("Queue Overflow");
    }
    else
    {
        printf("Enter the element to be inserted");
        scanf("%d",&ele);
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=ele;
    }

}
void del()
{
    if(front==-1||front>rear)
    {
        printf("Queue Underflow");
    }
    else
    {

        printf("The element deleted is %d",queue[front]);
        front=front+1;
    }
}
void disp()
{
    if(front==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
            printf("%d",queue[i]);
    }
}
void main()
{
    int op;
    printf("Operations are: 1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT");
    while(1)
    {
        printf("\nEnter the choice");
        scanf("%d",&op);
        switch(op)
        {
            case 1: ins();
                    break;
            case 2: del();
                    break;
            case 3: disp();
                    break;
            case 4: exit(1);
            default: printf("Wrong Operation");

        }
    }
    return 0;
}
