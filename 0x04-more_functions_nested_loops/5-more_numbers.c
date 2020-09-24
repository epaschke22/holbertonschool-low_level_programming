#include "holberton.h"
/**
 * more_numbers - prints out numbers 0 to 14 ten times.
 * Return: always 0.
 */

void more_numbers(void)
{
	int number, i;

	for (i = 0; i < 10; i++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number < 10)
				_putchar(number + '0');
			else
			{
				_putchar(number / 10 + '0');
				_putchar(number % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
