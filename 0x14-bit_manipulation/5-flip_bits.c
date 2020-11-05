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
	int a = n ^ m, count;

	for (count = 0; a > 0; count++)
		a &= (a - 1);

	return (count);
}
