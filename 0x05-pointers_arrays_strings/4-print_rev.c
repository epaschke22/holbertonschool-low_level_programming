#include "holberton.h"
/**
 * print_rev - prints the string backwards
 * @s: the string to print backward.
 * Return: always 0
 */

void print_rev(char *s)
{
	int length, i;

	for (i = 1; s[i] != '\0'; i++)
		length++;

	for (; length >= 0; length--)
		_putchar(s[length]);

	_putchar('\n');
}
