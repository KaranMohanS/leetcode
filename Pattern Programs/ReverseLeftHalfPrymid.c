#include <stdio.h>

int main()
{

    int n;
    printf("enter number");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * (n - i) - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * (n - i) - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", 1 + k);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * (n - i) - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c ", 'a' + k);
        }
        printf("\n");
    }
    return 0;
}