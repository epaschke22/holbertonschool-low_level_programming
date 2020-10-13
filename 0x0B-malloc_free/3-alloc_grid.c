#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2d array of ints.
 * @width: input width.
 * @height: input hieght.
 * Return: pointer in array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
			if (grid[i] == 0)
			{
				return (NULL);
			}
		}
	}

	return (grid);
}
