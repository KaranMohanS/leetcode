#include<stdio.h>

int count(int n)
{
    int temp=n;
    int count=0,rev=0;
    while(n>0)
    {
        rev=n%10;
        if(temp%rev==0)
        {
            count++;
        }
        n/=10;
    }
    return count;
}

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    int res=count(n);
    printf("%d",res);
}