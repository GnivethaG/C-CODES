#include<stdio.h>
void main()
{
    int ne,i,sum=0,target=18;
    printf("Enter the number of employees");
    scanf("%d",&ne);
    int a[100];
    printf("Enter the candies sold by each employee");
    for(i=1;i<=ne;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    for(i=1;i<=ne;i++)
    {
        if(sum>18)
        {
            a[i]+=2;
        }
       printf("\nEmployee %d gets :%d ",i,a[i]*10);

    }
}



