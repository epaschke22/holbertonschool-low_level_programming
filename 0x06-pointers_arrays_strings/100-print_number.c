#include "holberton.h"
/**
 * print_number - prints out a number.
 * @n: input.
 * Return: always 0
 */

void print_number(int n)
{
	int place = 1;
	int intmin = 0;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			n++;
			intmin++;
		}
		n = n * -1;
		_putchar('-');
	}
	while (n / place >= 10)
		place *= 10;
	while (place != 0)
	{
		if (intmin == 1 && place == 1)
			_putchar((n / place) % 10 + 1 + '0');
		else
			_putchar((n / place) % 10 + '0');
		place /= 10;
	}
}
