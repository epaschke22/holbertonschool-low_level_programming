#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - re allocates memory blocks
 * @ptr: input pointer
 * @old_size: input pointer size
 * @new_size: new output size
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *temp, *p = ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	in (new_size < old_size)
		old_size = new_size;

	temp = malloc(new_size);

	for (i = 0; i < old_size; i++)
		temp[i] = p[i];
	free(ptr);
	return (temp);
}
