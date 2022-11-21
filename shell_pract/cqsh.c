#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int __attribute__((unused))ac, char __attribute__((unused))**av)
{
	char *line = NULL;
	char **tokens = NULL;
	ssize_t count = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			count = write(STDOUT_FILENO, "$ ", 2);
			if (count == -1)
				exit(0);
		}
		line = cq_read();
		tokens = cq_tokenize(line);

		if (tokens[0] != NULL)
			cq_exec(tokens);
		free(tokens);
		free(line);
	}
}
