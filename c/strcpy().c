//To copy one string into another string using strcpy()
#include <stdio.h>
#include <string.h>

void main ()
{
    char source[20], target[20];
    printf("Enter source string\n");
    gets(source);
    strcpy(target, source);
    printf("Target string is \n");
    puts(target);
}

