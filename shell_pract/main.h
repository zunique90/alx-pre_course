#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

char **cq_tokenize(char *line);
char *cq_read(void);
void cq_exec(char **argv);

#endif /* MAIN_H */