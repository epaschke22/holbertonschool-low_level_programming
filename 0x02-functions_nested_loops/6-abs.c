/**
 * main - checks holbeton header for _abs function
 * Return: always 0.
 */
#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
