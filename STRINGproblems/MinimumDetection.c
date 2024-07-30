#include<stdio.h>
#include<string.h>

int main(){

    char arr[100];

    scanf("%s",arr);
   
   int res=minimumdetection(arr);
   printf("%d",res);

}
int minimumdetection(char* arr)
{
    int c=0,res=0;

    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='a' && c<res)
        {
            c++;
        }
        else if(arr[i]=='b')
        {
            res++;
        }

    }
    return c;
}