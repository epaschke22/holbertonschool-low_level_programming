#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees up memory of a 2d array.
 * @grid: 2d array input.
 * @height: number of rows.
 * Return: always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height == 0)
		return (NULL);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		free(grid[i]);
}
