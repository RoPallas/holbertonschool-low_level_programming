#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy string
 * @src: original string
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
		j++;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (n > j)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
