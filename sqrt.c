#include<stdio.h>
int mySqrt(int x){

    double num;
    for(double i=1; ;i++)
    {
        num=i*i;
        if(num==x)
        {
            return (int)i;
        }
        else
        if(num < x)
        {
            continue;
        }
        else if(num>x)
        {
            return (int)i-1;
        }
    }

}
void main()
{
    int n,res;
    printf("Enter the number to print its square root");
    scanf("%d",&n);
    res=mySqrt(n);
    printf("%d",res);
}