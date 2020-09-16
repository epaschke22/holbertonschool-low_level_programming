/**
 * main - returns size of char, int, long int, long long int, and float.
 * @c generic char var
 * @i generic int var
 * @li generic long int var
 * @lli generic long long int var
 * @f generic float var
 * Return: prints out 5 messages and returns 0.
 */
#include <stdio.h>

int main(void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
