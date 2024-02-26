#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
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
    for(int i=0;i<n;i++)
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
    for(int i=0;i<n;i++)
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