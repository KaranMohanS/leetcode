#include<stdio.h>
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
    
    difference(n,arr);
}

void difference(int n,int* arr)
{
    int max1=0,max2=0,min=arr[0],min1=arr[1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=min1;
            min1=arr[i];
        }

    }

    printf("max1-%d max2-%d  min1-%d min2-%d",max1,max2,min,min1);

    printf("\nDifference is %d",(max1*max2)-(min*min1));
}