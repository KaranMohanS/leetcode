#include<stdio.h>

int fibonacci(int n)
{                    // method 1 normal
   //int t1=0,t2=1,t3,i=1;
   //while(i<=n)
   //{
   // t3=t1+t2;
   // t1=t2;
   // t2=t3;
   // printf("%d",t3);
   // i++;
   //}
                      // method 2 Recursion
   if(n==0)
   {
    return 0;
   }
   if(n==1 ||n==2)
   {
    return 1;
   }
   return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
     
    for(int i=1;i<=n;i++)
    {
       printf("%d",fibonacci(i));
    }
   
}