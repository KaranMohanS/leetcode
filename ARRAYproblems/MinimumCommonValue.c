#include<stdio.h>
int main()
{
    int n,m;
    printf("enter first array size");
    scanf("%d",&n);
    printf("enter second array size");
    scanf("%d",&m);

    int arr[n],brr[m];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
    }


   int result= MinimumCommonValue(arr,brr,n,m);
   printf("%d",result);

}

int MinimumCommonValue(int* arr,int* brr,int n,int m)
{
    int i=0,j=0;

    while(i<n && j<m)
    {
        if(arr[i]==brr[j])
        {
            return arr[i];
        }
        else if(arr[i]<brr[j])
        {
            i++;
        }
        else
        j++;
    }
    return -1;
}
