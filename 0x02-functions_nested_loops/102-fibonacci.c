#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers.
 * Return: always 0.
 */

int main(void)
{
	long firstnum = 1;
	long secondnum = 1;
	int i;

	for (i = 0; i < 25; i++)
	{
		printf("%ld\n", firstnum);
		firstnum = firstnum + secondnum;
		printf("%ld\n", secondnum);
		secondnum = secondnum + firstnum;
	}
	return (0);
}
