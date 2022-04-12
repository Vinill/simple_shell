#include "main.h"

/**
 * func_exit - simple and basic shell
 * Return: 1
* @av: char
* @num: int
 */

int func_exit(char *av, int num)
{
	char *s = "exit";
	int i = 0;

	for (; av[i] > 96 && av[i] < 123 && av[i] == s[i]; i++)
		;
	if (i == 4)
	{
		free(av);
		if (num == 512)
			exit(2);
		else
			exit(num);
	}
	return (1);
}
