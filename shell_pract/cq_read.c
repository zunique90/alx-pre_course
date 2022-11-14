#include "main.h"

char *cq_read(void)
{
	char *line = NULL;
	size_t len = 0;
	int i;

	i = getline(&line, &len, stdin);

	if (i != -1)
		return (line);
	else
	{
		printf("\n");
		exit(0);
	}

	exit(EXIT_SUCCESS);

	return (line);
}
