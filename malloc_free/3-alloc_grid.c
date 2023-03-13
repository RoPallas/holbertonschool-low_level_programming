#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: of array
 * @height: of array
 *
 * Return: On success a pointer, on failure NULL
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (h = 0; h < width; h++)
			a[i][h] = 0;
	}
	return (a);
}
