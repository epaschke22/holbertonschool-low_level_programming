#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a string of 1s and 0s to a decimal
 * @b: input string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned long int i, power = 1, number = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		power *= 2;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i]; i++)
	{
		power /= 2;
		if (b[i] == '1')
			number += power;
	}
	return (number);
}
