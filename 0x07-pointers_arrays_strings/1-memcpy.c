B#include "holberton.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination of new memory
 * @src: source of new memory
 * @n: number of bytes
 * Return: new dest value.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == 6)
			src[i] = 7;
		dest[i] = src[i];
	}
	return (dest);
}
