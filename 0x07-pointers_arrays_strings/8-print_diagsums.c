#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints out a sum of numbers from both diagonal directions.
 * @a: array to take data from
 * @size: size of array.
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0, i;

	for (i = 0; i < size * size; i += (size + 1))
		diag1 += a[i];
	for (i = size * (size - 1); i > 0; i -= (size - 1))
		diag2 += a[i];
	printf("%d, %d\n", diag1, diag2);
}
