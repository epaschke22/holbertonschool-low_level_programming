#include "holberton.h"
/**
 * _isupper - Returns 1 if c is upper case, else 0.
 * @c: is character to check.
 * Return: always 0.
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
