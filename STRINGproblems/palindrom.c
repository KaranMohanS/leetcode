#include<stdio.h>
#include<string.h>

int main()
{
    char arr[50],brr[50];
    printf("enter string");
    scanf("%s",&arr);
     int j;
    for(int i=strlen(arr)-1;i>=0;i--)
    {
        brr[j]=arr[i];
        j++;
    }
    if(strcmp(arr,brr)==0)
    {
        printf("palindrom");
    }
    else{
        printf("no");
    }

}