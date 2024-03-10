#include <stdio.h>

int main()
{

    int n;
    printf("enter number");
    scanf("%d", &n);
                                            // input ---> [1,1,1,2,2,2]
                                            //output ---> [2,1,2,1,2,1]
    int arr[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    printf("enter div number");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        for (int j = i + m; j < n; j++)
        {
            if (i == 0 && j == m)
            {
                temp[i] = arr[i];
                arr[i] = arr[j];
                arr[j] = temp[i];
            }
            if(i==m-1&&j==n-1)
            {
                temp[i] = arr[i];
                arr[i] = arr[j];
                arr[j] = temp[i];

            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
