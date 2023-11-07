#include<stdio.h>
void main()
{

    int arr[100],b[100],n,i;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=arr;
    revarray(ptr,b,n);
}
void revarray(int *a,int b[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {

        b[i]= a[n-(i+1)];

    }
    printf("\nThe reversed array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}
