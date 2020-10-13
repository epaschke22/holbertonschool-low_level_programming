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
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: return combined string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int s1len, s2len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1len = _strlen(s1);
	s2len = _strlen(s2);

	ar = malloc(s1len + s2len + 1);

	if (ar == NULL)
		return (NULL);

	_strcpy(ar, s1);
	_strcat(ar, s2);
	return (ar);
}
