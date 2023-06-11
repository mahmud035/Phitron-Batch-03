#include <stdio.h>

int main()
{
  char a[100];
  scanf("%s", a);

  int count = 0;
  int i;

  // Using for loop
  for (i = 0; a[i] != '\0'; i++)
  {
    count++;
  }
  printf("%d\n", count);

  // Using while loop
  while (a[i] != '\0')
  {
    count++;
    i++;
  }
  printf("%d\n", count);

  return 0;
}