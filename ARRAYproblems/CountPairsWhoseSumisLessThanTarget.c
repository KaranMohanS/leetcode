#include<stdio.h>

int count(int* arr,int n,int target)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]<target)
            {
                c++;
            }
        }
    }
    return c;
}
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);
    int arr[100];
    printf("enter numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter target");
    scanf("%d",&target);

    int res=count(arr,n,target);
    printf("count pair is --->%d",res);
}