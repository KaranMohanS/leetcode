#include <stdio.h>
#include<string.h>

int percentage(char* arr,char letter)
{
    int len=strlen(arr);
    int c=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]==letter)
        {
            c++;
        }
    }
    int sum=(100*c)/len;
    return sum;
}
int main() {
    
    char arr[100];
    printf("enter string");
    scanf(" %[^\n]s",arr);
    char letter;
    printf("enter letter");
    scanf(" %c",&letter);
    
    int res= percentage(arr,letter);
    printf("%d",res);

    return 0;
}