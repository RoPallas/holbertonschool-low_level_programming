#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int n, m, nm;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			nm = n * m;
			if (nm <= 9)
			{
				if (m != 0)
				{
					_putchar(' ');
				}
				_putchar(nm + '0');
			}
			else
			{
				_putchar(nm / 10 + '0');
				_putchar(nm % 10 + '0');
			}
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
