#include "main.h"

/**
 * print_times_table - print the n times tables
 * @n: number of tables
 *
 */
void print_times_table(int n)
{
	int f, c, fc;

	if (n < 15 && n >= 0)
	{
		for (f = 0; f <= n; f++)
		{
			for (c = 0; c <= n; c++)
			{
				fc = f * c;
				if (fc <= 99 && c != 0)
				{
					_putchar(' ');
					if (fc <= 9)
						_putchar(' ');
					else
						_putchar(fc / 10 + '0');
				}
				if (fc > 99 && c != 0)
				{
					_putchar(fc / 100 + '0');
					_putchar((fc % 10) / 10 + '0');
				}
				_putchar(fc % 10 + '0');
				if (c != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
