#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes to considerate
 *
 * Return: the number of bytes in the initial segment of s
 * wich consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, slen = 0, alen = 0, equal = 0;
	unsigned int n = 0;

	while (s[slen] != '\0')
	{
		slen++;
	}
	while (accept[alen] != '\0')
	{
		alen++;
	}
	for (i = 0; i <= slen; i++)
	{
		for (j = 0; j <= alen; j++)
		{
			if (s[i] == accept[j])
			{
				equal = 1;
				n++;
			}
		}
		if (equal == 0)
			break;
		equal = 0;
	}
	return (n);
}
