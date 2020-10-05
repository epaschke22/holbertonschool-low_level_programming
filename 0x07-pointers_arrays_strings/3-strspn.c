#include "holberton.h"
/**
 * _strspn - counts the matching string chars, ends once no matching chars
 * @s: string to search through
 * @accept: the string to check for.
 * Return: count of matching symbols.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, previous = 0, i, j;

	for (i = 0; s[i]; i++)
	{
		previous = count;
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				count++;
		if (count == previous)
			return (count);
	}

	return (count);
}
