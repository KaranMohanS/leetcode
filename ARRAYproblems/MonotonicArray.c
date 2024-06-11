#include<stdio.h>
#include<stdbool.h>

bool monotonic(int* arr,int n)
{
    if(n<=1)
    {
        return true;
    }
    bool a=true;
    bool b=true;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            b=false;
        }
        if(arr[i]<arr[i-1])
        {
            a=false;
        }
    }
    return a||b;
   
}
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);

    int arr[n];
    printf("enter array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    bool x=monotonic(arr,n);
    if(x==1)
    {
        printf("it is monotonic array");
    }
    else
    {
    printf("its not monotonic array");
    }
}