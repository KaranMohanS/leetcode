#include<stdio.h>

int power(int n)
{
    int c=0;
    if(n<=0)
    {
        return n==0;
    }
    while(n%2==0)
    {
        n/=2;
        c++;
    }
    return c;
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    int res=power(n);
    if(res)
    {
        printf("%d power of 2^%d",n,res);
    }
    else
    printf("false");
}