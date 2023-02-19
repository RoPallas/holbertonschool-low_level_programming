#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 0, b = 1, i, f;

	for (i = 0; i < 50; i++)
	{
		f = a + b;
		printf("%ld, ", f);
		a = b;
		b = f;
	}
	putchar('\n');
	return (0);
}
