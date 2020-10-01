#include "holberton.h"
/**
 * reverse_array - reverses an array.
 * @a: the array to reverse.
 * @n: the number of elemtns in the array.
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i <= n / 2; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
