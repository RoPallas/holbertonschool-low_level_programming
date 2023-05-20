#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	if (!array)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		m = l + (r - l) / 2;
		if (value == array[m])
			return (m);
		else if (value < array[m])
			r = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @l: left limit
 * @r: right limit
 *
 */
void print_array(const int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");
	i = l;
	while (array && i <= r)
	{
		if (i > l)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
