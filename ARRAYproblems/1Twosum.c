#include<stdio.h>

int main(){

    int n;
    printf("number of element");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        
        scanf("%d",&arr[i]);
    }
     int x;
     scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==x)
        {
            printf("(%d,%d)",i,j);
        }
    }
    }


}