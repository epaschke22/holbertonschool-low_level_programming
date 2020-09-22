#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints out all numbers in order to 98 pos or neg.
 * @n: starting number away from 98.
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("98\n");
}
