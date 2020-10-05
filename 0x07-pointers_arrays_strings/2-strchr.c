#include "holberton.h"
/**
 * _strchr - finds and returns the character in a string.
 * @s: string to look in.
 * @c: character to look for.
 * Return: pointer to found letter of s.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		if (s[i] == c)
			break;
	return (s + i);

	if (s[i] == 0)
		return (0);
}
