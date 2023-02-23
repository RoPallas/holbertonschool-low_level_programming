#include "main.h"

/**
 * print_number - print an interger
 * @n: the interger to print
 */
void print_number(int n)
{
	int c = 1;
	unsigned int num, d = 1;

	if (n < 0)
	{
		_putchar('-');
		num = (unsigned int)(n * -1);
	}
	else
	{
		num = (unsigned int)n;
	}
	while (c == 1)
	{
		if (num / (d * 10) > 0)
			d *= 10;
		else
			c = 0;
	}
	while (c == 0)
	{
		if (d == 1)
		{
			_putchar(num % 10 + '0');
			c = 1;
		}
		else
		{
			_putchar((num / d) % 10 + '0');
			d /= 10;
		}
	}
}
