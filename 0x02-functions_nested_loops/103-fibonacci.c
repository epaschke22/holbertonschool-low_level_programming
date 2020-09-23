#include <stdio.h>
/**
 * main - adds together all even fib numbers under 4 million. 
 * Return: always 0.
 */

int main(void)
{
	long firstnum = 1;
	long secondnum = 2;
	long sum;

	while (firstnum < 4000000 || secondnum < 4000000)
	{
		firstnum = firstnum + secondnum;
		if (firstnum % 2 != 0)
			sum = sum + firstnum;
		secondnum = secondnum + firstnum;
		if (secondnum % 2 != 0)
			sum = sum + secondnum;
        }
	printf("%ld\n", sum);
	return (0);
}
