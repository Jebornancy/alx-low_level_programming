#include "main.h"


/**
 * _strcat - appends string 2 to the end of string 1
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;

	int i;


	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;

	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;

	for (i = 0 ; i <= srclen ; i++)
		dest[destlen + i] = src[i];


	return (dest);
}
