#include "main.h"

/**
 * main - simple and basic shell
 * Return: return the size of the buffer
 */

int main(void)
{
	char *tokens[1024];
	char *buffer = NULL, *token = NULL;
	size_t bufsize = 0;
	int characters;
	int i = 0;

	while (1)
	{
		if (isatty(0)) 
		write(1, "$ ", 2);
		buffer = NULL;
		bufsize = 0;
		characters = getline(&buffer, &bufsize, stdin);
		buffer[_strlen(buffer) - 1] = '\0';
		if (characters == -1)
		{

			break;
		}
		else if (_strcmp(buffer, "exit") == 0) /*exit*/
			break;

		

		i = 0;
		token = strtok(buffer, " \n\t");
		while (token != NULL)
		{
			tokens[i] = token;
			tokens[i + 1] = NULL;

			token = strtok(NULL, " \n\t");
			i++;
		}
		execute(tokens);
		free(token);
	}
	free(buffer);
	return (bufsize);
}

