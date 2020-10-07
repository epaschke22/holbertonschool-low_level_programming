#include "holberton.h"
/**
 * _strlen_recurtion - returns the length of a string.
 * @s: input string.
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s++)
		return (1 + _strlen_recursion(s));
	else
		return (0);
}
