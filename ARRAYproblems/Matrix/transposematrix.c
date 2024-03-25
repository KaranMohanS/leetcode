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
    printf("before transpose\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d(%d,%d)",arr[i][j],i,j);
            printf(" ");
           
        }
        printf("\n");
    }
    printf("after transpose\n");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d(%d,%d)",arr[j][i],j,i);
            printf(" ");
           
        }
        printf("\n");
    }
}