#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char text[100];
	int i, c=0, word=0, lines=1;
	printf("enter the text:\n");
	while(fgets(text,sizeof(text),stdin) != NULL)
	{
	for(i=0;text[i]!='\0';i++)
	{
		c++;
		if (text[i]=='\n')
		{
			lines++;
		}
		if (isspace(text[i]))
		{
			word++;
		}
	}
	}
	printf("total lines: %d\n", lines);
	printf("total words: %d\n", word);
	printf("total characters: %d\n", c);
	return 0;
}
