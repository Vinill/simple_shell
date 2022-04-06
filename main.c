#include "main.h"

int main(void)
{
        char *tokens[16], *buffer = NULL, *tok = NULL;
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
		i = 0;
		printf("%s\n",buffer);
		tok = strtok(buffer, " \n");
                while (tok != NULL)
                {
			tokens[i] = tok;
                        tok = strtok(NULL, " ");
			i++;
                }
		execute(tokens);
        }
        free(buffer);
        return (bufsize);
}
