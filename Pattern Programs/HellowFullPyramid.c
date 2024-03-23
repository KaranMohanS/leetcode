#include<stdio.h>

int main()
{
    int row;
    printf("enter row");
    scanf("%d",&row);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<2*(row-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            if(k==0 || k==2*i ||i==row-1)
            {
              printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<2*(row-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            if(k==0 || k==2*i ||i==row-1)
            {
              printf("%d ",1+k);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<2*(row-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            if(k==0 || k==2*i ||i==row-1)
            {
              printf("%c ",'a'+k);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}