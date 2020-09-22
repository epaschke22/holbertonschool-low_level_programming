#include "holberton.h"
/**
 * _islower - prints 0 or 1 for if r is a lower case letter.
 * @c: checks this argument if it is a lowercase letter.
 * Return: always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
