#include<stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    fibb(n);
}
void fibb(int n)
{
    if(n==0)
    printf("%d",0);
    if(n==1)
    printf("%d",1);
    int x=0,y=1,result=0;
    for(int i=2;i<=n;i++)
    {
        result=x+y;
        x=y;
        y=result;
    }
    printf("%d",result);
}