#include "main.h"

/**
 * print_times_table - print the n times tables
 * @n: number of tables
 *
 */
void print_times_table(int n)
{
	int f = 0, c = 0, fc;

	if (n < 15 && n > 0)
	{
		while (f <= n)
		{
			while (c <= n)
			{
				fc = f * c;
				if (fc <= 9 && c != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(fc + '0');
				}
				else if (c == 0)
				{
					_putchar(fc + '0');
				}
				else if (fc >= 10 && fc <= 99)
				{
					_putchar(' ');
					_putchar(fc / 10 + '0');
					_putchar(fc % 10 + '0');
				}
				else
				{
					_putchar(fc / 100 + '0');
					_putchar((fc % 100) / 10 + '0');
					_putchar(fc % 10 + '0');
				}
				if (c != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				c++;
			}
			c = 0;
			f++;
			_putchar('\n');
		}
	}
}
