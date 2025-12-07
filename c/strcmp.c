//Compare two strings using strcmp()
#include <stdio.h>
#include<string.h>
void main ()
{
 char s1[20],s2[20] ;
 int k;
 printf("Enter string1\n");
 gets(s1);
 printf("Enter string2\n");
 gets(s2);
 k=strcmp(s1,s2);
 if(k==0)
 printf("strings are equal \n");
 else
 printf("strings are not equal \n");
 }

