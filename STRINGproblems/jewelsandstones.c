#include <stdio.h>
#include<string.h>

int main()
{
    int count = 0;
    char jwel[] = {'a', 'A'};
    int size=sizeof(jwel)/sizeof(jwel[0]);
    char stone[] = {'a', 'A', 'z'};
    int size1=sizeof(stone)/sizeof(stone[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (jwel[i] == stone[j])
            {
                count++;
                printf("\n(%d,%d)",i,j);
            }
        }
    }
    printf("\n%d", count);
}