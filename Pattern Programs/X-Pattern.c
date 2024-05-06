#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int count=n*2-1;
    for(int i=1;i<=count;i++)
    {
        for(int j=1;j<=count;j++)
        {
            if(i==j || j==(count-i+1))
            {
                printf("%d",i);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}