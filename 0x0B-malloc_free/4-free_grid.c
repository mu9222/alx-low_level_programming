#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that rfrees a 2 dimensional grid.
 * previously created by your alloc_grid functio
 * @grid: width of array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
