#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * closefiles - closes both files and checks for errors
 * @file1: first file
 * @file2: second file
 * Return: void
 */
void closefiles(int file1, int file2)
{
	int close1, close2;

	close1 = close(file1);
	if (close1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	close2 = close(file2);
	if (close2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
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
	int file_from, file_to, wcheck, flag, readbytes, totalbytes = 0;
	char *buf;

	buf = malloc(1024 * sizeof(char));
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

	while(flag != 1)
	{
		readbytes = read(file_from, buf, 1024);
		if (readbytes == 0)
		{
			flag = 1;
			continue;
		}
		totalbytes += readbytes;
		if (totalbytes % 1024 == 0 && readbytes != 0)
			wcheck = write(file_to, buf, readbytes);
		if (totalbytes % 1024 != 0)
			wcheck = write(file_to, buf, (totalbytes % 1024));
		if (wcheck == -1)
		{
			closefiles(file_from, file_to);
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[1]);
			exit(99);
		}
	}
	closefiles(file_from, file_to);
	free(buf);
	return (0);
}
