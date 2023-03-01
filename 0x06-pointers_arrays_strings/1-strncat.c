#include "main.h"

/**
 * _strncat - appends n characters from string 2 to string 1
 * @dest: string 1
 * @src: string 2
 * @n: number of characters to be appended
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;

	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];

	return (dest);
}
