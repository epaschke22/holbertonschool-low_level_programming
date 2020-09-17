/**
 * main - This program prints out the alphabet with purchar.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	char chl;
	char chu;

	for (chl = 'a'; chl <= 'z'; chl++)
		putchar(chl);
	for (chu = 'A'; chu <= 'Z'; chu++)
		putchar(chu);
	putchar('\n');
	return (0);
}
