#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int main()
{
	char letter, guess;
	int attempts=0, max_attempts=8 ;
	
	srand(time(0));
	
	letter = 'A' + (rand() %26);
	
    printf("=== Guess the Letter Game ===\n");
    printf("You have to chosen a letter between A and Z.\n");
    printf("You have %d attempts. Good luck!\n", max_attempts);
	
	do 
	 {
        printf("\nEnter your guess: ");
        scanf(" %c", &guess);   

        guess = toupper(guess); 
        attempts++;

        if (guess == letter) {
            printf("Correct! The letter was %c.\n", letter);
            printf("You guessed it in %d attempts.\n", attempts);
            return 0; 
        } else if (guess > letter) {
            printf("Too high! Try a letter earlier in the alphabet.\n");
        } else {
            printf("Too low! Try a letter later in the alphabet.\n");
        }

    } while (attempts < max_attempts);

    printf("\n? Out of attempts! The correct letter was %c.\n", letter);

    return 0;
}

