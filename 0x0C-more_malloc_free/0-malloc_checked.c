#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: btye sisze to allocate.
 * Return: malloc array.
 */
void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		free(ar);
		exit(98);
	}
	return (ar);
}
