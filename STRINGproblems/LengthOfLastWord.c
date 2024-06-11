#include<stdio.h>
#include<string.h>

int length(char* str,int n)
{
    int c=0;
    for(int i=n-1;i>=0;i--)
    {
    if(str[i]!=' ')
    {
        c++;
    }
    if( c>0 && str[i]==' ')
    {
        break;
    }
   
 }
    return c;
}
int main()
{
    char str[100];
    printf("enter string");
    scanf(" %[^\n]s",&str);
    int n=strlen(str);

    int res=length(str,n);
    printf("length of last word %d",res);
}