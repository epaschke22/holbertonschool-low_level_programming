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
	int result, n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((argv[2][0] == '/' && n2 == 0) || (argv[2][0] == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2]))(n1, n2);

	printf("%d\n", result);
	return (0);
}
