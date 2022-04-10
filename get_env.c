#include "main.h"

char *get_env(const char *name)
{
	int i;
	size_t l = strlen(name);

	if (!environ || !*name || strchr(name, '=')) 
		return (NULL);

	for (i = 0; environ[i] && (strncmp(name, environ[i], l) || environ[i][l] != '='); i++);

	if (environ[i])
		return (environ[i] + l + 1);
	return (NULL);
}
