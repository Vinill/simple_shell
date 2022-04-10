#include "main.h"
#include <stdio.h>

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
	int val, cont = 0;

	while (s1[cont] == s2[cont] && s1[cont] != '\0')
		cont++;

	val = s1[cont] - s2[cont];
	return (val);
}

/**
 * _getenv -  function that prints the current environment
 * env - prints the current environment
 * s: environment
 * Return: Always 0 (Success)
*/

int print_env(void)
{
	extern char **environ;
	char **s = environ;

	for (; *s; s++)
		printf("%s\n", *s);
	return (0);
}
