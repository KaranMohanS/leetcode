#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter number");
    scanf("%d",&n);

    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
      brr[i]=sum;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
    

}