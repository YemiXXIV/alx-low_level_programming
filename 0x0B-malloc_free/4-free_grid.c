#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2-dimensional grid.
 * @grid: A double pointer to grid
 * @height: The height of the grid
 *
 * RETURN: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
