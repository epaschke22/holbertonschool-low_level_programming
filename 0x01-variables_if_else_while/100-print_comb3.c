/**
 * main - This program prints numbers 00-99 with commas and spaces.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (j != '9' || i != '9')
			{
				putchar(',');
				putchar(32);
			}
		}
		j++;
	}
	putchar('\n');
	return (0);
}
