#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * set_bit - sets bit to 1 at index
 * @n: number to look in
 * @index: index to check in n
 * Return: 1 if worked, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
