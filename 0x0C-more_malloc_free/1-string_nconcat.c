#include <stdlib.h>
#include "holberton.h"

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
 * _strncat - concatenates 2 strings
 * @dest: the combined output of both strings.
 * @src: the string to be combined.
 * @n: the amoutn of total bytes to combine.
 * Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	for (i = 0 ; dest[i] != '\0'; i++)
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = 0;
	return (dest);
}

/**
 * string_nconcat - concatenates two strings with n btyes of s2.
 * @s1: first string input.
 * @s2: second string input.
 * @n: bytes of s2.
 * Return: return combined string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int s1len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
		s1len++;

	ar = malloc(s1len + n + 1);

	if (ar == NULL)
		return (NULL);

	_strcpy(ar, s1);
	_strncat(ar, s2, n);
	return (ar);
}
