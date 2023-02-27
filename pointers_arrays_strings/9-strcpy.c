#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest: destination
 * @src: string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *p = dest;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (p);
}
