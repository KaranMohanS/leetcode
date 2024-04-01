#include<stdio.h>
int main()
{
    int n,m=1,bin=0;
    printf("enter number");
    scanf("%d",&n);

    while(n>0)
    {
        bin=bin+(n%2)*m;
        m=m*10;
        n=n/2;
    }
    printf("binary number\n %d",bin);
}