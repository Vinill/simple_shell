#include "main.h"

/**
* char get_path(void)
*
*/

char *get_path(char *command)
{
	char *PATH = getenv("PATH");
	char *cpy = strdup(PATH), *concatenated;
	char *token, *absolute;
	struct stat st;
	token = strtok(cpy, ':');
	concatenated = strncmp("/", fileno);
	while (token != NULL)
	{
		absolute = strncmp(token, concatenated);
		if (stat(absolute, &st) == 0)
		{
			free(PATH);
			free(cpy);
			free(concatenated);
			return (absolute);
		}
		token = strtok(NULL, ':');
		free(absolute);
	}
	free(PATH);
	free(concatenated);
	free(cpy);
	return (NULL);
}
