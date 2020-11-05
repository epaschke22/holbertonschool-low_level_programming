#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * get_bit - finds the value of a bit at a given index
 * @n: number to look in
 * @index: index to check in n
 * Return: always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (n >> index & 1);
}
