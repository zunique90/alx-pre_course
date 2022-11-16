#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <signal.h>
#include <fcntl.h>

extern char **environ

char **cq_tokenize(char *line);
char *cq_read(void);
int cq_exec(char **argv);
int _strlen(char *s);
char *_getenv(const char *name);
int _env(void);
void _puts(char *str);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);

#endif /* MAIN_H */
