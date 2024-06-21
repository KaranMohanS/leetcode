#include<stdio.h>


int sumdiff(int* arr,int n)
{
   int sum=0,sum1=0,rev=0;

   for(int i=0;i<n;i++)
   {
    sum=sum+arr[i];

    while(arr[i]!=0)
    {
        rev=arr[i]%10;
        sum1 +=rev;
        arr[i]/=10;
    }
   }
   return sum-sum1;
   printf("%d",sum1);
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

    int res=sumdiff(arr,n);
    printf("%d",res);
}