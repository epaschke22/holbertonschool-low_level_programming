/**
 * main - prints out Holberton with putchar and a forloop
 * Return: should always return 0
 */
#include <stdio.h>
#include "holberton.h"

int main(void)
{
	char Hstring[] = "Holberton";
	int i;

	for(i = 0; Hstring[i] != '\0'; i++)
	{
		_putchar(Hstring[i]);
	}
	_putchar('\n');
	return (0);
}
