#include<stdio.h>
#include<string.h>

int lengthlastword(char* str)
{
    int len=strlen(str);
    int count=0;

    for(int i=len-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        if(str[i]!=' ' && str[i-1]==' ')
        {
            break;
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("enter string");
    scanf(" %[^\n]s",str);

    int res=lengthlastword(str);
    printf("%d",res);

    
}