#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array: array
 * @size: size of array
 * @action: a pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
