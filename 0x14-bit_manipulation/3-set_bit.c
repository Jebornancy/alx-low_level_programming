#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the unsigned long int number to modify
 * @index: index of the bit to set to 1,starting from 0
 *
 * Return: Returns 1 if successful, -1 if the index was invalid
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
