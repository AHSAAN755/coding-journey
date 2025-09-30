#include<stdio.h>
#include<stdlib.h>
#include<time.h>

# define max_len  20 // maximum nuber of sequence

int main()
{
	int sequence[max_len];
	int user[max_len];
	int level = 1,i;
	srand(time(0));// seed random number
	
	printf(" Welcome to the Memory Game!\n");
    printf("You need to remember and re-enter the numbers shown.\n\n");
    
    while(level <= max_len)
    {
    	for(i = 0; i < level; i++)
    	// generate random sequence for this level
    	{
    		sequence[i] = rand() % 10; // random digit 0-9
		}
		 // show sequence
        printf("Level %d: Remember this sequence:\n", level);
        for (i = 0; i < level; i++) {
            printf("%d ", sequence[i]);
        }
		printf("\n");
		
		 // give time to remember (press Enter to continue)
        printf("Press Enter when ready to type...");
        getchar();  // wait for Enter

        // clear screen (not portable, works in Windows/Unix)
        system("cls || clear");
        
        // axk user to re enter sequence
        printf("Now enter the sequence:\n");
        for (i = 0; i < level; i++) 
		{
            scanf("%d", &user[i]);
        }
        
        // check if correct
        int correct = 1;
        for (i = 0; i < level; i++) 
		{
            if (user[i] != sequence[i]) 
			{
                correct = 0;
                break;
        	}
    	}
    	
    	if (correct) 
		{
            printf(" Correct! Moving to next level.\n\n");
            level++;
            getchar(); // consume Enter
        } 
		else 
		{
            printf(" Wrong sequence! Game Over.\n");
            printf("the correct sequence was ");
            {
            	for (int j = 0; j < level; j++)
            	printf("%d ",sequence[j]);
        	}
        	printf("\n");
            printf("You reached Level %d.\n", level);
            break;
        }
    }
     if (level > max_len) 
	{
        printf("?? Congratulations! You completed all levels.\n");
    }

    return 0;
}
