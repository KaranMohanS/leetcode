#include <stdio.h>

int main()
{

    int n;
    printf("enter number");
    scanf("%d", &n);                                   // intput ---> [ 1 1 1 1 2 2 2 2 ]
                                                      // expected output----> [ 1 2 2 1 2 1 1 2 ]
    int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    printf("enter div number");
    scanf("%d", &m);

     for (int i = 1; i < m - 1; i++)
    {
         for (int j = n - 2; j > m; j--)
         {
             temp[i] = arr[i];
             arr[i] = arr[j];
             arr[j] = temp[i];
         }
     }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}