#include "main.h"

int cq_exec(char **argv)
{
	int i, status, exitstat;

	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error");
		exit(1);
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror(argv[0]);
			for (i = 0; argv[i]; i++)
				free(argv[i]);
			free(argv);
			exit(127);
		}
	}
	wait(&status);

	if (WIFEXITED(status))
		exitstat = WEXITSTATUS(status);

	return (exitstat);
}
