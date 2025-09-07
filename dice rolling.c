#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int dice;
	char choice ;
	
	srand(time(0));
	
	printf("Welcome to the dice rolling Game!\n");
	
	do
	{
		dice = (rand() % 6) + 1;
		printf("you rolled %d \n",dice);
		
		printf("roll again(y/n): \n");
		scanf(" %c",&choice);
    }while(choice == 'y' || choice == 'Y');
    
    printf("Thanks for playing");
    return 0;
}
