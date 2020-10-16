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
	char *temp, *ptr1 = ptr;

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

	temp = malloc(new_size);
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			temp[i] = ptr1[i];
	else
		for (i = 0; i < new_size; i++)
			temp[i] = ptr1[i];

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
	{
		free(ptr1);
		free(temp);
		return (NULL);
	}

	for (i = 0; i < new_size; i++)
		ptr1[i] = temp[i];
	free(temp);
	return (ptr1);
}
