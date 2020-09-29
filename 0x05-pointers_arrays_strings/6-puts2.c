#include "holberton.h"
/**
 * puts2 - prints out string.
 * @str: string to calculate.
 * Return: always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
