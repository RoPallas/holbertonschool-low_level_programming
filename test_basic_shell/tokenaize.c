#include "shell.h"

/**
 * tokenize - Parse line command in tokens
 * @line: command line
 *
 * Return: pointer to pointer to array of tokens
 */
char **tokenize(char *line)
{
	int n_args = 0, i;
	char *line_cpy = strdup(line); 
	char *token;
	char **args;

	if (!line_cpy)
		return (NULL);
	token = strtok(line, " \n");
	while (token)
	{
		n_args++;
		token = strtok(NULL, " \n");
	}
	n_args++;
	args = malloc(sizeof(char *) * n_args);
	if (!args)
		return (NULL);
	token = strtok(line_cpy, " \n");
	for (i = 0; i < n_args - 1 && token != NULL; i++)
	{
		args[i] = strdup(token);
		if (!args[i])
			return (NULL);
		token = strtok(NULL, " \n");
	}
	args[i] = NULL;
	free(line_cpy);
	return (args);
}
