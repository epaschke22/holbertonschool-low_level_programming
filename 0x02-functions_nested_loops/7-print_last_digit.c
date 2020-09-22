#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: is the whole number to check last digit.
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int result = abs(n % 10);

	_putchar('0' + result);
	return (result);
}
