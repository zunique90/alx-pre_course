#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char *line = NULL;
	char **tokens = NULL;
	while (1)
	{
		printf("$ ");
		line = cq_read();
		tokens = cq_tokenize(line);

		if (tokens[0] != NULL)
			cq_exec(tokens);
		free(tokens);
		free(line);
	}
}
