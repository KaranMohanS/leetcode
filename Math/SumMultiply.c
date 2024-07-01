#include<stdio.h>

int sum(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        if(i%3==0 ||i%5==0 ||i%7==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    int res=sum(n);
    printf("%d",res);
}