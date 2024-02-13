#include <stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    // Right Half Star Pattern
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //Reverse Right Half Number Pattern
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d",1+j);
        }
        printf("\n");
    }
    //Reverse Right Half Alphabet Pattern
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%C",'a'+j);
        }
        printf("\n");
    }
}