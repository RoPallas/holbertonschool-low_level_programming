#include "main.h"

/**
 * reverse_array - reverses the content of an array of intergers.
 * @a: array
 * @n: number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, b, c = n - 1;

	while (i < n / 2)
	{
		b = a[i];
		a[i] = a[c];
		a[c] = b;
		i++;
		c--;
	}
}
