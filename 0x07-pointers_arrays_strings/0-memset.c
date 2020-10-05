#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: adress
 * @b: constant
 * @n: number of bytes
 * Return: new s value.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
