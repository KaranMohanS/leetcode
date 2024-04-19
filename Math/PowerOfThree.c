#include<stdio.h>

int power(int n)
{
  int sum=0,c=0;
  if(n<=0)
  {
    return n==0;
  }
  while(n%3==0)
  {
    n=n/3;
    c++;
  }
  return c;
  
}
int main()
{
  int n;
  printf("enter number");
  scanf("%d",&n);
  int res=power(n);
  printf("3^%d",res);
}