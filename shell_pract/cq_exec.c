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
			perror("cqsh");
	}
	else
		wait(&status);

}
