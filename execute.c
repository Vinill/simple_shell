#include "main.h"
#include <errno.h>
/**
 * execute - Function in charge of looking for a given command,
 * if it finds it, it 'forks' it and executes it.
 * @cmd: given command.
 * Return: If the execute function works correctly, 0 will be returned.
 */

int execute(char **cmd)
{
	pid_t child_pid;
	int status = 0;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error");
		return (1);
	}
	else if (child_pid == 0)
	{
		if (execve(cmd[0], cmd, NULL) == -1)
		{
			perror("Error");
			exit(-1);
		}
	}
	else
		wait(&status);
	return (WEXITSTATUS(status));
}
