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
	unsigned int count = 0, blen = 0;
	unsigned long int tn;

	tn = n;
	if (n == 0)
		return (0);
	while (tn > 0)
	{
		tn = tn >> 1;
		blen++;
	}
	if (index > blen)
		return (-1);
	while (index > count)
	{
		n = n >> 1;
		count++;
	}
	return (n & 1);
}
