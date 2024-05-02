#include<stdio.h>
#include<string.h>


int search(int* arr,int n,int target)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(target>arr[i])
        {
            c++;
        }
    }
    return c;
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
    int target;
    printf("enter target");
    scanf("%d",&target);

    int res=search(arr,n,target);
    printf("%d",res);
}