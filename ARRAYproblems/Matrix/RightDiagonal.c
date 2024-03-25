#include<stdio.h>
int main(){

    int n,m;
    printf("enter size");
    scanf("%d%d",&n,&m);

    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
      
    }
    printf("before matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d(%d,%d)",arr[j][i],j,i);
            printf(" ");
           
        }
        printf("\n");
    }
    printf("after diagonal\n");            // right side diagonal sum
    int sum=0;
     for(int i=0,j=0;i<n,j<m;i++,j++)
    {
        printf("%d ",arr[i][j]);

         sum=sum+arr[i][j];
     }
    printf("\ntranspose sum--->%d ",sum);
}