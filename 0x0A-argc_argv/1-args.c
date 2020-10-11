#include <stdio.h>
#include "holberton.h"

/**
 * main - print out the argument count.
 * @argc: argument count.
 * @argv: argument vector array.
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
