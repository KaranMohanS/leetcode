#include <stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        
          
        for (int j = 0; j < n; j++)
        {
            printf(" *");
        }
        printf("\n");
        for(int k=0;k<=i;k++)
        {
            printf(" ");
        }
        
        
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d",1+j);
        }
        printf("\n");
        for(int k=0;k<=i;k++)
        {
            printf(" ");
        }
        
        
    }
    for (int i = 0; i <n; i++)
    {
        
          
        for (int j = 0; j < n; j++)
        {
            printf("%c",'a'+j);
        }
        printf("\n");
        for(int k=0;k<=i;k++)
        {
            printf(" ");
        }
        
        
    }

    return 0;
}
