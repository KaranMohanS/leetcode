#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           j++;
        }
    }
    for(int j=0;j<n;j++)
    {
        printf("%d",arr[j]);
    }
}