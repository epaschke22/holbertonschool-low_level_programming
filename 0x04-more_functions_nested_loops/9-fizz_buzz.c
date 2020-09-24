#include <stdio.h>
/**
 * main - fizzbuzz, print fizz on 3s and buzz on 5s and fizzbuzz on both.
 * Return: always 0
 */

int main(void)
{
	int i;

	putchar('1');
	for (i = 2; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
