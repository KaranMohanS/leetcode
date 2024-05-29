#include<stdio.h>
#include<string.h>

void lowercase(char* s)
{
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]+=32;
        }
    }
    printf("%s",s);
}
int main()
{
    char s[100];
    printf("enter string");
    scanf(" %[^\n]s",&s);

    lowercase(s);
}