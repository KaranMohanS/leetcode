#include<stdio.h>
int main()
{
int n,m;
printf("enter size n and m");
scanf("%d %d",&n,&m);
printf("enter array");
int arr[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("original matrix\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
printf("left side diagonal");
int sum=0;
for(int i=n-1,j=0;i>=0,j<m;i--,j++)
{
    printf("\n%d",arr[j][i]);
    sum=sum+arr[i][j];
}
printf("\nsum--->%d",sum);

}