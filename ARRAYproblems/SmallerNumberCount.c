#include <stdio.h>
int main()
{
    int n;
    printf("enter size");
    scanf("%d", &n);

    int arr[n], brr[n];
    printf("enter array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c;
    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                c++;
            }
        }
        brr[i] = c++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", brr[i]);
    }
}