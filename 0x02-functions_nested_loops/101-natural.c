#include <stdio.h>
/**
 * main - prints out the sum of all mutiples of 3 and 5 below 1024
 * Return: always 0.
 */

int main(void)
{
	int totalsum;
	int multiple;

	for (multiple = 0; multiple < 1025; multiple++)
		if ((multiple % 3) == 0 || (multiple % 5) == 0)
			totalsum = totalsum + multiple;
	printf("%d\n", totalsum);
	return (0);
}
