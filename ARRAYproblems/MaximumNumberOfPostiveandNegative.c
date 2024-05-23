#include<stdio.h>

int count(int n,int* arr)
{
    int p=0,ne=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            p++;
        }
        else if(arr[i]<0)
        {
            ne++;
        }
    }
    printf("positive number count %d",p);
     printf("\nnegative number count %d",ne);
    return p>ne?p:ne;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    int res=count(n,arr);
    printf("\n%d",res);
}