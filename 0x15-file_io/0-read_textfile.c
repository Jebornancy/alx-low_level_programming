#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_written, bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);

	free(buffer);

	return (bytes_written);
}
