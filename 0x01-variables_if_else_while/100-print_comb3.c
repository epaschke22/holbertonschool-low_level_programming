/**
 * main - This program prints numbers 00-99 with commas and spaces.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int d = '1';

	for (i = '0'; i <= '8'; i++)
	{
		for (j = d; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(32);
				}
			}
		}
		d++;
	}
	putchar('\n');
	return (0);
}
