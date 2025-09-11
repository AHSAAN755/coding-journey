#include<stdio.h>

char board [3][3];

void initializeboard()
{
	// make the blank board
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		board[i][j] = ' ';
	}
}

void printboard()
{
	//print the blank board
	printf("\n");
	printf("\n   1   2   3\n"); // column numbers
	for(int i = 0; i < 3; i++)
	{
		printf("%d %c | %c | %c \n",i,board[i][0], board[i][1], board[i][2]);
		 if(i<2)
		printf("--|---|--\n");
	}
	printf("\n");
}

char checkwinner()
{
	for(int i = 0; i < 3; i++)
	{
		// check rows and columns
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
		
	}
	// check diagonals
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
		
	return ' '; // no winner yet
}

int isboardfull()
{
	// to check if the board is full
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0; j < 3; j++)
		{
		if(board[i][j] == ' ')
		return 0;// is not full
		}
	}
	return 1;// is full
}

int main()
{
	int row,col;
	char currentplayer = 'X';
	char winner = ' ';
	
	initializeboard();
	
	printf("Welcome To Tic Tac Toe!");
	printboard();
	
	while(winner == ' ' && !isboardfull())
	{
		printf("player %c enter row and column(0,1,2): \n",currentplayer);
		scanf("%d %d", &row, &col);

		// convert 1–3 to 0–2
        row--; 
        col--;

		// check if move is vlaid
		if(row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ')
		{
		board[row][col] = currentplayer;
		printboard();
		
		// check winner
		winner = checkwinner();
		
		//switch player
		currentplayer = (currentplayer == 'X') ? 'O' : 'X';
		
		} 
		else 
		{
			printf("Invalid move! Try again\n");
		}
	}
	
	if (winner != ' ')
		{
		printf("player %c wins \n",winner);
		}
	else
	{
		printf("It is a draw!");
	}
	
	return 0;
}




