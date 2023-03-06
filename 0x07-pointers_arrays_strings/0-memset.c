#include "main.h"

/**
 *_memset - fills memory
 * @s: is a pointer to the start of the memory block
 * @b: is the byte value to be written to each memory location
 * @n: is the number of bytes to be written
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}

	return (s);
}
