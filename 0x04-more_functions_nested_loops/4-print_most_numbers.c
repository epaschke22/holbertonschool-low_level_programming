#include "holberton.h"
/**
 * print_most_numbers - prints out all numbers except 2 and 4.
 * Return: always 0.
 */

void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
			continue;
		else
			_putchar(number);
	}
	_putchar('\n');
}
