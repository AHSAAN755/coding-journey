#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int dice;
	char choice ;
	
	srand(time(0));
	
	printf("Welcome to the dice rolling Game!\n");
	 printf("Press ENTER to roll the dice.\n");
    printf("Type any letter then press ENTER to quit.\n");

    while (1) {
        choice = getchar();   // wait for user input

        if (choice == '\n') {   // ENTER pressed
            dice = (rand() % 6) + 1;
            printf("You rolled: %d\n", dice);
        } else {   // any other character
            break;
        }
    }

    printf("\nThanks for playing!\n");
    return 0;
}
