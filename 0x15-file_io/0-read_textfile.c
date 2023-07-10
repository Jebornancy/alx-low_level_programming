#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads the textfile of file
 *@filename: pointer to string
 *@letters: the letters to the text
 *
 * Return: actual number of characters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_written, bytes_read;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);

	free(buffer);

	return (bytes_written);
}

