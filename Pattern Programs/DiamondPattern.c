#include<stdio.h>
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);
                             // Star Pattern
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
                             // Number Pattern
     int m=1;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%d ",m++);
        }
        printf("\n");
    }
     for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%d ",m++);
        }
        printf("\n");
    }
                              // Number Pattern     
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%d ",1+k);
        }
        printf("\n");
    }
     for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%d ",1+k);
        }
        printf("\n");
    }
                            // Alphabet Pattern
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%c ",'a'+k);
        }
        printf("\n");
    }
     for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%c ",'a'+k);
        }
        printf("\n");
    }
                                 // Alphabet Pattern
     char c='a';
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%c ",c++);
        }
        printf("\n");
    }
    char d='A';
     for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<2*(n-i)-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%c ",d++);
        }
        printf("\n");
    }
}