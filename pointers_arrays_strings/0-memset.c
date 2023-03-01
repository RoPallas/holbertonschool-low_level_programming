#include "main.h"

/**
 * _memset - fills n bytes to the s string with b character.
 * @n: bytes to fill
 * @b: character to use
 * @s: string
 *
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
