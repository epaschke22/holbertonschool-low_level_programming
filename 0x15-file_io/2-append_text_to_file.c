#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file to add text to
 * @text_content: content to put into file
 * Return: 1 for success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, written;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		written = write(file, text_content, len);
		if (written == -1)
			return (-1);
	}
	close(file);
	return (1);
}
