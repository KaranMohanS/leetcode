#include<stdio.h>

int containduplicate(int* arr,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);

    int arr[n];
    printf("enter values");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int res=containduplicate(arr,n);
    if(res==0)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
}