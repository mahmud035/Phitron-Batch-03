#include <stdio.h>
#include <string.h>

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

    char firstName[50];
    scanf("%s", firstName);
    printf("Your firstName is: %s", firstName);

    char fullName[100];
    // gets(fullName);
    fgets(fullName, 100, stdin);
    puts(fullName);

  */

  //  5. String using Pointers

  /*

    char *canChange = "Hello World!";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello World!";
    puts(cannotChange);
    // cannotChange = "Hello"; // Error Here

   */

  // 6. Practice QS.(49)

  /*

    char userName[100];
    fgets(userName, 100, stdin);
    int length = strlen(userName);
    printf("%d\n", length);

  */

  // 7.1 Standard Library Functions (strcpy)

  /*

   char str1[] = "Hello";
   char str2[] = "World";
   strcpy(str1, str2);
   puts(str1);

   char newStr[] = "Hello";
   char oldStr[] = "World";
   strcpy(newStr, oldStr);
   puts(newStr);

   */

  // 7.2 Standard Library Functions (strcat)

  /*

    char firstStr[100] = "Hello ";
    char secondStr[] = "World";
    strcat(firstStr, secondStr);
    puts(firstStr);

  */

  // 7.3 Standard Library Functions (strcmp)

  /*

    char firstStr[] = "hello";
    char secondStr[] = "hello";
    printf("%d", strcmp(firstStr, secondStr));

    // char firstStr[] = "Apple";
    // char secondStr[] = "Banana";
    // printf("%d", strcmp(firstStr, secondStr));

    // char firstStr[] = "Banana";
    // char secondStr[] = "Apple";
    // printf("%d", strcmp(firstStr, secondStr));

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