#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The character to print
 *
 * Return: 0 and 0 for zero, 1 and + if is greather,
 * -1 and - if is less.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
