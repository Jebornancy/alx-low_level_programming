#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a str containing a binary number
 *
 * Return: converted number or 0 if string b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] =='0' || b[i] == '1')
		{
			num = num << 1;
					num += b[i] - '0';
					i++;
					
		}
		else
		{
		return (0);
		}

	}
	return (num);
}
