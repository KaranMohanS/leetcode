#include <stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("ascending order");
    for (int i = 0; i < n; i++)
        printf("\n%d", arr[i]);

    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] < arr[j])
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\ndescending order");
    for (int i = 0; i < n; i++)
        printf("\n%d", arr[i]);
}