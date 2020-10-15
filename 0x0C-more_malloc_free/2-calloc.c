#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - acclocates memory for an array.
 * @nmemb: array size
 * @size: memory size
 * Return: pointer to array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	return (ar);
}
