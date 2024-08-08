#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    printf("enter string");
    scanf("%s",arr);

    int result=mindetection(arr);
    printf("%d",result);
}
int mindetection(char* arr)
{
    int c=0,res=0;

    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='b')
        {
            c++;
        }
        else if(c>0)
        {
            c--;
            res++;
        }
    }
    return res;
}