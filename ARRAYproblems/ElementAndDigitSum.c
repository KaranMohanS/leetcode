#include<stdio.h>
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    int element_sum=0;
    int digit_sum=0;
    for(int i=0;i<n;i++)
    {
        element_sum+=arr[i];

        int temp=arr[i];
        while(temp>0)
        {
           digit_sum+=temp%10;
           temp/=10;
        }

    }
    int diff=element_sum-digit_sum;
    printf("element sum--->%d\ndigit sum--->%d\ndifference--->%d",element_sum,digit_sum,diff);
}