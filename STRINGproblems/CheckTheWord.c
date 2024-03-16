#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100];
    printf("enter string");
    scanf(" %[^\n]s", arr);
    int len = strlen(arr);
    int r = 0;
    char str[100];
    printf("enter the word to find ---> ");
    scanf("%s", str);
    

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == str[i])
        {
           // printf("%c\n",arr[i]);
            r++;
        }
    }
        if(r++)
        {
            printf("String found");
        }
        else{
            printf("not found");
        }
 
    
    return 0;
}