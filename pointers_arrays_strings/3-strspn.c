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
	int i, j, equal = 0;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
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
