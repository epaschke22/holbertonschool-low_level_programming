#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on array
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);

}
