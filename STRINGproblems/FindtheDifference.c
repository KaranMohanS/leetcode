#include<stdio.h>


char different(char* arr,char* brr)
{
    int c=0,i=0,j=0;
    while(i<strlen(arr))
    {
        c=c^arr[i];
        i++;
    }
    while(j<strlen(brr))
    {
        c=c^brr[j];
        j++;
    }
    printf("difference between tow strings---> %c",c);
}
int main()
{
    char arr[10],brr[10];

    scanf("%s",&arr);
    scanf("%s",&brr);
    
    different(arr,brr);

}