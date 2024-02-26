#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("enter number");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + arr[j];
            // printf("%d %d",sum,arr[i])
        }
        printf("\nindex value %d \n%d", i, sum);
    }

    int sum1 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            sum1 = sum1 + arr[j];
            // printf("%d %d",sum,arr[i])
        }
        printf("\nindex value %d \n%d", i, sum1);
    }
}
