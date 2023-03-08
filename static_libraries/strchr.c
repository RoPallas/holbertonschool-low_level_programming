#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of the character
 * or NULL if is not found
 */
char *_strchr(char *s, char c)
{
	int i, j = 0, lc, ec = 0, strlen = 0;

	while (s[j] != '\0')
	{
		strlen++;
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			lc = i;
			ec = 1;
			break;
		}
	}
	if (ec == 1)
		return (s += lc);
	else
		return (NULL);
}
