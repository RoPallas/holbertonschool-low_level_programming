#include "shell.h"

/**
 * main - UNIX command line interpreter
 * @argv:
 *
 *
 *
 */
int main(void)
{
	char *line;
	size_t len_line = 0;
	ssize_t n_read;
	char **args;
	pid_t pid;
	int status;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			printf("$ ");
		n_read = getline(&line, &len_line, stdin);
		if (n_read < 0)
			return (-1);
		args = tokenize(line);
		if (!args)
			return (-1);
		if (strcmp(args[0], "exit") == 0)
			exit(0);
		pid = fork();
		if (pid == -1)
		{
			perror("fork() error");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			execv(args[0], args);
			perror(args[0]);
			exit(EXIT_FAILURE);
		}
		else
		{
			waitpid(pid, &status, 0);
		}
		free(args);	
	}
	free(line);
	return (0);
}
