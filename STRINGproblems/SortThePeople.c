#include<stdio.h>
#include<string.h>

void sortthepeople(char arr[][100],int* brr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(brr[j]<brr[j+1])
            {
                int temp=brr[j];
                brr[i]=brr[j+1];
                brr[j+1]=temp;

                char tempname[100];
                strcpy(tempname,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],tempname);
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s ",arr[i]);
    }
}
int main()
{
    int n;
    printf("enter names size");
    scanf("%d",&n);
    char arr[n][100];
    printf("enter names");
    for(int i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }

    int brr[n];
    printf("enter height");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }

    sortthepeople(arr,brr,n);
    
}