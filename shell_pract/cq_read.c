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
		/* write(STDOUT_FILENO, "\n", 1); */
		exit(0);
	}

	exit(EXIT_SUCCESS);

	return (line);
}
