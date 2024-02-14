#include<stdio.h>
void main()
{

    int a[100],n,sum=0,total,i=0,j=0;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter the sum");
    scanf("%d",&total);
    i=0;
    goto a;
    a:for(j=i;j<n;j++)
    {
        sum=sum+a[j];
       //printf("%d",sum);
        if(sum==total)
        {
            //printf("case 1");
            printf("Sub Array Found Between Index %d and %d",i,j);
            exit(0);

        }
        else
        if(sum>total)
        {
            //printf("case 2");
            i++;
            j=i;
            sum=0;
            goto a;


        }
        else
        {
           // printf("case 3");
            continue;
        }
    }


}
