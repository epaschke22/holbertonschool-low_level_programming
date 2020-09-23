#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers.
 * Return: always 0.
 */

int main(void)
{
	long firstnum = 1;
	long secondnum = 2;
	int i;

	printf("%ld, ", firstnum);
	printf("%ld, ", secondnum);
	for (i = 0; i < 24; i++)
	{
		firstnum = firstnum + secondnum;
		printf("%ld, ", firstnum);
		secondnum = secondnum + firstnum;
		printf("%ld", secondnum);
		if (i != 23)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
