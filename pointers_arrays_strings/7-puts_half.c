#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 *
 */
void puts_half(char *str)
{
	int i = 0, strlen = 0, n;

	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	if (strlen % 2 == 0)
		n = strlen / 2;
	else
		n = (strlen + 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
