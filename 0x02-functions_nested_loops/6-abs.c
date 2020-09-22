#include "holberton.h"
/**
 * _abs - converts int into a positive number if negative.
 * @n: is the number to check.
 * Return: always 0.
 */

int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n - n * 2;
	}
	else if (n > 0)
	{
		result = n;
	}
	else
	{
		result = 0;
	}
	return (result);
}
