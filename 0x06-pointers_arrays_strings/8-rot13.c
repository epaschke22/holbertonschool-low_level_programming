#include "holberton.h"
/**
 * rot13 - roates the characters 13 places.
 * @s: string to encrypt.
 * Return: always 0
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != 0; i++)
		for (j = 0; alpha[j] = 0; j++)
			if (s[i] == alpha[j])
				s[i] = rot13[j];
	return (s);
}
