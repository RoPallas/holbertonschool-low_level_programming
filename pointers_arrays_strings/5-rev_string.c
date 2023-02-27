#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int i = 0, strlen = 0, c, n = 0;
	char a;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}
	c = strlen;
	i = 0;
	while (n < strlen / 2)
	{
		a = s[i];
		s[i] = s[c - 1];
		s[c - 1] = a;
		c--;
		i++;
		n++;
	}
}
