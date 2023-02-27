#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string
 *
 */
void print_rev(char *s)
{
	int i = 0, strlen = 0, c;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}
	c = strlen;
	while (c >= 0)
	{
		_putchar(s[c - 1]);
		c--;
	}
	_putchar('\n');
}
