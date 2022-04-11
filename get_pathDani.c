#include "main.h"
/**
 * get_path - Function that gets the path of a variable
 */

char *get_path(char *command)
{
        char *path, *value, *var, *var2;
        struct stat st;
        path = get_env("PATH");
        value = strtok(path, ":");
        while (value != NULL)
        {
                var = strcat(value, "/");
                var2 = strcat(var, command);
                if (stat(var2, &st) == 0)
                {
                        free(var);
                        free(path);
                        return (var2);
                }
                value = strtok(NULL, ":");
                free(var2);
        }
        free(var);
        free(path);
        return (NULL);
}