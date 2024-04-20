#include <stdio.h>
int main()
{

    int n, m, sum = 0, sum1 = 0, sum2 = 0;
    scanf("%d%d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0, l = 1, x = 2; i <= 0, l <= 1, x <= 2; i++, l++, x++)
    {
        for (int j = 0, k = 0, y = 0; j < m, k < m, y < m; j++, k++, y++)
        {
            sum = sum + arr[i][j];
            sum1 = sum1 + arr[l][k];
            sum2 = sum2 + arr[x][y];
        }
    }
    printf("%d", sum);
    printf("\n%d", sum1);
    printf("\n%d", sum2);
    int result=(sum>sum1)?(sum>sum2?sum:sum2):(sum1>sum2?sum1:sum2);
    printf("\nrichest customer wealth--->%d",result);

}