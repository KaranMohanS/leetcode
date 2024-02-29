
#include <stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);

    int arr[n];
    for (int i = n-1; i >=0; i--)
    {
        for(int k=0;k<=i;k++)
        {
            printf(" ");
        }
          
        for (int j = 0; j < n; j++)
        {
            printf(" *");
        }
        printf("\n");
        
        
    }
    for (int i = n-1; i >=0; i--)
    {
        for(int k=0;k<=i;k++)
        {
            printf(" ");
        }
          
        for (int j = 0; j < n; j++)
        {
            printf("%d",1+j);
        }
        printf("\n");
        
        
    }
    for (int i = n-1; i >=0; i--)
    {
        for(int k=0;k<=i;k++)
        {
            printf(" ");
        }
          
        for (int j = 0; j < n; j++)
        {
            printf("%c",'a'+j);
        }
        printf("\n");
        
        
    }
    return 0;
}