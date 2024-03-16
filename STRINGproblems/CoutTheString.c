#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("enter string\n");
    gets(str);
    int len = strlen(str);
    int l = 0, u = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')     /// method 1
        {
            l++;
        }
        for (str[i] >= 65 && str[i] <= 90)       /// method 2
        {
            u++;
        }
    }
    printf("upper case --->%d", u);
    printf("lower case --->%d", l);
}