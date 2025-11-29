#include <stdio.h>

int main() {
    char c;
    int lines = 0, words = 0, characters = 0;
    int inWord = 0;

    printf("Enter text (Press Ctrl+z to end input):\n");

    while ((c = getchar()) != EOF) {
        characters++;

        // Count lines
        if (c == '\n') {
            lines++;
        }

        // Count words
        if (c == ' ' || c == '\n' || c == '\t') {
            inWord = 0;  // we are outside a word
        } else if (inWord == 0) {
            inWord = 1;  // new word begins
            words++;
        }
    }

    printf("\nLines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);

    return 0;
}

