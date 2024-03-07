#include<stdio.h>

int main(){

    int n;
    printf("enter number");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    

    int x;
    printf("enter div number");
    scanf("%d",&x);



    int temp[n];
    for(int i=0;i<x;i++)
    {
      temp[2*i]=arr[i];
      temp[2*i+1]=arr[i+x];
      
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
        
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}