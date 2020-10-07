#include "holberton.h"
/**
 * _print_rev_recursion - prints a string backwards followed by a new line.
 * @s: input string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s--);
	}
}
