#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _strcmp(char *s1, char *s2);
int execute(char **cmd);
int exit_func(char command);
int _strlen(char *s);
int _getenv(void);

#endif

