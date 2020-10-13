#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creats an array of characters.
 * @size: size of array.
 * @c: char to fill array.
 * Return: new array.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0 || c == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
