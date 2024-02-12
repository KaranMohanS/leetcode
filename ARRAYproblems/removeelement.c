#include<stdio.h>

int main(){

    int n,temp;
    printf("number of element");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        
        scanf("%d",&arr[i]);
    }

    int v;
    scanf("%d",&v);

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=v)
        {
            int temp=arr[i];
            printf("%d ",temp);
        }
        
    }
    
    





    
    /*for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                 result=arr[j];
            }
        }
    }
    printf("%d",result);*/

    
}