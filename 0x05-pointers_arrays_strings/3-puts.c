#include "holberton.h"
/**
 * _puts - prints out string.
 * @str: string to calculate.
 * Return: always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
