#include "holberton.h"
/**
 * string_toupper - converts all lower case to uppercase.
 * @s: string to convert
 * Return: always 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	return (s);
}
