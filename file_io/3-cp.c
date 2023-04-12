#include "main.h"
#include <errno.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of args
 * @argv: args, file_from and file_to
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from, n_write, n_read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((n_read = read(fd_from, buffer, 1024)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write != n_read || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n_read == -1 || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
