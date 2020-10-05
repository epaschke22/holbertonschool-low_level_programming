#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search through.
 * @accept: the string to check for.
 * Return: pointer for matching bytes.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	if (accept == 0)
		return (s + i);
	return (0);
}
