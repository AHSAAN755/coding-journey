//To copy one string into another string without strcpy()
#include <stdio.h>
#include <string.h>

int main ()
{
    char s1[20], s2[20];
    int i;

    printf("Enter source string s1\n");
    gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';

    printf("Target String s2\n");
    puts(s2);
}

