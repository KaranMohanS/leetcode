#include<stdio.h>

int main()
{
    int length,sum=0;
printf("enter length");
scanf("%d",&length);

int arr[length];
printf("enter candies");
for(int i=0;i<length;i++)
{
    scanf("%d",&arr[i]);
}

int extracandies;
printf("enter extra candies");
scanf("%d",&extracandies);

for(int i=0;i<length;i++)
{
    sum=arr[i]+extracandies;
    if(sum>=length)
    {
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    
}
}