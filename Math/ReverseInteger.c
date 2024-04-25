#include<stdio.h>
#include<math.h>

int reverse(int n)
{
    int rev=0,sum=0;
    while (n!=0)
    {
        rev=n%10;
        sum=sum*10+rev;
        n=n/10;
    }
    return sum;
}

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int res=reverse(n);
    printf("%d",res);
}