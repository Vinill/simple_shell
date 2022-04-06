#include "main.h"

/**
 * _strcmp - Codigo que compara dos valores
 *@s1: Primer valor
 *@s2: Segundo valor
 *Return: Return values
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
		return (*s1 - *s2);
}
