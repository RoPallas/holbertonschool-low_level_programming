#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: the bytes accepted
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, e = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				e = 1;
				break;
			}
		}
		if (e == 1)
			break;
	}
	if (e == 1)
		return (s += i);
	else
		return (NULL);
}
