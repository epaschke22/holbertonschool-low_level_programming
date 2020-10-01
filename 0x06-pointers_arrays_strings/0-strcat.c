#include "holberton.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: the combined output of both strings.
 * @src: the string to be combined.
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	for (i = 0 ; dest[i] != '\0'; i++)
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	return (dest);
}
