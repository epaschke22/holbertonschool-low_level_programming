/**
 * main - prints 0 or 1 for if r is a lower case letter.
 * Return: always 0.
 */
#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
