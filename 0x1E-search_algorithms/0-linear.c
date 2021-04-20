#include "search_algos.h"

/**
 * linear_search - searches through an array linealy
 * @array: input array
 * @size: size of input array
 * @value: value to search for
 * Return: index where value is stored, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
