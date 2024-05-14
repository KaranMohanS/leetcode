#include<stdio.h>

int concatenation(int n,int* arr)
{
    int brr[n*2];

    for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    for(int j=0;j<n;j++)
    {
        brr[j+n]=arr[j];
    }
    for(int i=0;i<n*2;i++)
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
    printf("\nenter numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    concatenation(n,arr);

    
}