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

	if (width == 0 || height == 0)
		return (NULL);

	grid = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		grid[i] = (int *)malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			grid[i][j] = 0;

	return (grid);
}
