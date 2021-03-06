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
	int retorno = 0;

	while (1)
	{
		if (isatty(0))
			write(1, "$ ", 2);
		buffer = NULL;
		bufsize = 0;
		characters = getline(&buffer, &bufsize, stdin);
		if (characters == -1)
			break;
		/* buffer[_strlen(buffer) - 1] = '\0'; */
		token = strtok(buffer, " \n\t");
		if (!token || (_strcmp(token, "exit") == 0))	/*exit*/
			break;
		if (!token || (_strcmp(token, "env") == 0)) /*env*/
			_getenv();

		i = 0;
		while (token != NULL)
		{
			tokens[i] = token;
			tokens[i + 1] = NULL;
			token = strtok(NULL, " \n\t");
			i++;
		}

		retorno = execute(tokens);
		free(buffer);
	}
	free(buffer);
	return (retorno);
}
