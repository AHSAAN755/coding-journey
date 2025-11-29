#include <stdio.h>

int main() {
    char s[100], ch;
    int i, position = -1;
    
    printf("Enter the string: ");
    gets(s);

    printf("Enter the character to find: ");
    scanf("%c", &ch);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            position = i;
            break;
        }
    }

    printf("%d\n", position+1);

    return 0;
}

