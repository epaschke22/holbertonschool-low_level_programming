#include <stdio.h>
#include "holberton.h"

/**
 * main - print out name of the program.
 * @argc: argument count.
 * @argv: argument vector array.
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = argc;

	printf("%s\n", argv[i - 1]);
	return (0);
}
