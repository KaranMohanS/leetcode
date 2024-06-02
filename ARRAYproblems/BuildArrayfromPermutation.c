#include<stdio.h>
#include<stdlib.h>
void permutation(int* arr,int n)
{
    int* brr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        brr[i]=arr[arr[i]];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",brr[i]);
    }
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

    permutation(arr,n);
}