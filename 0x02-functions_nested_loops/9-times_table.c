#include "holberton.h"

/**
 * times_table - prints out the times tables for 0 to 9.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int times1;
	int times2;
	int product;

	for (times1 = 0; times1 < 10; times1++)
	{
		for (times2 = 0; times2 < 10; times2++)
		{
			product = times1 * times2;
			if (times2 == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
