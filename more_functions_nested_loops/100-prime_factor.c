#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143, div = 2, maxFactor;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			maxFactor = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxFactor);
				break;
			}
		}
	}
	return (0);
}
