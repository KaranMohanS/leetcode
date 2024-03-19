#include<stdio.h>
#include<string.h>
int main()
{

char arr[100],temp;
     printf("enter string");
     scanf(" %[^\n]s",&arr);
     int len=strlen(arr);
     for(int i=0;i<len;i++)
     {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
     printf("alphabetic order--->%s",arr);

}