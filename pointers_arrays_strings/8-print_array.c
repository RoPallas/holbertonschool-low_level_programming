#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of intergers
 * @a: pointer
 * @n: number of elements to print
 *
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
			printf(", ");
	}
	putchar('\n');
}
