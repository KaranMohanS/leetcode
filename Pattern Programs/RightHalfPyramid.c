#include <stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    // Right Half Star Pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Right Half Number Pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", 1 + j);
        }
        printf("\n");
    }
    // Right Half alphabet Pattern

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", 'a' + j);
        }
        printf("\n");
    }
    return 0;
}