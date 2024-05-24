#include<stdio.h>

int fact(int n)
{                // method 1 recursion
    if(n==0)
    return 1;
    
    return n*(fact(n-1));

    //                    method 2 normal 
    //int sum=1;
    //for(int i=1;i<=n;i++)
    //{
    //    sum=sum*i;
    //}
    //return sum;
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    printf("%d",fact(n));

}