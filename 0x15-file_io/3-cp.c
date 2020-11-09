#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments
 * @av: list of arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from, file_to, readbytes, writebytes, close1, close2;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buf = malloc(1024 * sizeof(char));
	readbytes = read(file_from, buf, 1024);
	writebytes = write(file_to, buf, readbytes);
	if (writebytes == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[1]);
		exit(99);
	}
	close1 = close(file_from);
	if (close1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close2 = close(file_to);
	if (close2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	free(buf);
	return (0);
}
