#include "holberton.h"
/**
 * _strcmp - compares 2 strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;

	for (i = 0; s1[i] != 0; i++)
		len1++;
	for (i = 0; s2[i] != 0; i++)
		len2++;

	if (len1 > len2)
		return (15);
	else if (len1 == len2)
		return (0);
	else
		return (-15);
}
