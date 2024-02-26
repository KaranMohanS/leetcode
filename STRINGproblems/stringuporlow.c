#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("enter char size");
    scanf("%d",&n);
    char arr[n];
    int size = sizeof(arr) / sizeof(arr[0]);

    scanf("%s", &arr);

    printf("convert to lowercase--->1");
    printf("\nconvert to uppercase--->2");
    scanf("%d", &n);

    for (int i = 0; i < size; i++)
    {
        if (n == 1)
        {
            if (arr[i] >= 65 && arr[i] <= 90)
            {
                arr[i] = arr[i] + 32;
            }
        }
        else if(n==2)
        {
            if (arr[i] >= 97 && arr[i] <= 122)
            {
                arr[i] = arr[i] - 32;
            }
        }
        
        
    }
    printf("%s",arr);
}