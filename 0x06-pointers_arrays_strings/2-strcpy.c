#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: the output of the copied string.
 * @src: the string to be copied.
 * @n: the total bytes to be copied.
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
