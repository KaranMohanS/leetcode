#include<stdio.h>

int count(int* arr,int n)
{
    int c=0,digit=0;
    for(int i=0;i<n;i++)
    {
        digit=0;
        while(arr[i]>0)
        {
            arr[i]/=10;
            digit++;
        }
        if(digit%2==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);

    int arr[n];
    printf("enter numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int res=count(arr,n);
    printf("number of even digits--->%d",res);
}