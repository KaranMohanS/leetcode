#include<stdio.h>

int main(){

    int n;
    printf("enter number");
    scanf("%d",&n);

     for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<2*(n-i)+1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

       for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<2*(n-i)+1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%d ",1+k);
        }
        printf("\n");
    }

       for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<2*(n-i)+1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("%c ",'a'+k);
        }
        printf("\n");
    }
}