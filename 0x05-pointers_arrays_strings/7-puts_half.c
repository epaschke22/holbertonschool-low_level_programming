#include "holberton.h"
/**
 * puts_half - prints out second half of a string.
 * @str: string to calculate.
 * Return: always 0
 */

void puts_half(char *str)
{
	int i, n;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	length--;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2 ;

	for (i = 0; str[i] != '\0'; i++)
		if (i > n)
			_putchar(str[i]);
	_putchar('\n');
}
