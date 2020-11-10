#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * closefiles - closes both files and checks for errors
 * @file1: file_from
 * @file2: file_to
 * Return: void
 */
void closefiles(int file1, int file2)
{
	int close1, close2;

	close1 = close(file1);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	close2 = close(file2);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
}

/**
 * copytofile - main process of the program
 * @file1: file_from
 * @file2: file_to
 * @buf: buffer to hold characters to be copied
 * @a: argument to print
 * Return: void
 */
void copytofile(int file1, int file2, char *buf, char **a)
{
	int wcheck, readbytes, totalbytes = 0;

	while (1)
	{
		readbytes = read(file1, buf, 1024);
		if (readbytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
			exit(98);
		}
		if (readbytes == 0)
			break;
		totalbytes += readbytes;
		if (totalbytes % 1024 == 0 && readbytes != 0)
			wcheck = write(file2, buf, readbytes);
		if (totalbytes % 1024 != 0)
			wcheck = write(file2, buf, (totalbytes % 1024));
		if (wcheck == -1)
		{
			closefiles(file1, file2);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a[2]);
			exit(99);
		}
	}
}

/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments
 * @av: list of arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	char *buf;

	buf = malloc(1024 * sizeof(char));
	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	copytofile(file_from, file_to, buf, av);
	closefiles(file_from, file_to);
	free(buf);
	return (0);
}
