#include "main.h"
/**
 * cq_tokenize - creates an array of tokens from user input
 * @line: pointer to user string
 * Return: pointer to array created
 */
char **cq_tokenize(char *line)
{
	int i = cap = 0
	char **tokens;
	char *delim = " \n";
	char *token;

	cap = _splitstring(line);
	if (!cap)
		return (NULL);

	tokens = malloc((cap + 1) * sizeof(char *));
	if (tokens == NULL)
		exit(1);

	token = strtok(line, delim);
	while (token != NULL)
	{
		tokens[i] = _strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
/**
 *
