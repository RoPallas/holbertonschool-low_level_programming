#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The character to evaluate
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld >= 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar((ld * -1) + '0');
		return (ld * -1);
	}
}
