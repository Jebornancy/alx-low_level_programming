#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Append text at end of file
 * @filename: pointer to name of the file to append
 * @text_content: text to append
 * Return: result
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, new_text;
	size_t length;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		return (1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	length = strlen(text_content);
	new_text = write(file_descriptor, text_content, length);
	close(file_descriptor);
	if (new_text == -1 || (size_t)new_text != length)
		return (-1);
	return (1);
}
