#include "holberton.h"
/**
 * _strlen - returns string length.
 * @s: string to calculate.
 * Return: always 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
