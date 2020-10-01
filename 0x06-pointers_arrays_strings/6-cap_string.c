#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to capitalize.
 * Return: always 0
 */

char *cap_string(char *s)
{
	int i, j;
	char ends[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -=32;

	for (i = 0; s[i] != 0; i++)
		for (j = 0; ends[j] != 0; j++)
			if (s[i - 1] == ends[j])
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
	return (s);
}
