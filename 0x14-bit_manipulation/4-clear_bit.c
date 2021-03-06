#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * clear_bit - sets bit to 1 at index
 * @n: number to look in
 * @index: index to check in n
 * Return: 1 if worked, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int idx = 1 << index;

	if (index > 63)
		return (-1);
	*n = (*n & ~idx) | ((0 << index) & idx);
	return (1);
}
