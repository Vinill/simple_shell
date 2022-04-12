#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

int _strcmp(char *s1, char *s2);
int execute(char **cmd);
int exit_func(char command);
int _strlen(char *s);
int _getenv(void);
char *get_env(const char *name);
int _putchar(char c);
int func_exit(char *av, int num);
#endif

