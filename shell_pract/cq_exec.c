#include "main.h"

void cq_exec(char **argv)
{
	int status;

	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("cqsh");
		exit(1);
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			write(STDERR_FILENO, argv[0], _strlen(argv[0]));
			write(STDERR_FILENO, ": not found\n", 13);
			exit(1);
		}
	}
	else
		wait(&status);

}
