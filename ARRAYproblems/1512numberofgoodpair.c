#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
            printf("\n%d %d %d %d", arr[i], arr[j], arr[i] == arr[j], count);
        }
    }
    printf("\n%d", count);
}