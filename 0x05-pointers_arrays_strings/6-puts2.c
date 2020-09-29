#include "holberton.h"
/**
 * puts2 - prints out string.
 * @str: string to calculate.
 * Return: always 0
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
