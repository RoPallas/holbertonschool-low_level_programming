#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of intergers
 * @min: start
 * @max: end
 *
 * Return: on succes a pointer, else NULL
 *
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		a[i] = min + i;
	return (a);
}
