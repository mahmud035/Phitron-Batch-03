#include <stdio.h>

int main()
{

  printf("for loop:\n");

  for (int i = 1; i <= 5; i++)
  {
    printf("%d\n", i);
  }

  // while
  printf("while loop:\n");

  int i = 1;
  while (i <= 5)
  {
    printf("%d\n", i);
    i++;
  }

  return 0;
}