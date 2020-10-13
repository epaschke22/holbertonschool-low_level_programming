#include <stdlib.h>
#include "holberton.h"

/**
 * _strcpy - copies one string from another.
 * @dest: result to copy too.
 * @src: string to copy from.
 * Return: the copied pointer string.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, strlen = 0;
	char *ar;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		strlen++;

	ar = malloc((strlen + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	_strcpy(ar, str);

	return (ar);
}
