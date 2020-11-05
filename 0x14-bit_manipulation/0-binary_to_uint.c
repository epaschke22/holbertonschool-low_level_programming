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
	unsigned int power = 1, number = 0;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);
	len--;
	for (; len >= 0; len--)
	{
		if (b[len] == '1')
			number += power;
		power *= 2;
	}
	return (number);
}
