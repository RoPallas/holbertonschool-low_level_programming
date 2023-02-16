#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char revAlph = 'z';

	while (revAlph >= 'a')
	{
		putchar(revAlph);
		revAlph--;
	}
	putchar('\n');
	return (0);
}
