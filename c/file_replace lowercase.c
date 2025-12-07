//C program that copies one file to another, replacing all lowercase characters with their uppercase equivalents.

#include <stdio.h>
#include <ctype.h>
int main() {
FILE *source, *target;
char sourceFile[100], targetFile[100], ch;
printf("Enter source file name: ");
scanf("%s", sourceFile);
printf("Enter target file name: ");
scanf("%s", targetFile);
source = fopen(sourceFile, "r");
if (source == NULL) {
printf("Cannot open source file.\n");
return 1;
}
target = fopen(targetFile, "w");
if (target == NULL) {
printf("Cannot open target file.\n");
fclose(source);
return 1;
}
while ((ch = fgetc(source)) != EOF) {
fputc(toupper(ch), target);
}
printf("File copied successfully with all letters in uppercase.\n");
fclose(source); fclose(target);
return 0;
}
