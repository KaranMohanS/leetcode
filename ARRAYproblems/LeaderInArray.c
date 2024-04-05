#include<stdio.h>

int main(){

    int n;
    printf("number of element");
    scanf("%d",&n);
    
    int arr[n],ans[n];
    for(int i=0;i<n;i++)
    {
        
        scanf("%d",&arr[i]);
    }
   int max=arr[0];
   printf("%d",max);
   for(int i=1;i<n;i++)
   {
       if(arr[i]>max)
       {
           max=arr[i];
           printf("%d",max);
       }
   }

 
}