#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: unsigned int
 * @n: unsigned int long
 *
 * Return: value of the bit at index or -1 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if(index >= (sizeof(unsigned long int) * 8)){
		return (-1);
	}
	return ((n >> index) & 1);

}
