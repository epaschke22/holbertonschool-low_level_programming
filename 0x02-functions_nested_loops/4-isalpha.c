/**
 * main - _isalpha returns 1 if argument is a letter, else 0
 * Return: always 0.
 */
#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
