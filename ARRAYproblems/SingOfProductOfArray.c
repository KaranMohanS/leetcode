#include<stdio.h>

int singofproduct(int* arr,int n)
{
    int sum=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            return 0;
        }
        if(arr[i]<0)
        {
            sum*=(-1);
        }
    }
    return sum;
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

    int res=singofproduct(arr,n);
    printf("%d",res);
}
