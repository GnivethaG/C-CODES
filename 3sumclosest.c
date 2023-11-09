#include<stdio.h>
#include<stdlib.h>
int threeSumClosest(int* nums, int numsSize, int target) {

    int sum=0,r,r1,flag=0,large,small=100000;
    large=-100000;

    for(int i=0;i< numsSize; i++)
    {
       for(int j=i+1;j<numsSize;j++)
       {
           for(int k=j+1;k<numsSize;k++)
           {
               sum=nums[i]+nums[j]+nums[k];
               //printf("\n%d",sum);
               if(sum>=target)
               {
                 r=sum;
                 if(small>r)
                 {
                     small=r;
                    // printf("\nsmall =%d",small);
                 }
                flag=1;

               }
               else
               if(sum<target)
               {
                   r1=sum;
                   if(large<r1)
                   {
                       large=r1;
                       //printf("\nlarge =%d",large);
                   }
                   continue;

               }
           }
       }


    }
    int a=abs(target-small);
    int b= abs(target-large);
    /*printf("\n%d",numsSize);
    printf("\n%d",target);
    printf("\n%d",small);
    printf("\n%d",large);
    printf("\n%d",a);
    printf("\n%d",b);*/
    if((b<a)&&(flag==1))
    {
        return large;
    }
    else if(b<a)
    {
        return large;
    }
    else if(flag==1)
    {

        return small;
    }
    else
    return small;
}
void main()
{
    int n,target;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int nums[n];
    printf("\nEnter the array elements");
    for(int i=0;i<n;i++)
    {

        scanf("%d",&nums[i]);
    }
    printf("\n Enter the target : ");
    scanf("%d",&target);
    printf("\n%d is the closest sum",threeSumClosest(nums,n,target));
}
