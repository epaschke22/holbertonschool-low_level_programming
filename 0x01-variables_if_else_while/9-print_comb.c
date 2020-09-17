/**
 * main - This program prints numbers 0-9 with commas and spaces.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(32);
	}
        putchar('\n');
        return (0);
}
