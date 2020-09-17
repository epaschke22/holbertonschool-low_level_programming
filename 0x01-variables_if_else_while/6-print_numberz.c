/**
 * main - This program prints numbers 0-9.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
