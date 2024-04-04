#include<stdio.h>

int main()
{
    int n,m;
    printf("enter size");
    scanf("%d",&n);
    printf("enter divisible number");
    scanf("%d",&m);
    int sum=0,sum1=0;
    for(int i=1;i<n;i++)
    {
        if(i%m!=0)
        {
            sum=sum+i;
        }
        else if(i%m==0)
        {
            sum1=sum1+i;
        }

    }
    printf("not divisible numbers sum--->%d\n",sum);
    printf("divisible numbers sum--->%d\n",sum1);
    printf("divisible and not divisible subtraction numbers--->%d",sum-sum1);

}
