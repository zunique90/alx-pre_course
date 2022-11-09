#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	int i;
	int status;
	pid_t my_pid;
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error");
			return (1);
		}
		if (child_pid == 0)
		{
			my_pid = getpid();
			printf("my pid is %u\n", my_pid);

			if (execve(argv[0], argv, NULL) == -1)
				perror("error");
		}
		else
		{
			wait(&status);
			my_pid = getpid();
			printf("my pid is: %u\n", my_pid);
		}
	}
	return (0);

}
