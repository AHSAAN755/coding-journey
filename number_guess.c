#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num_to_guess,user_guess,attempts=0;
	int max_attempts=50;
	
	srand(time(0));
	
	num_to_guess = (rand() % 1000) + 1;
	
	printf("Welcome to the Number Guessing Game!\n");
	
	while(1)
	{
		printf("enter your guess(1-1000): ");
		scanf("%d",&user_guess);
		attempts++;
		
		if(user_guess == num_to_guess)
		{
			printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
			break;
		}
		
		else if(user_guess < num_to_guess)
	     { 
		 printf("Too low. Try again.\n"); 
		 }
		 
		else
		{
		    printf("Too high. Try again.\n"); 
		}
		
		if (attempts >= max_attempts) {
            printf("Sorry, you've run out of attempts. The number was %d.\n", num_to_guess);
            break;
        }
    }

    return 0;
}
