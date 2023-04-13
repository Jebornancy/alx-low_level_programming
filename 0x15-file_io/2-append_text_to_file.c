#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name of file to append
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: result
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, result;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, mode);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		result = -1;
		goto cleanup;
	}
	}

	result = 1;

cleanup:
	close(fd);
	return (result);
}
