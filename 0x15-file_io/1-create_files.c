#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: content to put into file
 * Return: 1 for success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, len, written;

	if (filename == NULL)
		return (-1);
	while (text_content[len])
		len++;
	file = open(filename, O_CREAT | O_WRONLY, 0600);
	if (file == -1)
		return (-1);
	if (len > 0)
	{
		written = write(file, text_content, size_t(len));
		if (written == -1)
			return (-1);
	}
	return (1);
}
