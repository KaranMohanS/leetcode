#include<stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=1 && i<n-1 && j>=1 && j<n-1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=1 && i<n-1 && j>=1 && j<n-1)
            {
                printf(" ");
            }
            else
            {
                printf("%c",'a'+j);
            }
        }
        printf("\n");
    }
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=1 && i<n-1 && j>=1 && j<n-1)
            {
                printf(" ");
            }
            else
            {
                printf("%d",1+j);
            }
        }
        printf("\n");
    }
}