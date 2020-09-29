#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 * Return: always 0
 */

void rev_string(char *s)
{
	char temp;
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	length--;
	i = 0;
	while (i <= length)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		i++;
		length--;
	}
}
