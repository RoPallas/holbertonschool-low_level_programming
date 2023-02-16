#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char alpha10;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alpha10 = 'a'; alpha10 <= 'z'; alpha10++)
			_putchar(alpha10);
		_putchar('\n');
		alpha10 = 'a';
	}
}
