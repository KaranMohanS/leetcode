#include<stdio.h>
int main()
{

int length,count=0;
printf("enter length");
scanf("%d",&length);

int arr[length];
printf("enter employe");
for(int i=0;i<length;i++)
{
    scanf("%d",&arr[i]);
}

int target;
printf("enter target");
scanf("%d",&target);

for(int i=0;i<length;i++)
{
    if(arr[i]>=target)
    {
        count++;
    }

}
printf("There are %d employees who met the target ",count);
}
