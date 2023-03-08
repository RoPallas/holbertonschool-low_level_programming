#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: principal string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, eq = 0, n, nlen = 0;

	while (needle[nlen] != '\0')
		nlen++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			n = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[j + i] == needle[j])
				{
					eq = 1;
				}
				else
				{
					eq = 0;
					break;
				}
			}
		}
		if (eq == 1)
			break;
	}
	if (nlen == 0)
		return (haystack);
	else if (eq == 1)
		return (haystack += n);
	else
		return (NULL);
}
