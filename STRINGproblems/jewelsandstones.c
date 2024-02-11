#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, s, f;
    printf("enter the size  jewel");
    scanf("%d", &s);
    printf("enter the size  stone");
    scanf("%d", &f);
    char jwel[s];
    printf("enter the size  jewel element");
    scanf("%s", &jwel);
    char stone[f];
    printf("enter the size  stone element");
    scanf("%s", &stone);

    int size = sizeof(jwel) / sizeof(jwel[0]);
    int size1 = sizeof(stone) / sizeof(stone[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (jwel[i] == stone[j])
            {
                count++;
                printf("\n(%d,%d)", i, j);
            }
        }
    }
    printf("\n%d", count);
}