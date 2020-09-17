/**
 * main - This program prints out the alphabet with purchar.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return 0;
}
