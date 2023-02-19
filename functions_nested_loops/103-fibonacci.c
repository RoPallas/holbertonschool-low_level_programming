#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 0, b = 1, f = 0, p = 0;

	while (f < 4000000)
	{
		f = a + b;
		if (f % 2 == 0)
			p = p + f;
		a = b;
		b = f;
	}
	printf("%ld\n", p);
	return (0);
}
