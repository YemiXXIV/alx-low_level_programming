#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers.
 *@width: The width (number of columns) of the grid
 *@height: The height (number of rows) of the grid
 *
 * Return: A pointer to the 2-dimensional array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = (int **)malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = (int *)malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(g[j]);
			free(g);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
