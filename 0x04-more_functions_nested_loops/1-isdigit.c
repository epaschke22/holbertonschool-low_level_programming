#include "holberton.h"
/**
 * _isdigit - Returns 1 if number, else 0.
 * @c: is character to check.
 * Return: always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
