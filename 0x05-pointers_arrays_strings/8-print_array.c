#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints out each element of an array in order.
 * @a: the array.
 * @n: length of array.
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
