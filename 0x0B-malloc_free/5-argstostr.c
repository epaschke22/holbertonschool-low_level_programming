#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - returns string length.
 * @s: input string pointer.
 * Return: int of length.
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i]; i++)
		length++;
	return (length);
}

/**
 * _strcpy - copies the string pointed to by src.
 * @dest: destination of the copied string.
 * @src: the source of the string to be copied.
 * Return: return destination.
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
 * _strcat - concatenates 2 strings
 * @dest: the combined output of both strings.
 * @src: the string to be combined.
 * Return: returns the combined strings.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	for (i = 0 ; dest[i] != '\0'; i++)
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	return (dest);
}

/**
 * argtostr - concatenates all arguments into a string.
 * @ac: argument count.
 * @av: argument strings.
 * Return: always 0
 */
char *argstostr(int ac, char **av)
{
	int i, totallen = 0;
	char *ar, *s, *n;

	n = "\n";

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		totallen += (_strlen(av[i]) + 1);
	ar = malloc((totallen + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = _strcat(av[i], n);
		_strcat(ar, s);
	}
	return (ar);
}
