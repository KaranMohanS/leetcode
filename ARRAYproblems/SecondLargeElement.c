#include <stdio.h>

int main()
{
    int n;
    printf("enter size");
    scanf("%d", &n);

    int arr[n];
    printf("enter array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0];
    int max2 = arr[1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max1 < arr[i])
            {
                max2 = max1;
                max1 = arr[i];
            }
        }
    }
    printf("max1--->%d\n", max1);
    printf("max2--->%d", max2);
}