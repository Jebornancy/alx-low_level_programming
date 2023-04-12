#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: pointer to a strin
 * @letters: number of letters to be read and printed
 *
 * Return: bytes read
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buf;
        ssize_t bytes_read, bytes_written;
        FILE *file;

        if (filename == NULL)
                return (0);

        file = fopen(filename,"r");
        if (file == NULL)
                return (0);

        buf = malloc(letters * sizeof(char));
        if (buf == NULL)
                return (0);

	bytes_read = fread(buf ,sizeof(char), letters, file);
	if (bytes_read == 0)
		return (0);

	bytes_written = write(STDOUT_FILENO,buf,bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	free(buf);
	fclose(file);

	return (bytes_read);


}

