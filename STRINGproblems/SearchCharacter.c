#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("enter the string");
    scanf(" %[^\n]s",arr);
    int len =strlen(arr);
    char str[10];
    printf("enter to find ");
    scanf("%s",&str);
    int len1=strlen(str);
    int c=0;

    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len1;j++)
        {
            if(arr[i]==str[j])
            {
                
                c++;
                printf(" %d ",i);
            }
        }
    }
    if(c++)
    {
        printf("\ncount--->%d",c);
    }
}