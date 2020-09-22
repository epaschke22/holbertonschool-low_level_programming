#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: is the whole number to check last digit.
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last = n % 10;
	int result;

	if (last < 0)
	{
		result = last - last * 2;
	}
	else if (last > 0)
	{
		result = last;
	}
	else
	{
		result = 0;
	}
	_putchar('0' + result);
	return (result);
}
