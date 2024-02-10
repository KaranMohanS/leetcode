#include<stdio.h>

int main(){

    int n,count=0;
    printf("number of element");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            count++;
            

        }
        if(count==1)
        printf("\n%d",arr[i]);
    }
}