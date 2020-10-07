#include "holberton.h"
/**
 * _puts_recersion - prints a string followed by a new line.
 * @s: input string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
