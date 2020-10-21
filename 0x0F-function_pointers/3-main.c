#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2]))(num1, num2);

	printf("%d\n", result);
	return (0);
}
