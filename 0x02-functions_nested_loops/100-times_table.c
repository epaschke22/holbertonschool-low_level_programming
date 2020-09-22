#include "holberton.h"
/**
 * print_times_table - prints the times tables for number between 1 and 15.
 * @number: the number of the times table
 * Return: Always 0.
 */
void print_times_table(int number)
{
	int times1;
	int times2;
	int product;
	int middle;

	if (number >= 0 && number <= 15)
		for (times1 = 0; times1 <= number; times1++)
		{
			for (times2 = 0; times2 <= number; times2++)
			{
				product = times1 * times2;
				if (times2 == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					middle = (product / 10) % 10;
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar(middle + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
