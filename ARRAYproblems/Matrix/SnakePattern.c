#include<stdio.h>
int main()
{
    int n,m;
    printf("enter size n");
    scanf("%d",&n);
    printf("enter size m");
    scanf("%d",&m);

    int arr[n][m];
    printf("enter matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                printf(" %d ",arr[i][j]);
            }
        }
        else if(i%2!=0)
        {
            for(int j=m-1;j>=0;j--)
            {
                printf(" %d ",arr[i][j]);
            } 
        }
    }
}
