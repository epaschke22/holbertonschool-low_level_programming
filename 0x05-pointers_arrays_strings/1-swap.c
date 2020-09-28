#include "holberton.h"
/**
 * swap_int - swaps the value of 2 ints with pointers.
 * @a: first number to swap
 * @b: second number to swap
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int tempval = *a;
	*a = *b;
	*b = tempval;
}
