#include "shell.h"

/**
 * get_path - looks for files in the current PATH
 * @file: file
 *
 * Return: the file path if found, or NULL
 */
char *get_path(char *file)
{
	char *path_env = getenv("PATH");
	char *path, file_path[MAX_PATH_LEN];

	if (path_env == NULL)
	{
		return (NULL);
	}
	path = strtok(path_env, ":");
	while (path)
	{
		sprintf(file_path, "%s/%s", path, file);
		if (access(file_path, F_OK) == 0)
			return (file_path);
		path = strtok(NULL, ":");
	}
	return (NULL);
}
