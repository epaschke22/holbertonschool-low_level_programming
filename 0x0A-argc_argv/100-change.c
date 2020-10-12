#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - add all arguments, but error if not number.
 * @argc: argument count.
 * @argv: argument vector array.
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0, count = 0, money = 0;

	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	while(money != 0)
	{
		if (money >= coins[i])
		{
			count++;
			money -= coins[i];
		}
		else
			i++;
	}
	printf("%d\n", count);
	return (0);
}
