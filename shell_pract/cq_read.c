#include "main.h"

char *cq_read(void)
{
	char *line = NULL;
	size_t len = 0;

	while (getline(&line, &len, stdin) != -1)
	{
		return (line);
	}

	exit(EXIT_SUCCESS);

	return (line);
}
