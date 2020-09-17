/**
 * main - This program prints out the first 16 numbers of hexadecimal.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	int i;
	char ch;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
