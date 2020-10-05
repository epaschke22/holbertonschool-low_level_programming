B#include "holberton.h"
/**
 * _strstr - finds string within another string.
 * @haystack: the string to look through.
 * @needle: the string to return.
 * Return: pointer of substring in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, place;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			place = i;
			k = i;
			for (j = 0; needle[j]; j++)
				if (needle[j] == haystack[k])
				{
					k++;
				}
				else
					place = 0;
		}
	}
	return (haystack + place);
}
