#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int rev=0,sum=0;
  int temp=n;
  while(n!=0)
  {
    rev=n%10;
    sum=sum*10+rev;
    n=n/10;
  }
 if(temp==sum)
 {
  printf("palindrom");
 }
 else{
  printf("not palindrom");
 }
}