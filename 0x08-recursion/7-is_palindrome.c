#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of string.
 */

int _strlen(char *s)
{
	if (*s++)
		return (1 + _strlen(s));
	else
		return (0);
}

/**
 * bothends - checks both ends of the string's characters;
 * @s: string to reverse.
 * @begin: starting point of string.
 * @end: length of string.
 * Return: 0 if not equal, else 1.
 */
int bothends(int begin, int end, char *s)
{
	if (*s)
	{
		if (s[begin] != s[end])
			return (0);
		bothends(begin + 1, end - 1, s);
	}
	return (1);
}

/**
 * is_palindrome - returns weather s is a palindrone or not.
 * @s: input string.
 * Return: 1 if palindrome else 0.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length == 0)
		return (1);
	return (bothends(0, length - 1, s));
}
