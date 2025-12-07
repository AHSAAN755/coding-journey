//String comparison without strcmp
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30], str2[30];
    int i=0;
    printf("Enter string1\n");
    gets(str1);
    printf("Enter string2\n");
    gets(str2);
    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }
    if (str1[i] > str2[i])
        printf("str1 > str2");
    else if (str1[i] < str2[i])
        printf("str1 < str2");
    else
        printf("str1 = = str2");
}

