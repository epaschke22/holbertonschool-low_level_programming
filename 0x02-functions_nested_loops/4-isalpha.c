#include "holberton.h"
/**
 * _isalpha - _isalpha returns 1 if argument is a letter, else 0
 * @c: is argument to check for if alphabet.
 * Return: always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
