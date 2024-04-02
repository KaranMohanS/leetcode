#include<stdio.h>
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
    int max1=arr[0];
    int max2=arr[1];
    int max3=arr[2];

    for(int i=0;i<n;i++)
    {
        if(max1<arr[i])
        {
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
    }
    printf("max1--->%d\nmax2--->%d\nmax3--->%d",max1,max2,max3);
    return 0;
}