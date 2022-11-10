#include <string.h>
#include <stdlib.h>

char **cq_tokenize(char *line)
{
	int i = 0;
	int cap = 16;
	char **tokens = malloc(cap * sizeof(char *));

	char *delim = " \t\n\r";
	char *token = strtok(line, delim);

	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		if (i >= cap)
		{
			cap = (int) (cap * 1.5);
			tokens = realloc(tokens, cap * sizeof(char *));
		}
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;

	return (tokens);
}
