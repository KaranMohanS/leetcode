#include<stdio.h>
#include<string.h>

int score(char* arr)
{
   int sum=0;
  for(int i=0;i<strlen(arr)-1;i++)
  {
    sum=sum+abs(arr[i]-arr[i+1]);
  }
  return sum;
}
int main()
{
  char arr[100];
  printf("enter string");
  gets(arr);

  int  res=score(arr);
  printf("%d",res);
}