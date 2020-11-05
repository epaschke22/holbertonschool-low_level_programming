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
	unsigned int count = 0;

	if (n == 0)
		return (0);
	while (index > count)
	{
		if (n == 0)
			return (-1);
		n = n >> 1;
		count++;
	}
	return (n & 1);
}
