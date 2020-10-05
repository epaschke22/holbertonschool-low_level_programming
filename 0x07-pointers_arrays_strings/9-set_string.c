#include <stdio.h>
#include "holberton.h"
/**
 * set_string - sets the valuse of a pointer to a char.
 * @s: string to copy.
 * @to: string to paste over.
 * Return: always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
