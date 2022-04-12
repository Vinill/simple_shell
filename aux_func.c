#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: string
* Return: length of s
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

/**
* _strcmp - compares two strings.
* @s1: first string
* @s2: second string
* Description: show "0" if the two values are equal
* Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int cont, val;

	cont = 0;
	while (s1[cont] == s2[cont] && s1[cont] != '\0')
		cont++;

	val = s1[cont] - s2[cont];
	return (val);
}

/**
* _getenv - prints the current environment
* Return: Always 0 (Success)
*/

int _getenv(void)

{


	unsigned int i;
	unsigned int j = 0;

	for (i = 0; environ[i] != NULL; i++)



	{
		write(1, environ[j], _strlen(environ[j]));
		_putchar('\n');
		j++;
	}
	return (0);
}

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
