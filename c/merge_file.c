//C program to merge two files into a third file
#include <stdio.h>
int main()
{
FILE *fp1, *fp2, *fp3;
char ch;
fp1 = fopen("file3.txt", "r");
fp2 = fopen("file4.txt", "r");
fp3 = fopen("merged.txt", "w");
if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
{
printf("Error opening files!\n");
return 1;
}
while ((ch = fgetc(fp1)) != EOF)
{
fputc(ch, fp3);
}
while ((ch = fgetc(fp2)) != EOF)
{
fputc(ch, fp3);
}
printf("Files merged successfully into merged.txt\n");
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}
