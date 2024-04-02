#include<stdio.h>
int main()
{
    int n,m=1,bin=0;
    printf("enter number");
    scanf("%d",&n);

    while(n>0)
    {
        bin=bin+(n%2)*m;
        m=m*2;
        n=n/10;
    }
    printf("decimal number\n %d",bin);
}