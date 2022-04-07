#include "main.h"

/**
 * main - simple and basic shell
 * Return: return the size of the buffer
 */

int main(void)
{
	char *tokens[1024];
	char *buffer = NULL, *token = NULL;
	ssize_t bufsize = 0;
	ssize_t characters;
	int i = 0;
	int var;

	while (1)
	{
		printf("$ ");
		characters = getline(&buffer, &bufsize, stdin);
		buffer[strlen(buffer) - 1] = '\0';
		if (characters == -1)
		{
			printf("\n");
			break;
		}
		else if(strcmp(buffer, "exit") == 0) /*exit*/
			break;
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
