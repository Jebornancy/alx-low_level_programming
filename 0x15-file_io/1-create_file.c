#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Create a new file
 * @filename: name of the file to create.
 * @text_content: content to write to the file.
 *
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;


	if (!filename)
		return (-1);


	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);


	if (text_content != NULL)
	{
	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
		return (-1);
	}


	close(fd);
	return (1);
}

