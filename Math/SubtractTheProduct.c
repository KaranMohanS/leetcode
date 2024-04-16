#include<stdio.h>

int SubtractProdectAndSum(int n)
{
    int rev=0,sum=0,mul=1,sub=0;

    while(n!=0)
    {
        rev=n%10;
        sum=sum+rev;
        mul=mul*rev;
        n=n/10;
    }
    sub=mul-sum;
    return sub;
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    
    int res=SubtractProdectAndSum(n);
    printf("%d",res);
}