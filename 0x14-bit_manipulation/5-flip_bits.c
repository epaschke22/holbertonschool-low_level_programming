#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * flip_bits - finds the number of bits needed to flip to match each other
 * @n: first number input
 * @m: second number input
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
