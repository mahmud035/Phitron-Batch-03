#include <stdio.h>

int main()
{
  // 1. Initialising Strings:

  /*

   char name[] = {'P', 'A', 'V', 'E', 'L', '\0'};
   char name[] = "PAVEL";

   char city[] = {'G', 'O', 'P', 'A', 'L', 'G', 'A', 'N', 'J', '\0'};
   char city[] = "GOPALGANJ";

  */

  // 2. Practice Qs.(47)

  /*

    void printString(char arr[]);

    char firstName[] = "Mahamudul";
    char lastName[] = "Hasan";

    printString(firstName);
    printString(lastName);

  */

  // 3. String Format Specifier

  /*

    char name[50];
    scanf("%s", name);
    printf("Your name is: %s", name);

    // char name[] = "PAVEL";
    // printf("%s", name);

  */

  // 4. Practice Qs.(48)

  /*

    // char firstName[50];
    // scanf("%s", firstName);
    // printf("Your firstName is: %s", firstName);

    char fullName[100];
    // gets(fullName);
    fgets(fullName, 100, stdin);
    puts(fullName);

  */

  return 0;
}

// void printString(char arr[])
// {
//   for (int i = 0; arr[i] != '\0'; i++)
//   {
//     printf("%c", arr[i]);
//   }
//   printf("\n");
// }