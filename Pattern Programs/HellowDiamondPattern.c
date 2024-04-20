#include <stdio.h>

int pattern(int n)
{
  /// star pattern
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++)
    {
      if (k == 0 || k == 2 * i)
      {
        printf("*");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++)
    {
      if (k == 0 || k == 2 * i)
      {
        printf("*");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  //  number pattern
  int x = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++)
    {
      if (k == 0 || k == 2 * i)
      {
        printf("%d", x++);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++)
    {
      if (k == 0 || k == 2 * i)
      {
        printf("%d", x++);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  // alphabet pattern
  char z = 'a';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++)
    {
      if (k == 0 || k == 2 * i)
      {
        printf("%c", z++);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++)
    {
      if (k == 0 || k == 2 * i)
      {
        printf("%c", z++);
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
}

int main()
{
  int n;
  scanf("%d", &n);

  pattern(n);
}