#include<stdio.h>

int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int result=array(arr,n);
    printf("%d",result);
}
int array(int* arr,int n)
{
    int index=0,c=0,max=0;

    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            index=arr[i];
        }

    }
    return index;
}