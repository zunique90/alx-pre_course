#include "main.h"

char *cq_read(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t count = 0;
	int i;


	count = getline(&line, &len, stdin);
	if (count == -1)
	{
		free(line);
		if (isatty(STDIN_FILENO) != 0)
			write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
	if (line[count - 1] == '\n' || line[count - 1] == '\t')
		line[count - 1] = '\0';

	for (i = 0; line[i]; i++)
	{
		if (line[i] == '#' && line[i - 1] == ' ')
		{
			line[i] = '\0';
			break;
		}
	}
	return (line);
}
