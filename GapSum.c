#include<stdio.h>

int gapsum(int n,int* arr,int gap)
{
    int sum=0;
    for(int i=0;i<gap;i++)
    {
        sum=0;
        for(int j=i;j<n;j+=gap)
        {
            sum=sum+arr[j];
        }
        printf(" %d ",sum);
    }

}
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
    int gap;
    printf("enter gap");
    scanf("%d",&gap);

    gapsum(n,arr,gap);
    

}