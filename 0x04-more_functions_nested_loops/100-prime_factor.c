#include <stdio.h>
/**
 * main - prints out the largest prime factor of 612852475143
 * Return: always 0
 */

int main(void)
{
	long num = 612852475143;
	long factor;

	for (factor = 2; factor < num; factor++)
		while (num % factor == 0)
		{
			if (num == factor)
				break;
			num = num / factor;
		}
	printf("%ld\n", num);
	return (0);
}
