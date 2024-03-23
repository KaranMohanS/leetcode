#include<stdio.h>
#include<string.h>

int main()
{
    char arr[50];
    printf("enter string");
    scanf(" %[^\n]s",arr);
    int c=1;
    char search[50];
    printf("enter search sub string");
    scanf(" %[^\n]s",search);

    for(int i=0;i<strlen(arr);i++)
    {
        if(search[i]==arr[i])
        {
            c=0;
        }
    }
    if(c++)
    {
        printf("search is successful");
    }
    else
    {
        printf("search is not successful");
    }
}