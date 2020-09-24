#include "holberton.h"
/**
 * print_line - prints a line of underscores based on n.
 * @n: number of _
 * Return: always 0.
 */

void print_line(int n)
{
	int line;

       	for (line = 0; line < n; line++)
       		_putchar('_');
	_putchar('\n');
}
