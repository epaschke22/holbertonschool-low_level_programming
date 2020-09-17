/**
 * main - This program prints out the alphabet backwards.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
