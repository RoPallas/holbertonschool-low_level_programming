#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, m = 1;

	while (n <= 98)
	{
		while (m <= 99)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
		m = n + 1;
	}
	putchar('\n');
	return (0);
}
