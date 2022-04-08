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
	long int characters;
	int i = 0;


if (isatty (1))
	    fprintf (stdout, "Outputting to a terminal.");
else
	    fprintf (stdout, "Not outputting to a terminal.");

	while (1)
	{
		printf("$ ");
		characters = getline(&buffer, &bufsize, stdin);
		buffer[_strlen(buffer) - 1] = '\0';
		if (characters == - 1)
		{
			printf("\n");
			break;
		}
		else if (_strcmp(buffer, "exit") == 0) /*exit*/
			break;

		else if (_strcmp(buffer, "env") == 0) /*env*/
			_getenv();

		i = 0;

		token = strtok(buffer, " \n");


		while (token != NULL)
		{
			tokens[i] = token;
			tokens[i + 1] = NULL;

			token = strtok(NULL, " ");
			i++;
		}
		execute(tokens);
		free(token);
	}
	free(buffer);
	return (bufsize);
}
