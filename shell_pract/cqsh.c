#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int __attribute__((unused))ac, char __attribute__((unused))**av)
{
	char *line = NULL;
	char **tokens = NULL;

	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);

		line = cq_read();
		tokens = cq_tokenize(line);

		if (tokens[0] != NULL)
			cq_exec(tokens);
		free(tokens);
		free(line);
	}
}
