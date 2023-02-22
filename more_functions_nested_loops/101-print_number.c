#include "main.h"

/**
 * print_number - print an interger
 * @n: the interger to print
 */
void print_number(int n)
{
	int d = 1, f = 1, num = n;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	while (f == 1)
	{
		if (num / (d * 10) > 0)
			d *= 10;
		else
			f = 0;
	}
	while (f == 0)
	{
		if (d == 1)
		{
			_putchar(num % 10 + '0');
			f = 1;
		}
		else
		{
			_putchar((num / d) % 10 + '0');
			d /= 10;
		}
	}
}
