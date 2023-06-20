#include <stdio.h>

void staircase(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= i; k++)
    {
      printf("#");
    }
    printf("\n");
  }
}

int main()
{
  int n;
  printf("how many staircase do you want to build?\n");
  scanf("%i",&n);
  staircase(n);
  return (0);
}