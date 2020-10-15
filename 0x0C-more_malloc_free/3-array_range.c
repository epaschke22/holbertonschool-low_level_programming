#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of ints from min to max.
 * @min: lowest value.
 * @max: highest value.
 * Return: completed array.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, length = 0;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		length++;

	ar = malloc(length * sizeof(int));
	if (ar == NULL)
	{
		free (ar);
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
