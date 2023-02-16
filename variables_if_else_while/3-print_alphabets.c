#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char loweralph = 'a';
	char upperalph = 'A';

	while (loweralph <= 'z')
	{
		putchar(loweralph);
		loweralph++;
	}
	while (upperalph <= 'Z')
	{
		putchar(upperalph);
		upperalph++;
	}
	putchar('\n');
	return (0);
}
