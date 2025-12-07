//Write a C Program to read and display string at Runtime
/*
using scanf
using gets*/
#include <stdio.h>
#include <string.h>
int main()
{
	char s[200];
	char s1[200];
	char s2[200];
	scanf("%s",&s);
//	scanf("%[^\n]s",s1);
	gets(s2);
	printf("%s",s);
//	printf("%s",s1);
	puts(s2);
	return 0;
}
/*
input
hello world
hello world
output
hello
hello world
*/
