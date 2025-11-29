#include <stdio.h>
#include <string.h>
void insertSubstring(char s[], char sub[], int pos)
{
 char t[200];
 strncpy(t, s, pos);
 t[pos] = '\0';
 strcat(t, sub);
 strcat(t, s + pos);
 strcpy(s, t);
}
void deleteChars(char s[], int pos, int count)
{
 char t[200];
 strncpy(t, s, pos);
 t[pos] = '\0';
 strcat(t, s + pos + count);
 strcpy(s, t);
}
int main()
{
 char str[200], sub[100];
 int pos, count;
 printf("Enter main string: ");
 gets(str);
 printf("Enter substring: ");
 gets(sub);
 printf("Insert position: ");
 scanf("%d", &pos);
 insertSubstring(str, sub, pos);
 printf("After insertion: %s\n", str);
 printf("Delete position: ");
 scanf("%d", &pos);
 printf("No. of Characters to delete: ");
 scanf("%d", &count);
 deleteChars(str, pos, count);
 printf("After deletion: %s\n", str);
 return 0;
}
