#include<stdio.h>
#include<stdbool.h>
bool nimgame(int n);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    bool result=nimgame(n);
    if(result)
    {
       printf("true");
    }
    else
    printf("false");
    
}
bool nimgame(int n)
{
    if(n<=0)
    {
        return false;
    }
    return n%4!=0;
}