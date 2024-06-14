#include<stdio.h>

void kpattern(int n)
{
                    // star pattern
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
                   // zero's and one's pattern
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            if((i+j)%2==0)
            printf("0");
            else
            printf("1");
        }

        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if((i+j)%2==0)
            printf("0");
            else
            printf("1");
            
        }
        printf("\n");
    }
    char x='z';          // alphabet k pattern
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf("%c",j+'a');
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",x--);
        }
        printf("\n");
    }

}
int main()
{
    int n;
    scanf("%d",&n);

    kpattern(n);
}