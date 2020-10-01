#include "holberton.h"
/**
 * reverse_array - reverses an array.
 * @a: the array to reverse.
 * @n: the number of elemtns in the array.
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int tmp, i, end = n - 1;

	for (i = 0; i <= end; i++)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
		end--;
	}
}
