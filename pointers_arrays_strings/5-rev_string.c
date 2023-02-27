#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int i = 0, strlen = 0, c;
	char a;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}
	c = strlen;
	i = 0;
	while (c >= strlen / 2 && i <= strlen / 2)
	{
		a = s[i];
		s[i] = s[c - 1];
		s[c] = a;
		c--;
		i++;
	}
}
