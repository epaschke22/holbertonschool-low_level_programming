#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - add all arguments, but error if not number.
 * @argc: argument count.
 * @argv: argument vector array.
 * Return: always 0
 */
int main(int argc, char* argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
