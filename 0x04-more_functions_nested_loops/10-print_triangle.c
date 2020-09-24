#include "holberton.h"
/**
 * print_triangle - makes a triangle from rows of # desending.
 * @size: is the number of rows and collums to print the triangle.
 * Return: always 0
 */

void print_triangle(int size)
{
	int height;
	int length;
	int space;

	for (height = 1; height <= size; height++)
	{
		for (space = 0; space < size - height; space++)
			_putchar(' ');
		for (length = 0; length < height; length++)
			_putchar('#');
		_putchar('\n');

	}
}
