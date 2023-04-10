#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits to flip
 * @n: first input number
 * @m: second input number
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);

}
