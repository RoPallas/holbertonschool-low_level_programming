#include "shell.h"

/**
 * execute_cmd - executes a command line
 * @args: pointer to pointer to array of command and arguments
 *
 * Return: status
 */
int execute_cmd(char **args)
{
	pid_t pid;
	int status;

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

