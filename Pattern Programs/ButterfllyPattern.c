#include<stdio.h>

void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" *");
        }
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
     for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" *");
        }
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }

}
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);

    pattern(n);
}