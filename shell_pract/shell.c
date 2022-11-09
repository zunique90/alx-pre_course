#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	while (true)
	{
		printf("$ ");
		char *line = cq_read();
		char **tokens = cq_tokenize(line);

		if (tokens[0] != NULL)
			cq_exec(tokens);
		free(tokens);
		free(line);
	}

	return (0);
}
