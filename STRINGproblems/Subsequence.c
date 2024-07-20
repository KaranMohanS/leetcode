#include<stdio.h>
# include<string.h>
#include<stdbool.h>

bool subsequence(char* s1, char* s2);
int main()
{
   char s1[100];
   char s2[100];
   printf("enter 1st one subsequence 2nd one string");
   scanf("%s %s",s1,s2);

   bool x=subsequence(s1,s2);
   if(x)
   printf("TRUE");
   else
   printf("FALSE");
}
bool subsequence(char* s1,char* s2)
{
    int i=0,j=0;

    while(i<strlen(s1) && j<strlen(s2))
    {
        if(s1[i]==s2[j])
        {
            i++;
        }
        j++;
    }
    return (i==strlen(s1));
}