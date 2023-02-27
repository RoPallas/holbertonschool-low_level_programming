#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *p;

	for (i = 0; src[i] >= 0; i++)
		dest[i] = src[i];
	p = dest;
	return (p);
}
