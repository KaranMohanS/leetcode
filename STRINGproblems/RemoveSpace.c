#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100],brr[100];
    printf("enter string");
    scanf(" %[^\n]s",&arr);

    int j=0;
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]!=' ')
        {
            brr[j++]=arr[i];
        }
    }
    brr[j]='\0';
    printf("%s",brr);

}