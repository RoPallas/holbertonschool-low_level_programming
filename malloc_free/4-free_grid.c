#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: 2 dimensional grid previusly created
 * @height: of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
