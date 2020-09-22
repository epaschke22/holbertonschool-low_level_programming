/**
 * main - prints the alphabet with the print_alphabet function
 * Return: should always be 0
 */
#include <stdio.h>
#include "holberton.h"

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
