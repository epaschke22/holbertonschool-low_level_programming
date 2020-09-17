/**
 * main - This program will print the last digit of the random number 'n'.
 * Return: should return 0.
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (abs(last) > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, last);
	else if (abs(last) > 0 && last < 6)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else
		printf("The last digit of %d is %d and is 0\n", n, last);
	return (0);
}
