#include<stdio.h>
#include<string.h>

int count(char* arr)
{
    int len=strlen(arr);
    int c=0,CL=0,CR=0;

    for(int i=0;i<len;i++)
    {
        if(arr[i]=='R')
        {
            CL++;
        }
        else if(arr[i]=='L')
        {
            CR++;
        }
        if(CR==CL)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);

    char arr[n];
    scanf("%s",&arr);

    int res=count(arr);
    printf("Pairs --->%d",res);
}