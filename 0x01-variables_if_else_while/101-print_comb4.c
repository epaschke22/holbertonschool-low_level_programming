/**
 * main - outputs all unique combinations of 3 digits.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = 0; hundreds <= 7; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 8; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hundreds != 7 || tens != 8 || ones != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
