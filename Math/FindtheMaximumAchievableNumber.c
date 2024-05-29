#include<stdio.h>

int achievblenumber(int n,int t)
{
    return n+2*t;
}
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    int t;
    printf("enter t");
    scanf("%d",&t);

    int res=achievblenumber(n,t);
    printf("maximum achievble number is --->%d",res);
}