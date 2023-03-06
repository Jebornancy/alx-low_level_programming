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
	unsigned char *p = s;

	while (n-- > 0)
	{
	*p++ = (unsigned char) c;
	}
	return (s);
}
