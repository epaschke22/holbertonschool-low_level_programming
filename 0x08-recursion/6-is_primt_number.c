#include "holberton.h"

/**
 * helper - helps find if n is prime of n using a.
 * @n: number input.
 * @a: number from 1 to n to check sqrt.
 * Return: either a or -1.
 */
int helper(int n, int a)
{
	if (n % a == 0)
		return (0);
	if (a > n / 2)
		return (1);
	return (helper(n, a + 1));
}

/**
 * is_prime_number - returns weather a number is prime.
 * @n: input number.
 * Return: 1 if prime, else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (helper(n, 2));
}
