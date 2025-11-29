#include <stdio.h>
#include <string.h>
int main()
{
 char str[100], rev[100];
 printf("Enter a string: ");
 gets(str);
 strcpy(rev, str); // Copy original string to rev
 strrev(rev); // Reverse the string
 if (strcmp(str, rev) == 0)
 printf("It is a palindrome\n");
 else
 printf("Not a palindrome\n");
 return 0;
}
