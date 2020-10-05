#include "holberton.h"
/**
 * _strstr - finds string within another string.
 * @haystack: the string to look through.
 * @needle: the string to return.
 * Return: pointer of substring in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int counter1, counter2, counter3 = 0, place;

	if (needle == '\0')
		return (haystack);
	for (counter1 = 0; haystack[counter1]; counter1++)
	{
		if (haystack[counter1] == needle[0])
		{
			place = counter1;
			counter3 = counter1;
			for (counter2 = 0; needle[counter2]; counter2++)
				if (needle[counter2] == haystack[counter3])
				{
					counter3++;
				}
				else
				{
					counter3 = 0;
				}
		}
	}
	if (counter3 > 0)
		return (haystack + place);
	return (0);
}
