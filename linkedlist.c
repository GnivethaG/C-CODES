#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{

    int info;
    struct node*link;
};
struct node*start=NULL;

void creation()
{
    if(start==NULL)
    {
        int n,data;
        printf("Enter the number of nodes");
        scanf("%d",&n);
        if(n!=0)
        {
            struct node*temp,*newnode;
            newnode=malloc(sizeof(struct node));
            start=newnode;
            temp=start;
            printf("Enter the data");
            scanf("%d",&data);
            start->info=data;
            for(int i=2;i<=n;i++)
            {
                newnode=malloc(sizeof(struct node));
                temp->link=newnode;
                printf("Enter the data");
                scanf("%d",&data);
                newnode->info=data;
                temp=temp->link;
            }

        }
    }
    else
    {
        printf("List already created");
    }
}

void display()
{
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        struct node*temp;
        temp=start;
        while(temp!=NULL)
        {
            printf("%d",temp->info);
            temp=temp->link;
        }
    }

}

void insertbeg()
{
    struct node*newnode;
    int data;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&data);
    newnode->info=data;
    newnode->link=start;
    start=newnode;
}

void insertend()
{
    struct node*newnode,*temp;
    int data;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&data);
    newnode->info=data;
    newnode->link=NULL;
    temp=start;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=newnode;

}

void insertanypos()
{
    int data,pos,i=1;
    struct node*newnode,*temp;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data and pos");
    scanf("%d %d",&data,&pos);
    newnode->info=data;
    temp=start;
    while(i<pos-1)
    {
        temp=temp->link;
        i++;
    }
    newnode->link=temp->link;
    temp->link=newnode;

}

void deletebeg()
{
    if(start==NULL)
    {
        printf("cant delete");
    }
    else
    {
        struct node*temp;
    temp=start;
    printf("node deleted is %d",start->info);
    start=start->link;
    free(temp);
    }


}

void deleteend()
{
     if(start==NULL)
    {
        printf("cant delete");
    }
    else
    {
        struct node*temp,*temp1;
        temp=start;
        while(temp->link!=NULL)
        {
            temp1=temp;
            temp=temp->link;
        }
        printf("node deleted is %d",temp->info);
        temp1->link=NULL;
        free(temp);
}
}

void deleteatanypos()
{
     int pos,i=1;
    struct node*newnode,*temp;
    newnode=malloc(sizeof(struct node));
    printf("Enter the pos");
    scanf("%d",&pos);
    temp=start;
    while(i<pos-1)
    {
        temp=temp->link;
        i++;
    }
    newnode=temp->link;
    temp->link=newnode->link;
    free(newnode);
}
int main()
{

    int ch;
    while(1)
    {


    printf("enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: creation();
                break;
        case 2: display();
                break;
        case 3: insertbeg();
                break;
        case 4: insertend();
                break;
        case 5: insertanypos();
                break;
        case 6: deletebeg();
                break;
        case 7: deleteend();
                break;
        case 8: deleteatanypos();
                break;
                case 9:exit(1);
        default: printf("WRONG CHOICE");
    }
    }
    return 0;
}
