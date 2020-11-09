#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, written = 0, check;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	written = read(file, buf, letters);
	if (written == -1)
		return (0);
	check = write(1, buf, written);
	if (check == -1)
		return (0);
	close(file);
	free(buf);
	return (check);
}
