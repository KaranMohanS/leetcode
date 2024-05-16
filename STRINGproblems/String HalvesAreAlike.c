#include<stdio.h>
#include<string.h>
int main()
{
    
    char arr[100];
    printf("enter string");
    scanf("%s",arr);

    int count1=0,count2=0;

    for(int i=0;i<strlen(arr)/2;i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'||
        arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        {
            count1++;
        }
    }
    for(int i=strlen(arr)/2;i<strlen(arr);i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'||
        arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        {
            count2++;
        }
    }
    if(count1!=count2)
    {
        printf("false");
    }
    else
    {
    printf("true");
    }
}
