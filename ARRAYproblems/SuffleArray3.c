#include<stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    int arr[n],temp[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int m;
    printf("enter div number");
    scanf("%d",&m);

    for(int i=0;i<m;i++)
    {
        for(int j=i+m;j<n;j++)
        {
            temp[i]=arr[i];
            arr[i]=arr[j];
            arr[j]=temp[i];

        }
    }
    for(int i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }
}