#include "holberton.h"
/**
 * factorial - returns factorial of a given number.
 * @n: number input.
 * Return: facortial of n, -1 if bellow 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
