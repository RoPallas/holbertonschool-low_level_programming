#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of triangle
 *
 */
void print_triangle(int size)
{
	int i, j, h, n = size;

	for (i = 0; i < size; i++)
	{
		n--;

		for (j = n ; j > 0; j--)
			_putchar(' ');
		for (h = 0; h <= i; h++)
			_putchar('#');
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
