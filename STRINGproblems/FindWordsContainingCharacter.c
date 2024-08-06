#include<stdio.h>
#include<string.h>

void contain(int n,char* arr,char x)
{
    int k=0;
    int res[2];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<strlen(arr[i]);j++)
        {
            if(arr[j]==x)
            {
                res[k++]=i;
                break;
            }
        }

    }
    for(int i=0;i<2;i++)
    printf("%d",res[i]);
}
int main()
{
   
    char arr[100];

    scanf(" %[^\n]s",&arr);  

    int n=strlen(arr);
    char x;
    scanf(" %c",&x);
    contain(n,arr,x);
}