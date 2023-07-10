#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - function that creates files
 * @filename: pointer to the name of the file to create
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: file
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (!text_content)
	{
	bytes_written = write(file_descriptor, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	}
	close(file_descriptor);
	return (1);
}

