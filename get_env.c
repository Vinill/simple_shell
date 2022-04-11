#include "main.h"

/**
* get_env - prints the current environment
<<<<<<< HEAD
*
* @name: Var of type char
=======
* @name : comando recibido
*
>>>>>>> f8764393015552d595979be8585509591da13d84
*
* Return: Always 0 (Success)
*/



char *get_env(const char *name)

{
	int i = 0;
	char *var = NULL, *val = NULL, *res;

	while (environ[i] != NULL)

		{
		var = strdup(environ[i]);
		res = strtok(var, "="); /**Separar el nombre de var del valor*/
		if (strcmp(res, name) == 0) /**Se encontro el nombre var*/
			{
			res = strtok(NULL, "=");
			val = strdup(res);
			free(var);
			return (val); /**Devolver solo el valor de var */
			}
		free(var); /** No se encontro el nombre*/
		i++;
}
return (NULL);
}
