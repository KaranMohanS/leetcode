#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  printf("enter size");
  scanf("%d",&n);

  char s[n];
  printf("enter string");
  for(int i=0;i<n;i++)
  {
    scanf("%c",&s[i]);
  }
   revers(s);
  for(int i=0;i<n-1;i++)
  {
    printf("%c",s[i]);
    if(i<n-1)
    {
      printf(",");
    }
  }
}
void revers(char* s)
{
  int i=0;
  int j=strlen(s)-1;
  while(i<j)
  {
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;
  }

}