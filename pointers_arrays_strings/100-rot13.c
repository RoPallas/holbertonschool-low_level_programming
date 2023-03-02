#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 *
 * Return: pointer to string
 */
char *rot13(char *s)
{
	int i, j;
	char az[53] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char nm[53] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == az[j])
			{
				s[i] = nm[j];
				break;
			}
		}
	}
	return (s);
}
