#include <stdio.h>

char *cq_read(void)
{
	char *line = NULL;
	size_t len = 0;

	getline(&line, &len, stdin);

	return (line);
}
