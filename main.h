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
int print_env(void);
int main(void);
char *get_env(const char *name);
char *get_path(char *command);

// declare environ as extern
extern char** environ;

#endif
