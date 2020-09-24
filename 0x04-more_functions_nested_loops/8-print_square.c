#include "holberton.h"
/**
 * print_square - prints out a grid of # in a square.
 * @n: the size of the grid.
 * Return: always 0.
 */

void print_square(int n)
{
	int length;
	int height;

	if (n > 0)
		for (length = 0; length < n; length++)
		{
			for (height = 0; height < n; height++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
