#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print,
 * or 0 in failiure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_read, letters_write;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	letters_read = read(fd, buffer, letters);
	if (letters_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[letters_read] = '\0';
	letters_write = write(STDOUT_FILENO, buffer, letters_read);
	free(buffer);
	close(fd);
	if (letters_write == -1 || letters_write != letters_read)
		return (0);
	return (letters_read);
}
