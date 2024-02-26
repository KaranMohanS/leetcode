#include <stdio.h>
int main()
{

    int n;
    printf("enter number");
    scanf("%d",&n);
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    
    for (int i = 0; i < size; i++)
    {
        int min = i;

        for (int j = i+1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            //
        }

        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }
    
    for (int i = 0; i < 5; i++)
        printf("ascending--->%d\n", arr[i]);

    ///descending oder
    
    for (int i = 0; i < size; i++)
    {
        int min = i;

        for (int j = i+1; j < size; j++)
        {
            if (arr[min] < arr[j])
            {
                min = j;
            }
            //
        }

        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }
    
    for (int i = 0; i < 5; i++)
        printf("descending--->%d\n", arr[i]);

        
}