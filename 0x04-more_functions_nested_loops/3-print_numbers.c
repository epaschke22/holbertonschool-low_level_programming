#include "holberton.h"
/**
 * print_numbers - prints out all numbers from string.
 * Return: always 0.
 */

void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		_putchar(number);
	_putchar('\n');
}
