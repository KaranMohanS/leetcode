#include<stdio.h>

int majority(int* arr,int n)
{
    int max=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(c==0)
        {
            max=arr[i];
        }
        if(arr[i]==max)
        {
            c++;
        }
        else
        c--;
    }
    return max;
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
    int res=majority(arr,n);
    printf("%d",res);
}