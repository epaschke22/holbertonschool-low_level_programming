#include "holberton.h"
/**
 * print_diagonal - prints out a diagonal line based on n.
 * @n: the length of the line.
 * Return: always 0.
 */

void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
